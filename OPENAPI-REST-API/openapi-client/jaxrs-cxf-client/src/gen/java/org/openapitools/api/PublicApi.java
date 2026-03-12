package org.openapitools.api;

import org.openapitools.model.BuyItNowList;
import org.openapitools.model.CaptchaResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetOauthRedirect200Response;
import org.openapitools.model.LoginErrorResponse;
import org.openapitools.model.LoginInfo;
import org.openapitools.model.LoginSubmissionExample;
import org.openapitools.model.LoginSubmissionExampleGRecaptchaResponse;
import org.openapitools.model.LoginSuccessResponse;
import org.openapitools.model.PatchOauthTwoFactor200Response;
import org.openapitools.model.PatchOauthTwoFactorRequest;
import org.openapitools.model.PostOauthCallback200Response;
import org.openapitools.model.PostOauthCallbackRequest;
import org.openapitools.model.ServicesInfo;

import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("")
@Api(value = "/", description = "")
public interface PublicApi  {

    /**
     * Get Captcha Challenge
     *
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     *
     */
    @GET
    @Path("/captcha")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Captcha Challenge", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "An array containing a `captcha` field containing a string with a base64 encoded captcha image.", response = CaptchaResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public CaptchaResponse getCaptcha();

    /**
     * Get Countries
     *
     * Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     *
     */
    @GET
    @Path("/account/countries")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Countries", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The list of countries with both 2 letter abbreviations and the country names.", response = Object.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Object getCountries(@QueryParam("fetch_by") String fetchBy);

    /**
     * Get Server Info
     *
     * Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     *
     */
    @GET
    @Path("/info")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Server Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The modules and services information from the server.", response = ServicesInfo.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ServicesInfo getInfo();

    /**
     * Get Login Info
     *
     * Gets the various pieces of information useful for generating a login page.
     *
     */
    @GET
    @Path("/login")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Login Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Various pieces of information useful for rendering a login page.", response = LoginInfo.class),
        @ApiResponse(code = 403, message = "Error response to a login request.", response = LoginErrorResponse.class) })
    public LoginInfo getLoginInfo();

    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     *
     */
    @GET
    @Path("/buy_now_servers_list")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Marketplace Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Marketplace Buy it now servers list", response = BuyItNowList.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BuyItNowList getMPServers();

    /**
     * Get OAuth Redirect URL
     *
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
     *
     */
    @GET
    @Path("/oauth")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get OAuth Redirect URL", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "OAuth redirect URL for the requested provider.", response = GetOauthRedirect200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GetOauthRedirect200Response getOauthRedirect(@QueryParam("provider") String provider);

    /**
     * Get Available Timezones
     *
     * Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
     *
     */
    @GET
    @Path("/account/timezones")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Available Timezones", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "An array of all available timezone identifiers.", response = String.class, responseContainer = "List") })
    public List<String> getTimezones();

    /**
     * Complete OAuth Two-Factor Verification
     *
     * Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
     *
     */
    @PATCH
    @Path("/oauth")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Complete OAuth Two-Factor Verification", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "OAuth 2FA verification result.", response = PatchOauthTwoFactor200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public PatchOauthTwoFactor200Response patchOauthTwoFactor(PatchOauthTwoFactorRequest patchOauthTwoFactorRequest);

    /**
     * Ping Server
     *
     * Performs a single ping/pong request to let you know if the server is up.
     *
     */
    @GET
    @Path("/ping")
    @Produces({ "application/json" })
    @ApiOperation(value = "Ping Server", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A simple response of \"pong\" for use with simple tests to see if a service is up. ", response = String.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Something is wrong") })
    public String pingServer();

    /**
     * OAuth Callback
     *
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
     *
     */
    @POST
    @Path("/oauth")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "OAuth Callback", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "OAuth callback result.", response = PostOauthCallback200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public PostOauthCallback200Response postOauthCallback(@QueryParam("provider") String provider, PostOauthCallbackRequest postOauthCallbackRequest);

    /**
     * Submit Login Information
     *
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
     *
     */
    @POST
    @Path("/login")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Submit Login Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successful login response containing the session token.", response = LoginSuccessResponse.class),
        @ApiResponse(code = 402, message = "Error response to a login request.", response = LoginErrorResponse.class),
        @ApiResponse(code = 200, message = "Default response") })
    public LoginSuccessResponse submitLogin(@Multipart(value = "login")  String login, @Multipart(value = "passwd")  String passwd, @Multipart(value = "remember", required = false)  String remember, @Multipart(value = "g-recaptcha-response", required = false)  LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse, @Multipart(value = "tfa", required = false)  String tfa);

    /**
     * Submit Signup Information
     *
     * Creates a new account in our system using the provided information.
     *
     */
    @POST
    @Path("/signup")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Submit Signup Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Account created successfully."),
        @ApiResponse(code = 402, message = "Error response to a login request.", response = LoginErrorResponse.class) })
    public void submitSignup(LoginSubmissionExample loginSubmissionExample);
}
