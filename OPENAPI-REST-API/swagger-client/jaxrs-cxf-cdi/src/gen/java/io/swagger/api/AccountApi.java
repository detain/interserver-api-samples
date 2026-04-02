package io.swagger.api;

import io.swagger.model.Account2faBody1;
import io.swagger.model.AccountFeatures;
import io.swagger.model.AccountInfo;
import io.swagger.model.AccountInfoPost;
import io.swagger.model.AccountSshKey;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse200;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpLimitRange;
import io.swagger.model.PasswordRequest;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.api.AccountApiService;

import javax.ws.rs.*;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import java.io.InputStream;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
@Path("/account")
@RequestScoped






public class AccountApi  {

  @Context SecurityContext securityContext;

  @Inject AccountApiService delegate;


    @POST
    @Path("/creditcards")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Credit Card to Account", description = "Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addAccountCreditCard(@Multipart(value = "name")  String name, @Multipart(value = "address")  String address, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "country")  String country, @Multipart(value = "zip")  String zip, @Multipart(value = "cc")  String cc, @Multipart(value = "cc_exp")  String ccExp, @Multipart(value = "cc_ccv2")  String ccCcv2) {
        return delegate.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2, securityContext);
    }

    @POST
    @Path("/creditcards")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Credit Card to Account", description = "Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addAccountCreditCard(
@Parameter(description = "" ,required=true) BillingAddCcRequest body
) {
        return delegate.addAccountCreditCard(body, securityContext);
    }

    @POST
    @Path("/username")
    
    @Produces({ "application/json" })
    @Operation(summary = "Change Account Username", description = "Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response changeAccountUsername() {
        return delegate.changeAccountUsername(securityContext);
    }

    @DELETE
    @Path("/creditcards/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Remove Credit Card", description = "Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Simple string response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = String.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteAccountCreditCard(
@Parameter(description = "The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.",required=true) @PathParam("id") String id
) {
        return delegate.deleteAccountCreditCard(id, securityContext);
    }

    @DELETE
    @Path("/oauth/{name}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Unlink OAuth Account", description = "Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteAccountOauthName(
@Parameter(description = "",required=true) @PathParam("name") String name
) {
        return delegate.deleteAccountOauthName(name, securityContext);
    }

    @DELETE
    @Path("/2fa")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable Two-Factor Authentication", description = "Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteAccountTfa() {
        return delegate.deleteAccountTfa(securityContext);
    }

    @PATCH
    @Path("/iplimits")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Remove IP Access Restriction", description = "Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "IP Range removed.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteIpLimit(
@Parameter(description = "" ) IpLimitRange body
) {
        return delegate.deleteIpLimit(body, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Retrieve Account Details", description = "Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Your account information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = AccountInfo.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getAccountInfo() {
        return delegate.getAccountInfo(securityContext);
    }

    @GET
    @Path("/2fa")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Two-Factor Setup Data", description = "Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Two-factor authentication setup data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse200.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getAccountTfaSetup() {
        return delegate.getAccountTfaSetup(securityContext);
    }

    @GET
    @Path("/countries")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Countries", description = "Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The list of countries with both 2 letter abbreviations and the country names.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getCountries( 
@Parameter(description = "Get countries by iso2 or iso3 or numcode", schema=@Schema(allowableValues={ "iso2", "iso3", "numcode" })
)  @QueryParam("fetch_by") String fetchBy
) {
        return delegate.getCountries(fetchBy, securityContext);
    }

    @GET
    @Path("/timezones")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Available Timezones", description = "Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Public" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "An array of all available timezone identifiers.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))) })
    public Response getTimezones() {
        return delegate.getTimezones(securityContext);
    }

    @GET
    @Path("/oauth/{name}/logout")
    
    @Produces({ "application/json" })
    @Operation(summary = "Logout of OAuth", description = "Logs out of the specified OAuth provider session.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response logoutAccountOauth(
@Parameter(description = "",required=true) @PathParam("name") String name
) {
        return delegate.logoutAccountOauth(name, securityContext);
    }

    @POST
    @Path("/apikey")
    
    @Produces({ "application/json" })
    @Operation(summary = "Generate New API Key", description = "Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountApiKey() {
        return delegate.updateAccountApiKey(securityContext);
    }

    @POST
    @Path("/creditcards/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Credit Card", description = "Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Simple string response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = String.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountCreditCard(
@Parameter(description = "The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.",required=true) @PathParam("id") Integer id
) {
        return delegate.updateAccountCreditCard(id, securityContext);
    }

    @POST
    @Path("/features")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Account Feature Flags", description = "Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Request was valid but did not contain updatable values.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountFeatures(@Multipart(value = "disable_reset")  Integer disableReset, @Multipart(value = "disable_reinstall")  Integer disableReinstall) {
        return delegate.updateAccountFeatures(disableReset, disableReinstall, securityContext);
    }

    @POST
    @Path("/features")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Account Feature Flags", description = "Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Request was valid but did not contain updatable values.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountFeatures(
@Parameter(description = "" ,required=true) AccountFeatures body
) {
        return delegate.updateAccountFeatures(body, securityContext);
    }

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Account Information", description = "Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Validation error while updating account data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountInfo(@Multipart(value = "name")  String name, @Multipart(value = "company")  String company, @Multipart(value = "address")  String address, @Multipart(value = "address2")  String address2, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "zip")  String zip, @Multipart(value = "country")  String country, @Multipart(value = "phone")  String phone, @Multipart(value = "locale")  String locale, @Multipart(value = "email_invoices")  String emailInvoices, @Multipart(value = "email_abuse")  String emailAbuse, @Multipart(value = "disable_reset")  Boolean disableReset, @Multipart(value = "disable_reinstall")  Boolean disableReinstall, @Multipart(value = "disable_server_notifications")  Boolean disableServerNotifications, @Multipart(value = "disable_email_notifications")  Boolean disableEmailNotifications, @Multipart(value = "gstin")  String gstin) {
        return delegate.updateAccountInfo(name, company, address, address2, city, state, zip, country, phone, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin, securityContext);
    }

    @POST
    
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Account Information", description = "Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Validation error while updating account data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountInfo(
@Parameter(description = "" ,required=true) AccountInfoPost body
) {
        return delegate.updateAccountInfo(body, securityContext);
    }

    @POST
    @Path("/iplimits")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add IP Access Restriction", description = "Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "IP limit payload contains an invalid address.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountIpLimits(@Multipart(value = "start")  String start, @Multipart(value = "end")  String end) {
        return delegate.updateAccountIpLimits(start, end, securityContext);
    }

    @POST
    @Path("/iplimits")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Add IP Access Restriction", description = "Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "IP limit payload contains an invalid address.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountIpLimits(
@Parameter(description = "The lower and upper bounds of an ip range." ,required=true) IpLimitRange body
) {
        return delegate.updateAccountIpLimits(body, securityContext);
    }

    @POST
    @Path("/password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Account Password", description = "Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountPassword(@Multipart(value = "password")  String password) {
        return delegate.updateAccountPassword(password, securityContext);
    }

    @POST
    @Path("/password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Account Password", description = "Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountPassword(
@Parameter(description = "" ,required=true) PasswordRequest body
) {
        return delegate.updateAccountPassword(body, securityContext);
    }

    @POST
    @Path("/sshkey")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update SSH Keys", description = "Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountSshKey(@Multipart(value = "ssh_key")  String sshKey) {
        return delegate.updateAccountSshKey(sshKey, securityContext);
    }

    @POST
    @Path("/sshkey")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update SSH Keys", description = "Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateAccountSshKey(
@Parameter(description = "" ,required=true) AccountSshKey body
) {
        return delegate.updateAccountSshKey(body, securityContext);
    }

    @POST
    @Path("/2fa")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Enable Two-Factor Authentication", description = "Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Provided two-factor verification code was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountTfa(@Multipart(value = "2fa_google_code")  String _2faGoogleCode) {
        return delegate.updateAccountTfa(_2faGoogleCode, securityContext);
    }

    @POST
    @Path("/2fa")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Enable Two-Factor Authentication", description = "Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Account" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "Provided two-factor verification code was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public Response updateAccountTfa(
@Parameter(description = "" ,required=true) Account2faBody1 body
) {
        return delegate.updateAccountTfa(body, securityContext);
    }
}
