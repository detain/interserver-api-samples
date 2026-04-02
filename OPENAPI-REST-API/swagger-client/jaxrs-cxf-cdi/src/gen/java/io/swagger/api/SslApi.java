package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20021;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.api.SslApiService;

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
@Path("/ssl")
@RequestScoped






public class SslApi  {

  @Context SecurityContext securityContext;

  @Inject SslApiService delegate;


    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place SSL Cert Order", description = "Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addSsl() {
        return delegate.addSsl(securityContext);
    }

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "SSL Cert Ordering Information", description = "Retrieves available SSL certificate types and pricing for ordering.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Available SSL certificate types and pricing for ordering.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewSsl() {
        return delegate.getNewSsl(securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Info", description = "Returns detailed information about a specific SSL certificate including its domain and expiration.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Detailed SSL certificate information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getSslInfo(
@Parameter(description = "SSL certificate ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.getSslInfo(id, securityContext);
    }

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get SSL Cert Invoices", description = "Returns the billing invoices associated with this SSL certificate.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getSslInvoices(
@Parameter(description = "SSL Cert ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getSslInvoices(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List SSL Certs", description = "Returns all SSL certificate services on the account with their current status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `SSL` services on your account."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getSslList() {
        return delegate.getSslList(securityContext);
    }

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend SSL Welcome Email", description = "Resends the welcome email for the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getSslWelcomeEmail(
@Parameter(description = "SSL Cert ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getSslWelcomeEmail(id, securityContext);
    }

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate SSL Cert Order", description = "Validates an SSL certificate order before placing it.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate SSL Order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putSsl() {
        return delegate.putSsl(securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel SSL Certificate Service", description = "Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "SSL Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20021.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response sslCancel(
@Parameter(description = "SSL Cert ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.sslCancel(id, securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update SSL Cert Order", description = "Updates settings on an SSL certificate order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "SSL-Certificates" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateSslInfo(
@Parameter(description = "SSL certificate ID number.",required=true) @PathParam("id") String id
) {
        return delegate.updateSslInfo(id, securityContext);
    }
}
