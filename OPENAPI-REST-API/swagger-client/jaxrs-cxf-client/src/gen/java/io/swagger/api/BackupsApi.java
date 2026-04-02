package io.swagger.api;

import io.swagger.model.Backup;
import io.swagger.model.BackupLoginResponse;
import io.swagger.model.BackupOrderPostResponse;
import io.swagger.model.BackupOrderPutRequest;
import io.swagger.model.BackupOrderPutResponse;
import io.swagger.model.BackupRow;
import io.swagger.model.BackupsOrder;
import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2001;
import io.swagger.model.InlineResponse401;
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

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
public interface BackupsApi  {

    /**
     * Place Backup Order
     *
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
     *
     */
    @POST
    @Path("/backups/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the backup order call including invoice IDs for payment.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public BackupOrderPostResponse addBackup(@Multipart(value = "validateOnly")  Boolean validateOnly, @Multipart(value = "serviceType")  Integer serviceType, @Multipart(value = "coupon")  String coupon);

    /**
     * Place Backup Order
     *
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
     *
     */
    @POST
    @Path("/backups/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the backup order call including invoice IDs for payment.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public BackupOrderPostResponse addBackup(BackupOrderPutRequest body);

    /**
     * Cancel Backup Service
     *
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     *
     */
    @DELETE
    @Path("/backups/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Backup Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Backups Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2001.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2001 cancelBackup(@PathParam("id") Integer id);

    /**
     * Get Backup Service Details
     *
     * Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
     *
     */
    @GET
    @Path("/backups/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Service Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Full backup service details including serviceInfo, billingDetails, and client_links.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Backup.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Backup getBackupInfo(@PathParam("id") Integer id);

    /**
     * Get Backup Order Invoices
     *
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     *
     */
    @GET
    @Path("/backups/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Order Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getBackupInvoices(@PathParam("id") Integer id);

    /**
     * Get Backup Storage Panel Login
     *
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     *
     */
    @GET
    @Path("/backups/{id}/login")
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Storage Panel Login", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Login session details for the backup storage service.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupLoginResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public BackupLoginResponse getBackupLogin(@PathParam("id") Integer id);

    /**
     * List Backup Services
     *
     * Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
     *
     */
    @GET
    @Path("/backups")
    @Produces({ "application/json" })
    @Operation(summary = "List Backup Services", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of backup storage services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = BackupRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<BackupRow> getBackupsList();

    /**
     * Resend Backup Welcome Email
     *
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     *
     */
    @GET
    @Path("/backups/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Backup Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getBackupsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Backup Order Form Data
     *
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
     *
     */
    @GET
    @Path("/backups/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Order Form Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Information needed to generate an order form.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupsOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public BackupsOrder getNewBackup();

    /**
     * Update Backup Information
     *
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     *
     */
    @POST
    @Path("/backups/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Backup Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateBackupInfo(@PathParam("id") Integer id);

    /**
     * Validate Backup Order
     *
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
     *
     */
    @PUT
    @Path("/backups/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Backup Order Response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public BackupOrderPutResponse validateBackupOrder(@Multipart(value = "validateOnly")  Boolean validateOnly, @Multipart(value = "serviceType")  Integer serviceType, @Multipart(value = "coupon")  String coupon);

    /**
     * Validate Backup Order
     *
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
     *
     */
    @PUT
    @Path("/backups/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Backup Order Response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public BackupOrderPutResponse validateBackupOrder(BackupOrderPutRequest body);
}
