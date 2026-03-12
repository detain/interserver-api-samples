package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2004;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
import io.swagger.model.License;
import io.swagger.model.LicenseRow;
import io.swagger.model.LicensesOrder;
import io.swagger.model.SuccessTextResponse;

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
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
public interface LicensesApi  {

    /**
     * Place License Order
     *
     * Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/licenses/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place License Order", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addLicense();

    /**
     * Get License
     *
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     *
     */
    @GET
    @Path("/licenses/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get License", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = License.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public License getLicenseInfo(@PathParam("id") Integer id);

    /**
     * Get License Invoices
     *
     * Returns the billing invoices associated with this license service.
     *
     */
    @GET
    @Path("/licenses/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get License Invoices", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getLicenseInvoices(@PathParam("id") Integer id);

    /**
     * List Licenses
     *
     * Returns all software license services on the account with their current status and IP assignments.
     *
     */
    @GET
    @Path("/licenses")
    @Produces({ "application/json" })
    @Operation(summary = "List Licenses", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Licenses` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = LicenseRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<LicenseRow> getLicenseList();

    /**
     * Get License Order Information for Category
     *
     * Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
     *
     */
    @GET
    @Path("/licenses/order/{catTag}")
    @Produces({ "application/json" })
    @Operation(summary = "Get License Order Information for Category", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License types and pricing for the specified category."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getLicenseOrderCatTagInfo(@PathParam("catTag") String catTag);

    /**
     * Resend License Welcome Email
     *
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     *
     */
    @GET
    @Path("/licenses/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend License Welcome Email", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getLicensesWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get License Order Information
     *
     * Retrieves available license types, categories, and pricing for ordering a new license.
     *
     */
    @GET
    @Path("/licenses/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get License Order Information", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LicensesOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public LicensesOrder getNewLicense();

    /**
     * Cancel License
     *
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     *
     */
    @DELETE
    @Path("/licenses/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel License", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2004.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2004 licensesCancel(@PathParam("id") Integer id);

    /**
     * Change License IP
     *
     * Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
     *
     */
    @POST
    @Path("/licenses/{id}/change_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Change License IP", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postLicenseChangeIp(@Valid IpObject body, @PathParam("id") Integer id);

    /**
     * Change License IP
     *
     * Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
     *
     */
    @POST
    @Path("/licenses/{id}/change_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Change License IP", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postLicenseChangeIp(@Multipart(value = "ip")  String ip, @PathParam("id") Integer id);

    /**
     * Validate License Order
     *
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    @PUT
    @Path("/licenses/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate License Order", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Licenses order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putLicenses();

    /**
     * Update License
     *
     * Updates settings on a license service such as its assigned IP.
     *
     */
    @POST
    @Path("/licenses/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update License", tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateLicenseInfo(@PathParam("id") String id);
}
