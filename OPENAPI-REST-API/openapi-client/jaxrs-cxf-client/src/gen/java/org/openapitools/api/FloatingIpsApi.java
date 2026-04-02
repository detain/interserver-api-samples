package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.FloatingIpsCancel200Response;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.ServiceOrderPostResponse;
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
@Path("/floating_ips")
@Api(value = "/", description = "")
public interface FloatingIpsApi  {

    /**
     * Place Floating IP Order
     *
     * Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Floating IP Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", response = ServiceOrderPostResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ServiceOrderPostResponse addFloatingIp();

    /**
     * Cancel Floating IP
     *
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Floating IP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Floating Ip Cancel", response = FloatingIpsCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public FloatingIpsCancel200Response floatingIpsCancel(@PathParam("id") Integer id);

    /**
     * View Floating IP
     *
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "View Floating IP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Detailed Floating IP service information.", response = Object.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Object getFloatingIpInfo(@PathParam("id") Integer id);

    /**
     * Get Floating IP Invoices
     *
     * Returns the billing invoices associated with this Floating IP service.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Floating IP Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getFloatingIpInvoices(@PathParam("id") Integer id);

    /**
     * List Floating IPs
     *
     * Returns all Floating IP services on the account with their current status and assignment details.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Floating IPs", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Floating IPs` services on your account.", response = Object.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public List<Object> getFloatingIpsList();

    /**
     * Resend Floating IPs Welcome Email
     *
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend Floating IPs Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getFloatingIpsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Floating IP Ordering Information
     *
     * Retrieves available options and pricing for ordering a new Floating IP.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Floating IP Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Available options and pricing for ordering a Floating IP.", response = Object.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Object getNewFloatingIp();

    /**
     * Change Floating IP Target
     *
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
     *
     */
    @POST
    @Path("/{id}/change_ip")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Floating IP Target", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse postFloatingIpsChangeIp(@PathParam("id") Integer id, @Multipart(value = "ip")  String ip);

    /**
     * Validate Floating IP Order
     *
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Floating IP Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Floating IPs order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putFloatingIps();

    /**
     * Update Floating IP
     *
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Floating IP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateFloatingIpInfo(@PathParam("id") String id);
}
