package io.swagger.api;

import io.swagger.model.BuyItNowList;
import io.swagger.model.CaptchaResponse;
import io.swagger.model.InlineResponse2005;
import io.swagger.model.InlineResponse2006;
import io.swagger.model.InlineResponse2007;
import io.swagger.model.InlineResponse401;
import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;
import io.swagger.model.OauthBody;
import io.swagger.model.OauthBody2;
import io.swagger.model.ServicesInfo;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
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
    @Operation(summary = "Get Captcha Challenge", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "An array containing a `captcha` field containing a string with a base64 encoded captcha image.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = CaptchaResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Countries", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The list of countries with both 2 letter abbreviations and the country names.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Object getCountries(@QueryParam("fetch_by")String fetchBy);

    /**
     * Get Server Info
     *
     * Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     *
     */
    @GET
    @Path("/info")
    @Produces({ "application/json" })
    @Operation(summary = "Get Server Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The modules and services information from the server.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServicesInfo.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Login Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Various pieces of information useful for rendering a login page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginInfo.class))),
        @ApiResponse(responseCode = "403", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
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
    @Operation(summary = "List Marketplace Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Marketplace Buy it now servers list", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BuyItNowList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get OAuth Redirect URL", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth redirect URL for the requested provider.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2005.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2005 getOauthRedirect(@QueryParam("provider")String provider);

    /**
     * Get Available Timezones
     *
     * Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
     *
     */
    @GET
    @Path("/account/timezones")
    @Produces({ "application/json" })
    @Operation(summary = "Get Available Timezones", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "An array of all available timezone identifiers.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))) })
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
    @Operation(summary = "Complete OAuth Two-Factor Verification", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth 2FA verification result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2007.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2007 patchOauthTwoFactor(OauthBody2 body);

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
    @Operation(summary = "Complete OAuth Two-Factor Verification", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth 2FA verification result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2007.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2007 patchOauthTwoFactor(@Multipart(value = "account_id")  Integer accountId, @Multipart(value = "code")  String code);

    /**
     * Ping Server
     *
     * Performs a single ping/pong request to let you know if the server is up.
     *
     */
    @GET
    @Path("/ping")
    @Produces({ "application/json" })
    @Operation(summary = "Ping Server", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A simple response of \"pong\" for use with simple tests to see if a service is up. ", content = @Content(mediaType = "application/json", schema = @Schema(implementation = String.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Something is wrong") })
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
    @Operation(summary = "OAuth Callback", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth callback result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2006.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2006 postOauthCallback(@QueryParam("provider")String provider, OauthBody body);

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
    @Operation(summary = "OAuth Callback", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OAuth callback result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2006.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2006 postOauthCallback(@QueryParam("provider")String provider, @Multipart(value = "provider", required = false)  String provider2);

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
    @Operation(summary = "Submit Login Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public LoginSuccessResponse submitLogin(@Multipart(value = "login")  String login, @Multipart(value = "passwd")  String passwd, @Multipart(value = "remember")  String remember, @Multipart(value = "g-recaptcha-response")  LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, @Multipart(value = "tfa")  String tfa);

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
    @Operation(summary = "Submit Login Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Successful login response containing the session token.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginSuccessResponse.class))),
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public LoginSuccessResponse submitLogin(LoginSubmissionExample body);

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
    @Operation(summary = "Submit Signup Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Account created successfully."),
        @ApiResponse(responseCode = "402", description = "Error response to a login request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LoginErrorResponse.class))) })
    public void submitSignup(LoginSubmissionExample body);
}
