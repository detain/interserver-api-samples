package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBuyIpBody;
import io.swagger.model.IdMigrationBody;
import io.swagger.model.InlineResponse20023;
import io.swagger.model.InlineResponse20024;
import io.swagger.model.InlineResponse20025;
import io.swagger.model.InlineResponse20026;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.Website;
import io.swagger.model.WebsiteBackups;
import io.swagger.model.WebsiteLoginResponse;
import io.swagger.model.WebsiteRow;
import io.swagger.model.WebsitesOrder;
import io.swagger.api.WebsitesApiService;

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
@Path("/websites")
@RequestScoped






public class WebsitesApi  {

  @Context SecurityContext securityContext;

  @Inject WebsitesApiService delegate;


    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place Website Order", description = "Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addWebsite() {
        return delegate.addWebsite(securityContext);
    }

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Website Ordering Information", description = "Retrieves available webhosting plans and pricing for ordering.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website ordering details including available plans and pricing.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsitesOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewWebsite() {
        return delegate.getNewWebsite(securityContext);
    }

    @GET
    @Path("/{id}/buy_ip")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Website IP Information", description = "Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Current IP addresses and their reverse DNS hostnames for the website.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20024.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsiteBuyIp(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsiteBuyIp(id, securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Order", description = "Returns detailed information about a specific webhosting order including its domain, plan, and status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Website.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsiteInfo(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsiteInfo(id, securityContext);
    }

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Invoices", description = "Returns the billing invoices associated with this webhosting service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsiteInvoices(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsiteInvoices(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json", "multipart/form-data" })
    @Operation(summary = "Get Website Listing", description = "Gets a listing of your webhosting orders and service details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Websites` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = WebsiteRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsiteList() {
        return delegate.getWebsiteList(securityContext);
    }

    @GET
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Backups", description = "Gets a list of the backups that exist for a website and their sizes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Website Backups response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsiteBackups.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsitesBackups(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsitesBackups(id, securityContext);
    }

    @GET
    @Path("/{id}/login")
    
    @Produces({ "application/json" })
    @Operation(summary = "Hosting Panel Auto Login", description = "Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Website Login response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = WebsiteLoginResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsitesLogin(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsitesLogin(id, securityContext);
    }

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend Website Welcome Email", description = "Resends the welcome email containing hosting credentials and panel access details for the webhosting order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getWebsitesWelcomeEmail(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getWebsitesWelcomeEmail(id, securityContext);
    }

    @GET
    @Path("/{id}/reverse_dns")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Website Reverse DNS", description = "Returns the current reverse DNS (PTR record) entries for the website's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "List of reverse dns entries", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response gettWebsiteReverseDns(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.gettWebsiteReverseDns(id, securityContext);
    }

    @POST
    @Path("/{id}/buy_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website IP DNS", description = "Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "DNS update result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20025.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsiteBuyIp(
@Parameter(description = "" ,required=true) IdBuyIpBody body
, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsiteBuyIp(body, id, securityContext);
    }

    @POST
    @Path("/{id}/buy_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website IP DNS", description = "Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "DNS update result.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20025.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsiteBuyIp(@Multipart(value = "ips")  Map<String, String> ips, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsiteBuyIp(ips, id, securityContext);
    }

    @POST
    @Path("/{id}/migration")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Request Website Migration", description = "Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Migration request submitted.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20026.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsiteMigration(
@Parameter(description = "" ,required=true) IdMigrationBody body
, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsiteMigration(body, id, securityContext);
    }

    @POST
    @Path("/{id}/migration")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Request Website Migration", description = "Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Migration request submitted.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20026.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsiteMigration(@Multipart(value = "custPortal")  String custPortal, @Multipart(value = "regEmail")  String regEmail, @Multipart(value = "password")  String password, @Multipart(value = "ctrlPanel")  String ctrlPanel, @Multipart(value = "ftpUsername")  String ftpUsername, @Multipart(value = "ftpPassword")  String ftpPassword, @Multipart(value = "siteBusyMig")  String siteBusyMig, @Multipart(value = "splReqMig")  String splReqMig, @Multipart(value = "domainReg")  String domainReg, @Multipart(value = "dataMig")  String dataMig, @Multipart(value = "domainRegPortal")  String domainRegPortal, @Multipart(value = "domainRegEmail")  String domainRegEmail, @Multipart(value = "domainRegPassword")  String domainRegPassword, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsiteMigration(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword, id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Reverse DNS", description = "Updates the reverse DNS entries for each of the IP addresses for the website.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the update reverse DNS call.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsitesReverseDns(
@Parameter(description = "" ,required=true) ReverseDnsEntries body
, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsitesReverseDns(body, id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Reverse DNS", description = "Updates the reverse DNS entries for each of the IP addresses for the website.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the update reverse DNS call.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postWebsitesReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, 
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postWebsitesReverseDns(ips, id, securityContext);
    }

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate Webhosting Order", description = "Validates a webhosting order before placing it.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Website order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putWebsites() {
        return delegate.putWebsites(securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Website Order", description = "Updates settings on a webhosting order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateWebsiteInfo(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") String id
) {
        return delegate.updateWebsiteInfo(id, securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Website", description = "Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Website cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20023.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response webhostingCancel(
@Parameter(description = "The website service ID. Use `website_id` from `GET /websites`.",required=true) @PathParam("id") String id
) {
        return delegate.webhostingCancel(id, securityContext);
    }
}
