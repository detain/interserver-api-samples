package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2004;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
import io.swagger.model.License;
import io.swagger.model.LicenseRow;
import io.swagger.model.LicensesOrder;
import io.swagger.model.SuccessTextResponse;
import io.swagger.api.LicensesApiService;

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
@Path("/licenses")
@RequestScoped






public class LicensesApi  {

  @Context SecurityContext securityContext;

  @Inject LicensesApiService delegate;


    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place License Order", description = "Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addLicense() {
        return delegate.addLicense(securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get License", description = "Returns detailed information about a specific license including its type, IP assignment, and status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = License.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getLicenseInfo(
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getLicenseInfo(id, securityContext);
    }

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get License Invoices", description = "Returns the billing invoices associated with this license service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getLicenseInvoices(
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getLicenseInvoices(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Licenses", description = "Returns all software license services on the account with their current status and IP assignments.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Licenses` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = LicenseRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getLicenseList() {
        return delegate.getLicenseList(securityContext);
    }

    @GET
    @Path("/order/{catTag}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get License Order Information for Category", description = "Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License types and pricing for the specified category."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getLicenseOrderCatTagInfo(
@Parameter(description = "The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.",required=true) @PathParam("catTag") String catTag
) {
        return delegate.getLicenseOrderCatTagInfo(catTag, securityContext);
    }

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend License Welcome Email", description = "Resends the welcome email for the license service. The email contains the license key and activation instructions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getLicensesWelcomeEmail(
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.getLicensesWelcomeEmail(id, securityContext);
    }

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get License Order Information", description = "Retrieves available license types, categories, and pricing for ordering a new license.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = LicensesOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewLicense() {
        return delegate.getNewLicense(securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel License", description = "Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "License Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2004.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response licensesCancel(
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.licensesCancel(id, securityContext);
    }

    @POST
    @Path("/{id}/change_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Change License IP", description = "Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postLicenseChangeIp(
@Parameter(description = "" ,required=true) IpObject body
, 
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postLicenseChangeIp(body, id, securityContext);
    }

    @POST
    @Path("/{id}/change_ip")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Change License IP", description = "Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postLicenseChangeIp(@Multipart(value = "ip")  String ip, 
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id
) {
        return delegate.postLicenseChangeIp(ip, id, securityContext);
    }

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate License Order", description = "Validates a license order before placing it. Use this to check for errors before committing to a purchase.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Licenses order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putLicenses() {
        return delegate.putLicenses(securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update License", description = "Updates settings on a license service such as its assigned IP.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Licenses" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateLicenseInfo(
@Parameter(description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") String id
) {
        return delegate.updateLicenseInfo(id, securityContext);
    }
}
