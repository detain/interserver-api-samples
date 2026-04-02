package org.openapitools.api;

import org.openapitools.model.AccountInfo;
import org.openapitools.model.GenericResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetAccountTfaSetup200Response;
import org.openapitools.model.Home;
import org.openapitools.model.IpLimitRange;
import org.openapitools.model.SearchAutocompleteResponse;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;

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
public interface AccountApi  {

    /**
     * Change Account Username
     *
     * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
     *
     */
    @POST
    @Path("/account/username")
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Account Username", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse changeAccountUsername();

    /**
     * Unlink OAuth Account
     *
     * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
     *
     */
    @DELETE
    @Path("/account/oauth/{name}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Unlink OAuth Account", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteAccountOauthName(@PathParam("name") String name);

    /**
     * Disable Two-Factor Authentication
     *
     * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
     *
     */
    @DELETE
    @Path("/account/2fa")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable Two-Factor Authentication", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteAccountTfa();

    /**
     * Remove IP Access Restriction
     *
     * Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     *
     */
    @PATCH
    @Path("/account/iplimits")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Remove IP Access Restriction", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "IP Range removed.", response = GenericResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GenericResponse deleteIpLimit(IpLimitRange ipLimitRange);

    /**
     * Retrieve Account Details
     *
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
     *
     */
    @GET
    @Path("/account")
    @Produces({ "application/json" })
    @ApiOperation(value = "Retrieve Account Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Your account information.", response = AccountInfo.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public AccountInfo getAccountInfo();

    /**
     * Get Two-Factor Setup Data
     *
     * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
     *
     */
    @GET
    @Path("/account/2fa")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Two-Factor Setup Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Two-factor authentication setup data.", response = GetAccountTfaSetup200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GetAccountTfaSetup200Response getAccountTfaSetup();

    /**
     * Get Home Data
     *
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     *
     */
    @GET
    @Path("/home")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Home Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "General information for use on the home page.", response = Home.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Home getHome();

    /**
     * Search Autocomplete
     *
     * Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.
     *
     */
    @GET
    @Path("/search")
    @Produces({ "application/json" })
    @ApiOperation(value = "Search Autocomplete", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Search autocomplete results for the account.", response = SearchAutocompleteResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SearchAutocompleteResponse getSearch();

    /**
     * Log Out
     *
     * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
     *
     */
    @GET
    @Path("/logout")
    @Produces({ "application/json" })
    @ApiOperation(value = "Log Out", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse logout();

    /**
     * Logout of OAuth
     *
     * Logs out of the specified OAuth provider session.
     *
     */
    @GET
    @Path("/account/oauth/{name}/logout")
    @Produces({ "application/json" })
    @ApiOperation(value = "Logout of OAuth", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse logoutAccountOauth(@PathParam("name") String name);

    /**
     * Generate New API Key
     *
     * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
     *
     */
    @POST
    @Path("/account/apikey")
    @Produces({ "application/json" })
    @ApiOperation(value = "Generate New API Key", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateAccountApiKey();

    /**
     * Update Account Feature Flags
     *
     * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
     *
     */
    @POST
    @Path("/account/features")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Account Feature Flags", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 422, message = "Request was valid but did not contain updatable values.", response = TextResponse.class) })
    public SuccessTextResponse updateAccountFeatures(@Multipart(value = "disable_reset", required = false)  Integer disableReset, @Multipart(value = "disable_reinstall", required = false)  Integer disableReinstall);

    /**
     * Update Account Information
     *
     * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
     *
     */
    @POST
    @Path("/account")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Account Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 422, message = "Validation error while updating account data.", response = TextResponse.class) })
    public SuccessTextResponse updateAccountInfo(@Multipart(value = "name")  String name, @Multipart(value = "address")  String address, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "zip")  String zip, @Multipart(value = "country")  String country, @Multipart(value = "phone")  String phone, @Multipart(value = "company", required = false)  String company, @Multipart(value = "address2", required = false)  String address2, @Multipart(value = "locale", required = false)  String locale, @Multipart(value = "email_invoices", required = false)  String emailInvoices, @Multipart(value = "email_abuse", required = false)  String emailAbuse, @Multipart(value = "disable_reset", required = false)  Boolean disableReset, @Multipart(value = "disable_reinstall", required = false)  Boolean disableReinstall, @Multipart(value = "disable_server_notifications", required = false)  Boolean disableServerNotifications, @Multipart(value = "disable_email_notifications", required = false)  Boolean disableEmailNotifications, @Multipart(value = "gstin", required = false)  String gstin);

    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     *
     */
    @POST
    @Path("/account/iplimits")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add IP Access Restriction", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 422, message = "IP limit payload contains an invalid address.", response = TextResponse.class) })
    public SuccessTextResponse updateAccountIpLimits(@Multipart(value = "start")  String start, @Multipart(value = "end")  String end);

    /**
     * Change Account Password
     *
     * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
     *
     */
    @POST
    @Path("/account/password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Account Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse updateAccountPassword(@Multipart(value = "password")  String password);

    /**
     * Update SSH Keys
     *
     * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
     *
     */
    @POST
    @Path("/account/sshkey")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update SSH Keys", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateAccountSshKey(@Multipart(value = "ssh_key", required = false)  String sshKey);

    /**
     * Enable Two-Factor Authentication
     *
     * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
     *
     */
    @POST
    @Path("/account/2fa")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Enable Two-Factor Authentication", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 422, message = "Provided two-factor verification code was invalid.", response = TextResponse.class) })
    public SuccessTextResponse updateAccountTfa(@Multipart(value = "2fa_google_code")  String _2faGoogleCode);
}
