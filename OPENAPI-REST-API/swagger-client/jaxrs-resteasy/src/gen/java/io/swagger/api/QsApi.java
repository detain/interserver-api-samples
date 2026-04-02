package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.QsApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBackupsBody;
import io.swagger.model.InlineResponse20010;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse401;
import io.swagger.model.QueueResponse;
import io.swagger.model.Quickserver;
import io.swagger.model.QuickserverOrder;
import io.swagger.model.QuickserverRow;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsTemplatesList;

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
@Path("/qs")



public class QsApi  {

    @Inject QsApiService service;

    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place QuickServer Order", description = "Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addQs(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.addQs(securityContext);
    }
    @DELETE
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete QuickServer Backup", description = "Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteQsBackup( @PathParam("id") Integer id, @NotNull  @QueryParam("file") String file,  @QueryParam("all") String all,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.deleteQsBackup(id,file,all,securityContext);
    }
    @GET
    @Path("/{id}/block_smtp")
    
    @Produces({ "application/json" })
    @Operation(summary = "Block QuickServer SMTP", description = "Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsBlockSmtp( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsBlockSmtp(id,securityContext);
    }
    @GET
    @Path("/{id}/disable_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable CD Drive", description = "Disables the virtual CD drive for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsDisableCd( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsDisableCd(id,securityContext);
    }
    @GET
    @Path("/{id}/disable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable Quotas", description = "Disables disk quota enforcement for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsDisableQuota( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsDisableQuota(id,securityContext);
    }
    @GET
    @Path("/{id}/eject_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Eject CD Drive", description = "Ejects the virtual CD from the QuickServer's CD drive.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsEjectCd( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsEjectCd(id,securityContext);
    }
    @GET
    @Path("/{id}/enable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Enable Quotas", description = "Enables disk quota enforcement for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsEnableQuota( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsEnableQuota(id,securityContext);
    }
    @GET
    @Path("/{id}/restart")
    
    @Produces({ "application/json" })
    @Operation(summary = "Restart QuickServer", description = "Restarts the QuickServer. The server will be shut down and started again.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsRestart( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsRestart(id,securityContext);
    }
    @GET
    @Path("/{id}/start")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start QuickServer", description = "Powers on the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsStart( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsStart(id,securityContext);
    }
    @GET
    @Path("/{id}/stop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Stop QuickServer", description = "Powers off the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsStop( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.doQsStop(id,securityContext);
    }
    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadQsBackup(
@Parameter(description = "" ,required=true) IdBackupsBody body
, @PathParam("id") Integer id,  @QueryParam("all") String all,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.downloadQsBackup(body,id,all,securityContext);
    }
    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadQsBackup(@Parameter(description = "", required=true)@FormParam("file")  String file, @PathParam("id") Integer id,  @QueryParam("all") String all,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.downloadQsBackup(file,id,all,securityContext);
    }
    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Ordering Information", description = "Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver Ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QuickserverOrder.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewQs(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getNewQs(securityContext);
    }
    @GET
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServer Backups", description = "Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of available backups for the QuickServer.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsBackupRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsBackups( @PathParam("id") Integer id,  @QueryParam("all") String all,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsBackups(id,all,securityContext);
    }
    @GET
    @Path("/{id}/change_hostname")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Hostname", description = "Retrieves the current hostname and any validation requirements for changing it.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Hostname info response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeHostname( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsChangeHostname(id,securityContext);
    }
    @GET
    @Path("/{id}/change_root_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Change Root Password Info", description = "Retrieves instructions or metadata needed to reset the root password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Root Password response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeRootPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsChangeRootPassword(id,securityContext);
    }
    @GET
    @Path("/{id}/change_timezone")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Timezone Info", description = "Returns the list of available timezones that can be set on the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Timezone info response", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeTimezone( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsChangeTimezone(id,securityContext);
    }
    @GET
    @Path("/{id}/change_webuzo_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Webuzo Change Pass Info", description = "Retrieves instructions or metadata for changing the Webuzo control panel password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Webuzo Password info response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeWebuzoPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsChangeWebuzoPassword(id,securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Order", description = "Returns detailed QuickServer information, including credentials, IPs, and available client actions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Quickserver.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInfo( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsInfo(id,securityContext);
    }
    @GET
    @Path("/{id}/insert_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD Information", description = "Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Insert CD info response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInsertCd( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsInsertCd(id,securityContext);
    }
    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Invoices", description = "Returns the billing invoices associated with this QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInvoices( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsInvoices(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServers", description = "Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Quickservers` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = QuickserverRow.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsList(securityContext);
    }
    @GET
    @Path("/{id}/reinstall_os")
    
    @Produces({ "application/json" })
    @Operation(summary = "QuickServer Reinstall OS Options", description = "Returns the list of available operating system templates for reinstalling the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reinstall OS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTemplatesList.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsReinstallOs( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsReinstallOs(id,securityContext);
    }
    @GET
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password Info", description = "Returns information needed before resetting the QuickServer's root password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reset password info"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsResetPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsResetPassword(id,securityContext);
    }
    @GET
    @Path("/{id}/reverse_dns")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", description = "Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsReverseDns( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsReverseDns(id,securityContext);
    }
    @GET
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "VNC Setup Info", description = "Returns the current VNC connection information for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Setup VNC Information"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsSetupVnc( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsSetupVnc(id,securityContext);
    }
    @GET
    @Path("/{id}/traffic_usage")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Traffic Usage", description = "Returns bandwidth traffic usage data for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Traffic usage"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsTrafficUsage( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsTrafficUsage(id,securityContext);
    }
    @GET
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get View Desktop Info", description = "Returns remote desktop connection information for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer View Desktop Information"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsViewDesktop( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsViewDesktop(id,securityContext);
    }
    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend QuickServer Welcome Email", description = "Resends the welcome email containing connection details and credentials for the QuickServer order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsWelcomeEmail( @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getQsWelcomeEmail(id,securityContext);
    }
    @POST
    @Path("/{id}/backup")
    
    @Produces({ "application/json" })
    @Operation(summary = "Create QuickServer Backup", description = "Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsBackup( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsBackup(id,securityContext);
    }
    @POST
    @Path("/{id}/change_hostname")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Hostname", description = "Submits a hostname change request for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeHostname( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsChangeHostname(id,securityContext);
    }
    @POST
    @Path("/{id}/change_root_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Change Root Password", description = "Triggers a root password reset for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeRootPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsChangeRootPassword(id,securityContext);
    }
    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", description = "Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeTimezone(MultipartFormDataInput input,@Parameter(description = "", required=true)@FormParam("timezone")  String timezone, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsChangeTimezone(input,timezone,id,securityContext);
    }
    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", description = "Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeTimezone(MultipartFormDataInput input,
@Parameter(description = "" ,required=true) TimezoneUpdate body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsChangeTimezone(input,body,id,securityContext);
    }
    @POST
    @Path("/{id}/change_webuzo_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", description = "Resets the Webuzo control panel password for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeWebuzoPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsChangeWebuzoPassword(id,securityContext);
    }
    @POST
    @Path("/{id}/insert_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in QuickServer", description = "Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsInsertCd( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsInsertCd(id,securityContext);
    }
    @POST
    @Path("/{id}/reinstall_os")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall QuickServer OS", description = "Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReinstallOs( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsReinstallOs(id,securityContext);
    }
    @POST
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password", description = "Resets the root password on the QuickServer to a new randomly generated password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsResetPassword( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsResetPassword(id,securityContext);
    }
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReverseDns(
@Parameter(description = "" ,required=true) ReverseDnsEntries body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsReverseDns(body,id,securityContext);
    }
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReverseDns(@Parameter(description = "", required=true)@FormParam("ips")  Map<String, Object> ips, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsReverseDns(ips,id,securityContext);
    }
    @POST
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "Setup VNC", description = "Sets up or refreshes the VNC console connection for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsSetupVnc( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsSetupVnc(id,securityContext);
    }
    @POST
    @Path("/{id}/traffic_usage")
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Traffic Usage", description = "Searches and filters the QuickServer's bandwidth traffic usage data by date range.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer Traffic Usage"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsTrafficUsage( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsTrafficUsage(id,securityContext);
    }
    @POST
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update View Desktop", description = "Updates or refreshes the remote desktop session for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer View Desktop Information"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsViewDesktop( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQsViewDesktop(id,securityContext);
    }
    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", description = "Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQuickServerRestore(
@Parameter(description = "QuickServer Restore request" ,required=true) RestoreRequest body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQuickServerRestore(body,id,securityContext);
    }
    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", description = "Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQuickServerRestore(@Parameter(description = "", required=true)@FormParam("backup")  String backup,@Parameter(description = "", required=true)@FormParam("password")  String password, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postQuickServerRestore(backup,password,id,securityContext);
    }
    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate QuickServer Order", description = "Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate QuickServer Order response"),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putQs(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.putQs(securityContext);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel QuickServer Order", description = "Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Rapid Deploy Servers Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20010.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response quickserversCancel( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.quickserversCancel(id,securityContext);
    }
    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Order", description = "Updates QuickServer metadata or stored settings associated with the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateQsInfo( @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.updateQsInfo(id,securityContext);
    }
}
