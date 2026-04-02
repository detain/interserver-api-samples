package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2003;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
import io.swagger.model.ServiceOrderPostResponse;
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
public interface FloatingIpsApi  {

    /**
     * Place Floating IP Order
     *
     * Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/floating_ips/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Floating IP Order", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServiceOrderPostResponse addFloatingIp();

    /**
     * Cancel Floating IP
     *
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     *
     */
    @DELETE
    @Path("/floating_ips/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Floating IP", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Floating Ip Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2003.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2003 floatingIpsCancel(@PathParam("id") Integer id);

    /**
     * View Floating IP
     *
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     *
     */
    @GET
    @Path("/floating_ips/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "View Floating IP", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Detailed Floating IP service information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Object getFloatingIpInfo(@PathParam("id") Integer id);

    /**
     * Get Floating IP Invoices
     *
     * Returns the billing invoices associated with this Floating IP service.
     *
     */
    @GET
    @Path("/floating_ips/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Floating IP Invoices", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getFloatingIpInvoices(@PathParam("id") Integer id);

    /**
     * List Floating IPs
     *
     * Returns all Floating IP services on the account with their current status and assignment details.
     *
     */
    @GET
    @Path("/floating_ips")
    @Produces({ "application/json" })
    @Operation(summary = "List Floating IPs", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Floating IPs` services on your account."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void getFloatingIpsList();

    /**
     * Resend Floating IPs Welcome Email
     *
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     *
     */
    @GET
    @Path("/floating_ips/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Floating IPs Welcome Email", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getFloatingIpsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Floating IP Ordering Information
     *
     * Retrieves available options and pricing for ordering a new Floating IP.
     *
     */
    @GET
    @Path("/floating_ips/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get Floating IP Ordering Information", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Available options and pricing for ordering a Floating IP.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Object getNewFloatingIp();

    /**
     * Change Floating IP Target
     *
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
     *
     */
    @POST
    @Path("/floating_ips/{id}/change_ip")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Floating IP Target", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postFloatingIpsChangeIp(@Multipart(value = "ip")  String ip, @PathParam("id") Integer id);

    /**
     * Change Floating IP Target
     *
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
     *
     */
    @POST
    @Path("/floating_ips/{id}/change_ip")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Floating IP Target", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postFloatingIpsChangeIp(@Valid IpObject body, @PathParam("id") Integer id);

    /**
     * Validate Floating IP Order
     *
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    @PUT
    @Path("/floating_ips/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate Floating IP Order", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Floating IPs order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putFloatingIps();

    /**
     * Update Floating IP
     *
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     *
     */
    @POST
    @Path("/floating_ips/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Floating IP", tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateFloatingIpInfo(@PathParam("id") String id);
}
