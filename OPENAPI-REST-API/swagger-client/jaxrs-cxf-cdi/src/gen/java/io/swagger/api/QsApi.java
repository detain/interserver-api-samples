package io.swagger.api;

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
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsTemplatesList;
import io.swagger.api.QsApiService;

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
@Path("/qs")
@RequestScoped






public class QsApi  {

  @Context SecurityContext securityContext;

  @Inject QsApiService delegate;


    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place QuickServer Order", description = "Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addQs() {
        return delegate.addQs(securityContext);
    }

    @DELETE
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete QuickServer Backup", description = "Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteQsBackup(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
,  @NotNull 
@Parameter(description = "The backup filename to delete.",required=true)  @QueryParam("file") String file
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.deleteQsBackup(id, file, all, securityContext);
    }

    @GET
    @Path("/{id}/block_smtp")
    
    @Produces({ "application/json" })
    @Operation(summary = "Block QuickServer SMTP", description = "Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsBlockSmtp(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsBlockSmtp(id, securityContext);
    }

    @GET
    @Path("/{id}/disable_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable CD Drive", description = "Disables the virtual CD drive for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsDisableCd(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsDisableCd(id, securityContext);
    }

    @GET
    @Path("/{id}/disable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable Quotas", description = "Disables disk quota enforcement for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsDisableQuota(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsDisableQuota(id, securityContext);
    }

    @GET
    @Path("/{id}/eject_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Eject CD Drive", description = "Ejects the virtual CD from the QuickServer's CD drive.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsEjectCd(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsEjectCd(id, securityContext);
    }

    @GET
    @Path("/{id}/enable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Enable Quotas", description = "Enables disk quota enforcement for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsEnableQuota(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsEnableQuota(id, securityContext);
    }

    @GET
    @Path("/{id}/restart")
    
    @Produces({ "application/json" })
    @Operation(summary = "Restart QuickServer", description = "Restarts the QuickServer. The server will be shut down and started again.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsRestart(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsRestart(id, securityContext);
    }

    @GET
    @Path("/{id}/start")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start QuickServer", description = "Powers on the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsStart(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsStart(id, securityContext);
    }

    @GET
    @Path("/{id}/stop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Stop QuickServer", description = "Powers off the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doQsStop(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doQsStop(id, securityContext);
    }

    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadQsBackup(
@Parameter(description = "" ,required=true) IdBackupsBody body
, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.downloadQsBackup(body, id, all, securityContext);
    }

    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadQsBackup(@Multipart(value = "file")  String file, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.downloadQsBackup(file, id, all, securityContext);
    }

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Ordering Information", description = "Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver Ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QuickserverOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewQs() {
        return delegate.getNewQs(securityContext);
    }

    @GET
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServer Backups", description = "Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of available backups for the QuickServer.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsBackupRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsBackups(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given QuickServer.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.getQsBackups(id, all, securityContext);
    }

    @GET
    @Path("/{id}/change_hostname")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Hostname", description = "Retrieves the current hostname and any validation requirements for changing it.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Hostname info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeHostname(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsChangeHostname(id, securityContext);
    }

    @GET
    @Path("/{id}/change_root_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Change Root Password Info", description = "Retrieves instructions or metadata needed to reset the root password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Root Password response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeRootPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsChangeRootPassword(id, securityContext);
    }

    @GET
    @Path("/{id}/change_timezone")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Timezone Info", description = "Returns the list of available timezones that can be set on the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Timezone info response", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeTimezone(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsChangeTimezone(id, securityContext);
    }

    @GET
    @Path("/{id}/change_webuzo_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Webuzo Change Pass Info", description = "Retrieves instructions or metadata for changing the Webuzo control panel password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Webuzo Password info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsChangeWebuzoPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsChangeWebuzoPassword(id, securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Order", description = "Returns detailed QuickServer information, including credentials, IPs, and available client actions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Quickserver.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInfo(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsInfo(id, securityContext);
    }

    @GET
    @Path("/{id}/insert_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD Information", description = "Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Insert CD info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInsertCd(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsInsertCd(id, securityContext);
    }

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Invoices", description = "Returns the billing invoices associated with this QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsInvoices(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsInvoices(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServers", description = "Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Quickservers` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = QuickserverRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsList() {
        return delegate.getQsList(securityContext);
    }

    @GET
    @Path("/{id}/reinstall_os")
    
    @Produces({ "application/json" })
    @Operation(summary = "QuickServer Reinstall OS Options", description = "Returns the list of available operating system templates for reinstalling the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reinstall OS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTemplatesList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsReinstallOs(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsReinstallOs(id, securityContext);
    }

    @GET
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password Info", description = "Returns information needed before resetting the QuickServer's root password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reset password info"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsResetPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsResetPassword(id, securityContext);
    }

    @GET
    @Path("/{id}/reverse_dns")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", description = "Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsReverseDns(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsReverseDns(id, securityContext);
    }

    @GET
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "VNC Setup Info", description = "Returns the current VNC connection information for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Setup VNC Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsSetupVnc(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsSetupVnc(id, securityContext);
    }

    @GET
    @Path("/{id}/traffic_usage")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Traffic Usage", description = "Returns bandwidth traffic usage data for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Traffic usage"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsTrafficUsage(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsTrafficUsage(id, securityContext);
    }

    @GET
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get View Desktop Info", description = "Returns remote desktop connection information for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsViewDesktop(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getQsViewDesktop(id, securityContext);
    }

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend QuickServer Welcome Email", description = "Resends the welcome email containing connection details and credentials for the QuickServer order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getQsWelcomeEmail(
@Parameter(description = "Quickserver ID",required=true) @PathParam("id") String id
) {
        return delegate.getQsWelcomeEmail(id, securityContext);
    }

    @POST
    @Path("/{id}/backup")
    
    @Produces({ "application/json" })
    @Operation(summary = "Create QuickServer Backup", description = "Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsBackup(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsBackup(id, securityContext);
    }

    @POST
    @Path("/{id}/change_hostname")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Hostname", description = "Submits a hostname change request for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeHostname(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsChangeHostname(id, securityContext);
    }

    @POST
    @Path("/{id}/change_root_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Change Root Password", description = "Triggers a root password reset for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeRootPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsChangeRootPassword(id, securityContext);
    }

    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", description = "Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeTimezone(@Multipart(value = "timezone")  String timezone, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsChangeTimezone(timezone, id, securityContext);
    }

    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", description = "Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeTimezone(
@Parameter(description = "" ,required=true) TimezoneUpdate body
, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsChangeTimezone(body, id, securityContext);
    }

    @POST
    @Path("/{id}/change_webuzo_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", description = "Resets the Webuzo control panel password for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsChangeWebuzoPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsChangeWebuzoPassword(id, securityContext);
    }

    @POST
    @Path("/{id}/insert_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in QuickServer", description = "Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsInsertCd(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsInsertCd(id, securityContext);
    }

    @POST
    @Path("/{id}/reinstall_os")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall QuickServer OS", description = "Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReinstallOs(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsReinstallOs(id, securityContext);
    }

    @POST
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password", description = "Resets the root password on the QuickServer to a new randomly generated password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsResetPassword(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsResetPassword(id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReverseDns(
@Parameter(description = "" ,required=true) ReverseDnsEntries body
, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsReverseDns(body, id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsReverseDns(ips, id, securityContext);
    }

    @POST
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "Setup VNC", description = "Sets up or refreshes the VNC console connection for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsSetupVnc(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsSetupVnc(id, securityContext);
    }

    @POST
    @Path("/{id}/traffic_usage")
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Traffic Usage", description = "Searches and filters the QuickServer's bandwidth traffic usage data by date range.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer Traffic Usage"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsTrafficUsage(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsTrafficUsage(id, securityContext);
    }

    @POST
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update View Desktop", description = "Updates or refreshes the remote desktop session for the QuickServer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQsViewDesktop(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQsViewDesktop(id, securityContext);
    }

    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", description = "Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQuickServerRestore(
@Parameter(description = "QuickServer Restore request" ,required=true) RestoreRequest body
, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQuickServerRestore(body, id, securityContext);
    }

    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", description = "Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postQuickServerRestore(@Multipart(value = "backup")  String backup, @Multipart(value = "password")  String password, 
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postQuickServerRestore(backup, password, id, securityContext);
    }

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate QuickServer Order", description = "Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate QuickServer Order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putQs() {
        return delegate.putQs(securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel QuickServer Order", description = "Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Rapid Deploy Servers Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20010.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response quickserversCancel(
@Parameter(description = "QuickServer ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.quickserversCancel(id, securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Order", description = "Updates QuickServer metadata or stored settings associated with the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateQsInfo(
@Parameter(description = "QuickServer ID number.",required=true) @PathParam("id") String id
) {
        return delegate.updateQsInfo(id, securityContext);
    }
}
