package org.openapitools.api;

import org.openapitools.model.Backup;
import org.openapitools.model.BackupLoginResponse;
import org.openapitools.model.BackupOrderPostResponse;
import org.openapitools.model.BackupOrderPutResponse;
import org.openapitools.model.BackupRow;
import org.openapitools.model.BackupsOrder;
import org.openapitools.model.CancelBackup200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.SuccessTextResponse;

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
@Path("/backups")
@Api(value = "/", description = "")
public interface BackupsApi  {

    /**
     * Place Backup Order
     *
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
     *
     */
    @POST
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response from the backup order call including invoice IDs for payment.", response = BackupOrderPostResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public BackupOrderPostResponse addBackup(@Multipart(value = "validateOnly", required = false)  Boolean validateOnly, @Multipart(value = "serviceType", required = false)  Integer serviceType, @Multipart(value = "coupon", required = false)  String coupon);

    /**
     * Cancel Backup Service
     *
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Backup Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Backups Cancel", response = CancelBackup200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public CancelBackup200Response cancelBackup(@PathParam("id") Integer id);

    /**
     * Get Backup Service Details
     *
     * Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Backup Service Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Full backup service details including serviceInfo, billingDetails, and client_links.", response = Backup.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Backup getBackupInfo(@PathParam("id") Integer id);

    /**
     * Get Backup Order Invoices
     *
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Backup Order Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getBackupInvoices(@PathParam("id") Integer id);

    /**
     * Get Backup Storage Panel Login
     *
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     *
     */
    @GET
    @Path("/{id}/login")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Backup Storage Panel Login", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Login session details for the backup storage service.", response = BackupLoginResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BackupLoginResponse getBackupLogin(@PathParam("id") Integer id);

    /**
     * List Backup Services
     *
     * Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Backup Services", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of backup storage services on your account.", response = BackupRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<BackupRow> getBackupsList();

    /**
     * Resend Backup Welcome Email
     *
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend Backup Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getBackupsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Backup Order Form Data
     *
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Backup Order Form Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Information needed to generate an order form.", response = BackupsOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BackupsOrder getNewBackup();

    /**
     * Update Backup Information
     *
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Backup Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateBackupInfo(@PathParam("id") Integer id);

    /**
     * Validate Backup Order
     *
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
     *
     */
    @PUT
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Backup Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Backup Order Response", response = BackupOrderPutResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BackupOrderPutResponse validateBackupOrder(@Multipart(value = "validateOnly", required = false)  Boolean validateOnly, @Multipart(value = "serviceType", required = false)  Integer serviceType, @Multipart(value = "coupon", required = false)  String coupon);
}
