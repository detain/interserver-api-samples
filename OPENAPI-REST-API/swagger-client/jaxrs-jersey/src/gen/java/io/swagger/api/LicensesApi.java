package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.LicensesApiService;
import io.swagger.api.factories.LicensesApiServiceFactory;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2004;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
import io.swagger.model.License;
import io.swagger.model.LicenseRow;
import io.swagger.model.LicensesOrder;
import io.swagger.model.SuccessTextResponse;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import org.glassfish.jersey.media.multipart.FormDataParam;

import javax.servlet.ServletConfig;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;


@Path("/licenses")



public class LicensesApi  {
   private final LicensesApiService delegate;

   public LicensesApi(@Context ServletConfig servletContext) {
      LicensesApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("LicensesApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (LicensesApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = LicensesApiServiceFactory.getLicensesApi();
      }

      this.delegate = delegate;
   }

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
    public Response addLicense(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response getLicenseInfo(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getLicenseInfo(id,securityContext);
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
    public Response getLicenseInvoices(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getLicenseInvoices(id,securityContext);
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
    public Response getLicenseList(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response getLicenseOrderCatTagInfo(@Parameter(in = ParameterIn.PATH, description = "The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.",required=true) @PathParam("catTag") String catTag,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getLicenseOrderCatTagInfo(catTag,securityContext);
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
    public Response getLicensesWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getLicensesWelcomeEmail(id,securityContext);
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
    public Response getNewLicense(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response licensesCancel(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.licensesCancel(id,securityContext);
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
    public Response postLicenseChangeIp(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) IpObject body
,@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postLicenseChangeIp(body,id,securityContext);
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
    public Response putLicenses(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response updateLicenseInfo(@Parameter(in = ParameterIn.PATH, description = "The license service ID. Use `license_id` from `GET /licenses`.",required=true) @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateLicenseInfo(id,securityContext);
    }
}
