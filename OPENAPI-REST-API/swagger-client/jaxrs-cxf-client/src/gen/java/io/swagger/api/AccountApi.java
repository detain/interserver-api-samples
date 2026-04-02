package io.swagger.api;

import io.swagger.model.Account2faBody1;
import io.swagger.model.AccountFeatures;
import io.swagger.model.AccountInfo;
import io.swagger.model.AccountInfoPost;
import io.swagger.model.AccountSshKey;
import io.swagger.model.GenericResponse;
import io.swagger.model.Home;
import io.swagger.model.InlineResponse200;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpLimitRange;
import io.swagger.model.PasswordRequest;
import io.swagger.model.SearchAutocompleteResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

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
    @Operation(summary = "Change Account Username", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Unlink OAuth Account", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Disable Two-Factor Authentication", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse deleteAccountTfa();

    /**
     * Remove IP Access Restriction
     *
     * Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
     *
     */
    @PATCH
    @Path("/account/iplimits")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Remove IP Access Restriction", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "IP Range removed.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public GenericResponse deleteIpLimit();

    /**
     * Retrieve Account Details
     *
     * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
     *
     */
    @GET
    @Path("/account")
    @Produces({ "application/json" })
    @Operation(summary = "Retrieve Account Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Your account information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = AccountInfo.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Two-Factor Setup Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Two-factor authentication setup data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse200.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse200 getAccountTfaSetup();

    /**
     * Get Home Data
     *
     * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
     *
     */
    @GET
    @Path("/home")
    @Produces({ "application/json" })
    @Operation(summary = "Get Home Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "General information for use on the home page.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Home.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Home getHome();

    /**
     * Search Autocomplete
     *
     * Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.
     *
     */
    @GET
    @Path("/search")
    @Produces({ "application/json" })
    @Operation(summary = "Search Autocomplete", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search autocomplete results for the account.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SearchAutocompleteResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Log Out", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Logout of OAuth", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Generate New API Key", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Update Account Feature Flags", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Request was valid but did not contain updatable values.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountFeatures(@Multipart(value = "disable_reset")  Integer disableReset, @Multipart(value = "disable_reinstall")  Integer disableReinstall);

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
    @Operation(summary = "Update Account Feature Flags", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Request was valid but did not contain updatable values.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountFeatures(AccountFeatures body);

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
    @Operation(summary = "Update Account Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Validation error while updating account data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountInfo(@Multipart(value = "name")  String name, @Multipart(value = "company")  String company, @Multipart(value = "address")  String address, @Multipart(value = "address2")  String address2, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "zip")  String zip, @Multipart(value = "country")  String country, @Multipart(value = "phone")  String phone, @Multipart(value = "locale")  String locale, @Multipart(value = "email_invoices")  String emailInvoices, @Multipart(value = "email_abuse")  String emailAbuse, @Multipart(value = "disable_reset")  Boolean disableReset, @Multipart(value = "disable_reinstall")  Boolean disableReinstall, @Multipart(value = "disable_server_notifications")  Boolean disableServerNotifications, @Multipart(value = "disable_email_notifications")  Boolean disableEmailNotifications, @Multipart(value = "gstin")  String gstin);

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
    @Operation(summary = "Update Account Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Validation error while updating account data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountInfo(AccountInfoPost body);

    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     *
     */
    @POST
    @Path("/account/iplimits")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add IP Access Restriction", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "IP limit payload contains an invalid address.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountIpLimits(@Multipart(value = "start")  String start, @Multipart(value = "end")  String end);

    /**
     * Add IP Access Restriction
     *
     * Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
     *
     */
    @POST
    @Path("/account/iplimits")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add IP Access Restriction", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "IP limit payload contains an invalid address.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountIpLimits(IpLimitRange body);

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
    @Operation(summary = "Change Account Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAccountPassword(@Multipart(value = "password")  String password);

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
    @Operation(summary = "Change Account Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAccountPassword(PasswordRequest body);

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
    @Operation(summary = "Update SSH Keys", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateAccountSshKey(@Multipart(value = "ssh_key")  String sshKey);

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
    @Operation(summary = "Update SSH Keys", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateAccountSshKey(AccountSshKey body);

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
    @Operation(summary = "Enable Two-Factor Authentication", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Provided two-factor verification code was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountTfa(@Multipart(value = "2fa_google_code")  String _2faGoogleCode);

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
    @Operation(summary = "Enable Two-Factor Authentication", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Provided two-factor verification code was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public SuccessTextResponse updateAccountTfa(Account2faBody1 body);
}
