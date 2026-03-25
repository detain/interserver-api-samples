import { RequestContext } from "../http/http";

/**
 * Interface authentication schemes.
 */
export interface SecurityAuthentication {
    /*
     * @return returns the name of the security authentication as specified in OAI
     */
    getName(): string;

    /**
     * Applies the authentication scheme to the request context
     *
     * @params context the request context which should use this authentication scheme
     */
    applySecurityAuthentication(context: RequestContext): void | Promise<void>;
}

export interface TokenProvider {
  getToken(): Promise<string> | string;
}

/**
 * Applies apiKey authentication to the request context.
 */
export class ApiKeyAuthAuthentication implements SecurityAuthentication {
    /**
     * Configures this api key authentication with the necessary properties
     *
     * @param apiKey: The api key to be used for every request
     */
    public constructor(private apiKey: string) {}

    public getName(): string {
        return "apiKeyAuth";
    }

    public applySecurityAuthentication(context: RequestContext) {
        context.setHeaderParam("X-API-KEY", this.apiKey);
    }
}

/**
 * Applies apiKey authentication to the request context.
 */
export class SessionIdHeaderAuthAuthentication implements SecurityAuthentication {
    /**
     * Configures this api key authentication with the necessary properties
     *
     * @param apiKey: The api key to be used for every request
     */
    public constructor(private apiKey: string) {}

    public getName(): string {
        return "sessionIdHeaderAuth";
    }

    public applySecurityAuthentication(context: RequestContext) {
        context.setHeaderParam("sessionid", this.apiKey);
    }
}

/**
 * Applies apiKey authentication to the request context.
 */
export class SessionIdCookieAuthAuthentication implements SecurityAuthentication {
    /**
     * Configures this api key authentication with the necessary properties
     *
     * @param apiKey: The api key to be used for every request
     */
    public constructor(private apiKey: string) {}

    public getName(): string {
        return "sessionIdCookieAuth";
    }

    public applySecurityAuthentication(context: RequestContext) {
        context.addCookie("sessionid", this.apiKey);
    }
}

export type AuthMethods = {
    "default"?: SecurityAuthentication,
    "apiKeyAuth"?: SecurityAuthentication,
    "sessionIdHeaderAuth"?: SecurityAuthentication,
    "sessionIdCookieAuth"?: SecurityAuthentication
}

export type ApiKeyConfiguration = string;
export type HttpBasicConfiguration = { "username": string, "password": string };
export type HttpBearerConfiguration = { tokenProvider: TokenProvider };
export type OAuth2Configuration = { accessToken: string };
export type HttpSignatureConfiguration = unknown; // TODO: Implement

export type AuthMethodsConfiguration = {
    "default"?: SecurityAuthentication,
    "apiKeyAuth"?: ApiKeyConfiguration,
    "sessionIdHeaderAuth"?: ApiKeyConfiguration,
    "sessionIdCookieAuth"?: ApiKeyConfiguration
}

/**
 * Creates the authentication methods from a swagger description.
 *
 */
export function configureAuthMethods(config: AuthMethodsConfiguration | undefined): AuthMethods {
    let authMethods: AuthMethods = {}

    if (!config) {
        return authMethods;
    }
    authMethods["default"] = config["default"]

    if (config["apiKeyAuth"]) {
        authMethods["apiKeyAuth"] = new ApiKeyAuthAuthentication(
            config["apiKeyAuth"]
        );
    }

    if (config["sessionIdHeaderAuth"]) {
        authMethods["sessionIdHeaderAuth"] = new SessionIdHeaderAuthAuthentication(
            config["sessionIdHeaderAuth"]
        );
    }

    if (config["sessionIdCookieAuth"]) {
        authMethods["sessionIdCookieAuth"] = new SessionIdCookieAuthAuthentication(
            config["sessionIdCookieAuth"]
        );
    }

    return authMethods;
}