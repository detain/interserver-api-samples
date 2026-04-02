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

import javax.ws.rs.*;
import javax.ws.rs.core.Response;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

@Path("/websites")


public class WebsitesApi {

    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Website Order", description = "Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response addWebsite() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getNewWebsite() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsiteBuyIp( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsiteInfo( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsiteInvoices( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Produces({ "application/json", "multipart/form-data" })
    @Operation(summary = "Get Website Listing", description = "Gets a listing of your webhosting orders and service details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Webhosting" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Websites` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = WebsiteRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsiteList() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsitesBackups( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsitesLogin( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getWebsitesWelcomeEmail( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response gettWebsiteReverseDns( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsiteBuyIp(@Valid IdBuyIpBody body, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsiteBuyIp(@FormParam(value = "ips")  Map<String, String> ips, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsiteMigration(@Valid IdMigrationBody body, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsiteMigration(@FormParam(value = "custPortal")  String custPortal,@FormParam(value = "regEmail")  String regEmail,@FormParam(value = "password")  String password,@FormParam(value = "ctrlPanel")  String ctrlPanel,@FormParam(value = "ftpUsername")  String ftpUsername,@FormParam(value = "ftpPassword")  String ftpPassword,@FormParam(value = "siteBusyMig")  String siteBusyMig,@FormParam(value = "splReqMig")  String splReqMig,@FormParam(value = "domainReg")  String domainReg,@FormParam(value = "dataMig")  String dataMig,@FormParam(value = "domainRegPortal")  String domainRegPortal,@FormParam(value = "domainRegEmail")  String domainRegEmail,@FormParam(value = "domainRegPassword")  String domainRegPassword, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsitesReverseDns(@Valid ReverseDnsEntries body, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postWebsitesReverseDns(@FormParam(value = "ips")  Map<String, Object> ips, @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response putWebsites() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateWebsiteInfo( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") String id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response webhostingCancel( @PathParam("id")

 @Parameter(description = "The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.") String id
) {
        return Response.ok().entity("magic!").build();
    }}
