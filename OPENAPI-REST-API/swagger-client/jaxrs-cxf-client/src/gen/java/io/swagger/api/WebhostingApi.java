package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBuyIpBody;
import io.swagger.model.IdMigrationBody;
import io.swagger.model.InlineResponse20022;
import io.swagger.model.InlineResponse20023;
import io.swagger.model.InlineResponse20024;
import io.swagger.model.InlineResponse20025;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.Website;
import io.swagger.model.WebsiteBackups;
import io.swagger.model.WebsiteLoginResponse;
import io.swagger.model.WebsiteRow;
import io.swagger.model.WebsitesOrder;

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
public interface WebhostingApi  {

    /**
     * Place Website Order
     *
     * Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/websites/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addWebsite();

    /**
     * Website Ordering Information
     *
     * Retrieves available webhosting plans and pricing for ordering.
     *
     */
    @GET
    @Path("/websites/order")
    @Produces({ "application/json" })
    @Operation(summary = "Website Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website ordering details including available plans and pricing.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsitesOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public WebsitesOrder getNewWebsite();

    /**
     * Get Website IP Information
     *
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
     *
     */
    @GET
    @Path("/websites/{id}/buy_ip")
    @Produces({ "application/json" })
    @Operation(summary = "Get Website IP Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Current IP addresses and their reverse DNS hostnames for the website.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20023.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20023 getWebsiteBuyIp(@PathParam("id") Integer id);

    /**
     * Get Website Order
     *
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     *
     */
    @GET
    @Path("/websites/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Website.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Website getWebsiteInfo(@PathParam("id") Integer id);

    /**
     * Get Website Invoices
     *
     * Returns the billing invoices associated with this webhosting service.
     *
     */
    @GET
    @Path("/websites/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getWebsiteInvoices(@PathParam("id") Integer id);

    /**
     * Get Website Listing
     *
     * Gets a listing of your webhosting orders and service details.
     *
     */
    @GET
    @Path("/websites")
    @Produces({ "application/json", "multipart/form-data" })
    @Operation(summary = "Get Website Listing", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Websites` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = WebsiteRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<WebsiteRow> getWebsiteList();

    /**
     * Get Website Backups
     *
     * Gets a list of the backups that exist for a website and their sizes.
     *
     */
    @GET
    @Path("/websites/{id}/backups")
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Backups", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Website Backups response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsiteBackups.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public WebsiteBackups getWebsitesBackups(@PathParam("id") Integer id);

    /**
     * Hosting Panel Auto Login
     *
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     *
     */
    @GET
    @Path("/websites/{id}/login")
    @Produces({ "application/json" })
    @Operation(summary = "Hosting Panel Auto Login", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Website Login response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsiteLoginResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public WebsiteLoginResponse getWebsitesLogin(@PathParam("id") Integer id);

    /**
     * Resend Website Welcome Email
     *
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     *
     */
    @GET
    @Path("/websites/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Website Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getWebsitesWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Website Reverse DNS
     *
     * Returns the current reverse DNS (PTR record) entries for the website&#x27;s IP addresses.
     *
     */
    @GET
    @Path("/websites/{id}/reverse_dns")
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "List of reverse dns entries", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ReverseDnsEntries gettWebsiteReverseDns(@PathParam("id") Integer id);

    /**
     * Update Website IP DNS
     *
     * Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
     *
     */
    @POST
    @Path("/websites/{id}/buy_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website IP DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "DNS update result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20024.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20024 postWebsiteBuyIp(IdBuyIpBody body, @PathParam("id") Integer id);

    /**
     * Update Website IP DNS
     *
     * Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
     *
     */
    @POST
    @Path("/websites/{id}/buy_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website IP DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "DNS update result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20024.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20024 postWebsiteBuyIp(@Multipart(value = "ips")  Map<String, String> ips, @PathParam("id") Integer id);

    /**
     * Request Website Migration
     *
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
     *
     */
    @POST
    @Path("/websites/{id}/migration")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Request Website Migration", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Migration request submitted.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20025.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20025 postWebsiteMigration(IdMigrationBody body, @PathParam("id") Integer id);

    /**
     * Request Website Migration
     *
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
     *
     */
    @POST
    @Path("/websites/{id}/migration")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Request Website Migration", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Migration request submitted.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20025.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20025 postWebsiteMigration(@Multipart(value = "custPortal")  String custPortal, @Multipart(value = "regEmail")  String regEmail, @Multipart(value = "password")  String password, @Multipart(value = "ctrlPanel")  String ctrlPanel, @Multipart(value = "ftpUsername")  String ftpUsername, @Multipart(value = "ftpPassword")  String ftpPassword, @Multipart(value = "siteBusyMig")  String siteBusyMig, @Multipart(value = "splReqMig")  String splReqMig, @Multipart(value = "domainReg")  String domainReg, @Multipart(value = "dataMig")  String dataMig, @Multipart(value = "domainRegPortal")  String domainRegPortal, @Multipart(value = "domainRegEmail")  String domainRegEmail, @Multipart(value = "domainRegPassword")  String domainRegPassword, @PathParam("id") Integer id);

    /**
     * Update Website Reverse DNS
     *
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     *
     */
    @POST
    @Path("/websites/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the update reverse DNS call.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postWebsitesReverseDns(ReverseDnsEntries body, @PathParam("id") Integer id);

    /**
     * Update Website Reverse DNS
     *
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     *
     */
    @POST
    @Path("/websites/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the update reverse DNS call.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postWebsitesReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, @PathParam("id") Integer id);

    /**
     * Validate Webhosting Order
     *
     * Validates a webhosting order before placing it.
     *
     */
    @PUT
    @Path("/websites/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate Webhosting Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Website order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putWebsites();

    /**
     * Update Website Order
     *
     * Updates settings on a webhosting order.
     *
     */
    @POST
    @Path("/websites/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateWebsiteInfo(@PathParam("id") String id);

    /**
     * Cancel Website
     *
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     *
     */
    @DELETE
    @Path("/websites/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Website", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20022.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20022 webhostingCancel(@PathParam("id") String id);
}
