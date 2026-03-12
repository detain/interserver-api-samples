package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.BackupsApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.Backup;
import io.swagger.model.BackupLoginResponse;
import io.swagger.model.BackupOrderPostResponse;
import io.swagger.model.BackupOrderPutRequest;
import io.swagger.model.BackupOrderPutResponse;
import io.swagger.model.BackupRow;
import io.swagger.model.BackupsOrder;
import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse2001;
import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.inject.Inject;

import javax.validation.constraints.*;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
import org.jboss.resteasy.plugins.providers.multipart.MultipartFormDataInput;
@Path("/backups")



public class BackupsApi  {

    @Inject BackupsApiService service;

    @POST
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Backup Order", description = "Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the backup order call including invoice IDs for payment.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPostResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addBackup(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("validateOnly")  Boolean validateOnly,@Parameter(description = "", required=true)@FormParam("serviceType")  Integer serviceType,@Parameter(description = "", required=true)@FormParam("coupon")  String coupon,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.addBackup(input,validateOnly,serviceType,coupon,securityContext);
    }
    @POST
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Backup Order", description = "Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the backup order call including invoice IDs for payment.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPostResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addBackup(MultipartFormDataInput input,
@Parameter(description = "" ,required=true) BackupOrderPutRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.addBackup(input,body,securityContext);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Backup Service", description = "Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Backups Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2001.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response cancelBackup( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.cancelBackup(id,securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Service Details", description = "Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Full backup service details including serviceInfo, billingDetails, and client_links.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Backup.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBackupInfo( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getBackupInfo(id,securityContext);
    }
    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Order Invoices", description = "Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBackupInvoices( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getBackupInvoices(id,securityContext);
    }
    @GET
    @Path("/{id}/login")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Storage Panel Login", description = "Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Login session details for the backup storage service.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupLoginResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBackupLogin( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getBackupLogin(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Backup Services", description = "Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of backup storage services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = BackupRow.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBackupsList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getBackupsList(securityContext);
    }
    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend Backup Welcome Email", description = "Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getBackupsWelcomeEmail( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getBackupsWelcomeEmail(id,securityContext);
    }
    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Backup Order Form Data", description = "Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Information needed to generate an order form.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupsOrder.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewBackup(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getNewBackup(securityContext);
    }
    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Backup Information", description = "Updates backup storage service metadata, such as stored credentials or settings for the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateBackupInfo( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.updateBackupInfo(id,securityContext);
    }
    @PUT
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate Backup Order", description = "Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Backup Order Response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPutResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response validateBackupOrder(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("validateOnly")  Boolean validateOnly,@Parameter(description = "", required=true)@FormParam("serviceType")  Integer serviceType,@Parameter(description = "", required=true)@FormParam("coupon")  String coupon,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.validateBackupOrder(input,validateOnly,serviceType,coupon,securityContext);
    }
    @PUT
    @Path("/order")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate Backup Order", description = "Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Backups" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Backup Order Response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BackupOrderPutResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response validateBackupOrder(MultipartFormDataInput input,
@Parameter(description = "" ,required=true) BackupOrderPutRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.validateBackupOrder(input,body,securityContext);
    }
}
