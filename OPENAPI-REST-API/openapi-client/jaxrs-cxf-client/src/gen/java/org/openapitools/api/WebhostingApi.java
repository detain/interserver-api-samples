package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetWebsiteBuyIp200Response;
import org.openapitools.model.PostWebsiteBuyIp200Response;
import org.openapitools.model.PostWebsiteBuyIpRequest;
import org.openapitools.model.PostWebsiteMigration200Response;
import org.openapitools.model.PostWebsiteMigrationRequest;
import org.openapitools.model.PostWebsiteMigrationRequest1;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.ServiceOrderPostResponse;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import org.openapitools.model.WebhostingCancel200Response;
import org.openapitools.model.Website;
import org.openapitools.model.WebsiteBackups;
import org.openapitools.model.WebsiteLoginResponse;
import org.openapitools.model.WebsiteRow;
import org.openapitools.model.WebsitesOrder;

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
@Path("/websites")
@Api(value = "/", description = "")
public interface WebhostingApi  {

    /**
     * Place Website Order
     *
     * Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", response = ServiceOrderPostResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ServiceOrderPostResponse addWebsite();

    /**
     * Website Ordering Information
     *
     * Retrieves available webhosting plans and pricing for ordering.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Website Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Website ordering details including available plans and pricing.", response = WebsitesOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public WebsitesOrder getNewWebsite();

    /**
     * Get Website IP Information
     *
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
     *
     */
    @GET
    @Path("/{id}/buy_ip")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Website IP Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Current IP addresses and their reverse DNS hostnames for the website.", response = GetWebsiteBuyIp200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GetWebsiteBuyIp200Response getWebsiteBuyIp(@PathParam("id") Integer id);

    /**
     * Get Website Order
     *
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Website details", response = Website.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Website getWebsiteInfo(@PathParam("id") Integer id);

    /**
     * Get Website Invoices
     *
     * Returns the billing invoices associated with this webhosting service.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Website Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getWebsiteInvoices(@PathParam("id") Integer id);

    /**
     * Get Website Listing
     *
     * Gets a listing of your webhosting orders and service details.
     *
     */
    @GET
    
    @Produces({ "application/json", "multipart/form-data" })
    @ApiOperation(value = "Get Website Listing", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Websites` services on your account.", response = WebsiteRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<WebsiteRow> getWebsiteList();

    /**
     * Get Website Backups
     *
     * Gets a list of the backups that exist for a website and their sizes.
     *
     */
    @GET
    @Path("/{id}/backups")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Website Backups", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Website Backups response", response = WebsiteBackups.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public WebsiteBackups getWebsitesBackups(@PathParam("id") Integer id);

    /**
     * Hosting Panel Auto Login
     *
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     *
     */
    @GET
    @Path("/{id}/login")
    @Produces({ "application/json" })
    @ApiOperation(value = "Hosting Panel Auto Login", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Website Login response", response = WebsiteLoginResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public WebsiteLoginResponse getWebsitesLogin(@PathParam("id") Integer id);

    /**
     * Resend Website Welcome Email
     *
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend Website Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getWebsitesWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Website Reverse DNS
     *
     * Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.
     *
     */
    @GET
    @Path("/{id}/reverse_dns")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Website Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "List of reverse dns entries", response = ReverseDnsEntries.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ReverseDnsEntries gettWebsiteReverseDns(@PathParam("id") Integer id);

    /**
     * Update Website IP DNS
     *
     * Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
     *
     */
    @POST
    @Path("/{id}/buy_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Website IP DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "DNS update result.", response = PostWebsiteBuyIp200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public PostWebsiteBuyIp200Response postWebsiteBuyIp(@PathParam("id") Integer id, PostWebsiteBuyIpRequest postWebsiteBuyIpRequest);

    /**
     * Request Website Migration
     *
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
     *
     */
    @POST
    @Path("/{id}/migration")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Request Website Migration", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Migration request submitted.", response = PostWebsiteMigration200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public PostWebsiteMigration200Response postWebsiteMigration(@PathParam("id") Integer id, PostWebsiteMigrationRequest postWebsiteMigrationRequest);

    /**
     * Update Website Reverse DNS
     *
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     *
     */
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Website Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response from the update reverse DNS call.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse postWebsitesReverseDns(@PathParam("id") Integer id, ReverseDnsEntries reverseDnsEntries);

    /**
     * Validate Webhosting Order
     *
     * Validates a webhosting order before placing it.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Webhosting Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Website order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putWebsites();

    /**
     * Update Website Order
     *
     * Updates settings on a webhosting order.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateWebsiteInfo(@PathParam("id") String id);

    /**
     * Cancel Website
     *
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Website", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Website cancel", response = WebhostingCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public WebhostingCancel200Response webhostingCancel(@PathParam("id") String id);
}
