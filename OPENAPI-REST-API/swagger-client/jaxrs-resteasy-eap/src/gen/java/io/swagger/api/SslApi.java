package io.swagger.api;

import io.swagger.model.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20020;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;
@Path("/ssl")



public interface SslApi  {
   
    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place SSL Cert Order", description = "Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "200", description = "Default response")
         })
    Response addSsl(@Context SecurityContext securityContext);

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "SSL Cert Ordering Information", description = "Retrieves available SSL certificate types and pricing for ordering.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "200", description = "Default response")
         })
    Response getNewSsl(@Context SecurityContext securityContext);

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Info", description = "Returns detailed information about a specific SSL certificate including its domain and expiration.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "200", description = "Default response")
         })
    Response getSslInfo( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Invoices", description = "Returns the billing invoices associated with this SSL certificate.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getSslInvoices( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List SSL Certs", description = "Returns all SSL certificate services on the account with their current status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "The listing of `SSL` services on your account."),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "200", description = "Default response")
         })
    Response getSslList(@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend SSL Welcome Email", description = "Resends the welcome email for the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getSslWelcomeEmail( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate SSL Cert Order", description = "Validates an SSL certificate order before placing it.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Validate SSL Order response"),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response putSsl(@Context SecurityContext securityContext);

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel SSL Certificate Service", description = "Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "SSL Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20020.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response sslCancel( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update SSL Cert Order", description = "Updates settings on an SSL certificate order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "200", description = "Default response")
         })
    Response updateSslInfo( @PathParam("id") String id,@Context SecurityContext securityContext);

}
