package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.DenyRuleNew;
import org.openapitools.model.DenyRuleRecord;
import org.openapitools.model.GenericResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.MailAlertRequest;
import org.openapitools.model.MailAlertUpdateRequest;
import org.openapitools.model.MailAlertsResponse;
import org.openapitools.model.MailBlocks;
import org.openapitools.model.MailCancel200Response;
import org.openapitools.model.MailDelistRequest;
import org.openapitools.model.MailDelistResponse;
import org.openapitools.model.MailDeliverabilityResponse;
import org.openapitools.model.MailLog;
import org.openapitools.model.MailOrder;
import org.openapitools.model.MailRow;
import org.openapitools.model.MailSchema;
import org.openapitools.model.MailStatsType;
import org.openapitools.model.SendMail;
import org.openapitools.model.SendMailAdv;
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
@Path("/mail")
@Api(value = "/", description = "")
public interface MailApi  {

    /**
     * Place Mail Order
     *
     * Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Mail Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void addMail();

    /**
     * Create Deny Rule
     *
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     *
     */
    @POST
    @Path("/{id}/rules")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Deny Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Deny rule created successfully.", response = GenericResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public GenericResponse addRule(@PathParam("id") Integer id, DenyRuleNew denyRuleNew);

    /**
     * Create Mail Alert
     *
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     *
     */
    @POST
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Mail Alert", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse createMailAlert(@PathParam("id") Integer id, MailAlertRequest mailAlertRequest);

    /**
     * Delete Mail Alert
     *
     * Deletes an existing alert definition for the mail service.
     *
     */
    @DELETE
    @Path("/{id}/alerts")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Mail Alert", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteMailAlert(@PathParam("id") Integer id, @QueryParam("alert_id") Integer alertId);

    /**
     * Delete Deny Rule
     *
     * Removes a deny rule from the mail service.
     *
     */
    @DELETE
    @Path("/{id}/rules/{rule}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Deny Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Deny rule deleted successfully.", response = GenericResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public GenericResponse deleteRule(@PathParam("id") Integer id, @PathParam("rule") String rule);

    /**
     * Remove Email Address from Block List
     *
     * Removes an email address from the mail service&#39;s block lists.
     *
     */
    @POST
    @Path("/{id}/blocks/delete")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Remove Email Address from Block List", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Email address removed from block list successfully.", response = GenericResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public GenericResponse delistBlock(@PathParam("id") Integer id, @Multipart(value = "email", required = false)  String email);

    /**
     * List Mail Alerts
     *
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     *
     */
    @GET
    @Path("/{id}/alerts")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Mail Alerts", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Alert configuration for the mail service.", response = MailAlertsResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailAlertsResponse getMailAlerts(@PathParam("id") Integer id);

    /**
     * List Blocked Email Addresses
     *
     * Displays a listing of the blocked email addresses
     *
     */
    @GET
    @Path("/{id}/blocks")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Blocked Email Addresses", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "OK", response = MailBlocks.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailBlocks getMailBlocks(@PathParam("id") Integer id);

    /**
     * Get Delist Status
     *
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     *
     */
    @GET
    @Path("/{id}/delist")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Delist Status", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Blocklist entries and delist details for the mail service.", response = MailDelistResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailDelistResponse getMailDelist(@PathParam("id") Integer id);

    /**
     * Get Deliverability Metrics
     *
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     *
     */
    @GET
    @Path("/{id}/deliverability")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Deliverability Metrics", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Deliverability metrics for the mail service.", response = MailDeliverabilityResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailDeliverabilityResponse getMailDeliverability(@PathParam("id") Integer id);

    /**
     * Get Mail Order
     *
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Mail Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Mail Information.", response = MailSchema.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailSchema getMailInfo(@PathParam("id") Integer id);

    /**
     * Get Mail Invoices
     *
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Mail Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getMailInvoices(@PathParam("id") Integer id);

    /**
     * List Mail Orders
     *
     * Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Mail Orders", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Mail` services on your account.", response = MailRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<MailRow> getMailList();

    /**
     * Resend Mail Welcome Email
     *
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend Mail Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getMailWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Mail Ordering Information
     *
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Mail Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Mail ordering information.", response = MailOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailOrder getNewMail();

    /**
     * List Deny Rules
     *
     * Returns a listing of all the deny block rules configured for this mail service.
     *
     */
    @GET
    @Path("/{id}/rules")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Deny Rules", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "List of configured deny rules.", response = DenyRuleRecord.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<DenyRuleRecord> getRules(@PathParam("id") Integer id);

    /**
     * Get Mail Usage Statistics
     *
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     *
     */
    @GET
    @Path("/{id}/stats")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Mail Usage Statistics", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Mail service usage statistics.", response = MailStatsType.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailStatsType getStats(@PathParam("id") Integer id, @QueryParam("time") String time);

    /**
     * Cancel Mail
     *
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Mail", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Mail Cancel", response = MailCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MailCancel200Response mailCancel(@PathParam("id") Integer id);

    /**
     * Delist a Blocked Sender
     *
     * Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
     *
     */
    @POST
    @Path("/{id}/delist")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Delist a Blocked Sender", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse postMailDelist(@PathParam("id") Integer id, MailDelistRequest mailDelistRequest);

    /**
     * Validate Mail Order
     *
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Mail Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Mail order response."),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putMail();

    /**
     * Reset Mail Password
     *
     * Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.
     *
     */
    @GET
    @Path("/{id}/reset_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reset Mail Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse resetMailPassword(@PathParam("id") Integer id);

    /**
     * Send Email with Advanced Options
     *
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
     *
     */
    @POST
    @Path("/{id}/advsend")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Send Email with Advanced Options", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Email queued successfully.", response = GenericResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public GenericResponse sendAdvMail(@PathParam("id") Integer id, SendMailAdv sendMailAdv);

    /**
     * Send Email
     *
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
     *
     */
    @POST
    @Path("/{id}/send")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Send Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Email queued successfully.", response = GenericResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public GenericResponse sendMail(@PathParam("id") Integer id, SendMail sendMail);

    /**
     * Update Mail Alert
     *
     * Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
     *
     */
    @PUT
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Mail Alert", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateMailAlert(@PathParam("id") Integer id, MailAlertUpdateRequest mailAlertUpdateRequest);

    /**
     * Update Mail Order
     *
     * Updates mail service metadata for the order, such as stored settings or account details.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Mail Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateMailInfo(@PathParam("id") String id);

    /**
     * View Mail Log
     *
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
     *
     */
    @GET
    @Path("/{id}/log")
    @Produces({ "application/json" })
    @ApiOperation(value = "View Mail Log", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Paginated list of mail log entries matching the specified filters.", response = MailLog.class),
        @ApiResponse(code = 400, message = "bad input parameter") })
    public MailLog viewMailLog(@PathParam("id") Integer id, @QueryParam("id") Long id2, @QueryParam("origin") String origin, @QueryParam("mx") String mx, @QueryParam("from") String from, @QueryParam("to") String to, @QueryParam("subject") String subject, @QueryParam("mailid") String mailid, @QueryParam("skip") @DefaultValue("0")Integer skip, @QueryParam("limit") @DefaultValue("100")Integer limit, @QueryParam("startDate") Long startDate, @QueryParam("endDate") Long endDate, @QueryParam("delivered") String delivered);
}
