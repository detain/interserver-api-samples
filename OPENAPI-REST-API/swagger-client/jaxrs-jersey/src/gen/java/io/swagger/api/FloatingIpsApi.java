package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.FloatingIpsApiService;
import io.swagger.api.factories.FloatingIpsApiServiceFactory;

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
import io.swagger.model.InlineResponse2003;
import io.swagger.model.InlineResponse401;
import io.swagger.model.IpObject;
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


@Path("/floating_ips")



public class FloatingIpsApi  {
   private final FloatingIpsApiService delegate;

   public FloatingIpsApi(@Context ServletConfig servletContext) {
      FloatingIpsApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("FloatingIpsApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (FloatingIpsApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = FloatingIpsApiServiceFactory.getFloatingIpsApi();
      }

      this.delegate = delegate;
   }

    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place Floating IP Order", description = "Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addFloatingIp(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addFloatingIp(securityContext);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Floating IP", description = "Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Floating Ip Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2003.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response floatingIpsCancel(@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.floatingIpsCancel(id,securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "View Floating IP", description = "Returns detailed information about a specific Floating IP service including its current target IP assignment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getFloatingIpInfo(@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getFloatingIpInfo(id,securityContext);
    }
    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Floating IP Invoices", description = "Returns the billing invoices associated with this Floating IP service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getFloatingIpInvoices(@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getFloatingIpInvoices(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Floating IPs", description = "Returns all Floating IP services on the account with their current status and assignment details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Floating IPs` services on your account."),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getFloatingIpsList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getFloatingIpsList(securityContext);
    }
    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend Floating IPs Welcome Email", description = "Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getFloatingIpsWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getFloatingIpsWelcomeEmail(id,securityContext);
    }
    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Floating IP Ordering Information", description = "Retrieves available options and pricing for ordering a new Floating IP.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getNewFloatingIp(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getNewFloatingIp(securityContext);
    }
    @POST
    @Path("/{id}/change_ip")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Floating IP Target", description = "Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postFloatingIpsChangeIp(@Parameter(description = "", required=true)  @FormParam("ip")  String ip,@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postFloatingIpsChangeIp(ip,id,securityContext);
    }
    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate Floating IP Order", description = "Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Floating IPs order response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putFloatingIps(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.putFloatingIps(securityContext);
    }
    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Floating IP", description = "Updates settings on a Floating IP service, such as its label or configuration metadata.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Floating_IPs" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateFloatingIpInfo(@Parameter(in = ParameterIn.PATH, description = "The Floating IP service ID. Use the ID from `GET /floating_ips`.",required=true) @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateFloatingIpInfo(id,securityContext);
    }
}
