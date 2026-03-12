package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.HostnameObject;
import io.swagger.model.IdBackupsBody2;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse20021;
import io.swagger.model.InlineResponse401;
import io.swagger.model.PasswordRequest;
import io.swagger.model.QueueResponse;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TemplateRequest;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.UrlRequest;
import io.swagger.model.Vps;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsOrder;
import io.swagger.model.VpsOrderPostRequest;
import io.swagger.model.VpsOrderPutRequest;
import io.swagger.model.VpsOrderPutResponse;
import io.swagger.model.VpsRow;
import io.swagger.model.VpsTemplatesList;
import io.swagger.model.VpsTrafficResponse;
import io.swagger.api.VpsApiService;

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
@Path("/vps")
@RequestScoped






public class VpsApi  {

  @Context SecurityContext securityContext;

  @Inject VpsApiService delegate;


    @POST
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Place VPS Order", description = "Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addVps(
@Parameter(description = "" ) VpsOrderPostRequest body
) {
        return delegate.addVps(body, securityContext);
    }

    @POST
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Place VPS Order", description = "Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addVps(@Multipart(value = "osDistro", required = false)  String osDistro, @Multipart(value = "slices", required = false)  Integer slices, @Multipart(value = "vpsPlatform", required = false)  String vpsPlatform, @Multipart(value = "controlpanel", required = false)  String controlpanel, @Multipart(value = "period", required = false)  Integer period, @Multipart(value = "location", required = false)  Integer location, @Multipart(value = "osVersion", required = false)  String osVersion, @Multipart(value = "hostname", required = false)  String hostname, @Multipart(value = "coupon", required = false)  String coupon, @Multipart(value = "rootpass", required = false)  String rootpass, @Multipart(value = "comment", required = false)  String comment) {
        return delegate.addVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment, securityContext);
    }

    @DELETE
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete VPS Backup", description = "Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteVpsBackup(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
,  @NotNull 
@Parameter(description = "The backup filename to delete.",required=true)  @QueryParam("file") String file
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given VPS.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.deleteVpsBackup(id, file, all, securityContext);
    }

    @GET
    @Path("/{id}/block_smtp")
    
    @Produces({ "application/json" })
    @Operation(summary = "Blocks SMTP", description = "Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsBlockSmtp(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsBlockSmtp(id, securityContext);
    }

    @GET
    @Path("/{id}/disable_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable CD Drive", description = "Disables the virtual CD drive on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsDisableCd(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsDisableCd(id, securityContext);
    }

    @GET
    @Path("/{id}/disable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable Quotas", description = "Disables disk quota enforcement on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsDisableQuota(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsDisableQuota(id, securityContext);
    }

    @GET
    @Path("/{id}/eject_cd")
    
    @Produces({ "application/json" })
    @Operation(summary = "Eject CD Drive", description = "Ejects the virtual CD from the VPS CD drive.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsEjectCd(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsEjectCd(id, securityContext);
    }

    @GET
    @Path("/{id}/enable_quota")
    
    @Produces({ "application/json" })
    @Operation(summary = "Enable Quotas", description = "Enables disk quota enforcement on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsEnableQuota(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsEnableQuota(id, securityContext);
    }

    @GET
    @Path("/{id}/restart")
    
    @Produces({ "application/json" })
    @Operation(summary = "Restart VPS", description = "Restarts the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsRestart(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsRestart(id, securityContext);
    }

    @GET
    @Path("/{id}/start")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start VPS", description = "Powers on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsStart(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsStart(id, securityContext);
    }

    @GET
    @Path("/{id}/stop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Stop VPS", description = "Powers off the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response doVpsStop(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") Integer id
) {
        return delegate.doVpsStop(id, securityContext);
    }

    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download VPS Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadVpsBackup(
@Parameter(description = "" ,required=true) IdBackupsBody2 body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given VPS.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.downloadVpsBackup(body, id, all, securityContext);
    }

    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download VPS Backup", description = "Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response downloadVpsBackup(@Multipart(value = "file")  String file, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given VPS.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.downloadVpsBackup(file, id, all, securityContext);
    }

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "VPS Ordering Information", description = "Retrieves available VPS configurations, OS templates, and pricing for ordering.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Order information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewVps() {
        return delegate.getNewVps(securityContext);
    }

    @GET
    @Path("/{id}/backups")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Backups List", description = "Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of the available backups", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsBackupRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsBackups(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
,  
@Parameter(description = "Set to `1` to list all backups across all services, not just the ones for the given VPS.", schema=@Schema(allowableValues={ "0", "1" })
)  @QueryParam("all") String all
) {
        return delegate.getVpsBackups(id, all, securityContext);
    }

    @GET
    @Path("/{id}/buy_hd_space")
    
    @Produces({ "application/json" })
    @Operation(summary = "HD Space Addon Info", description = "Returns available hard drive space addon options and pricing for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Buy HD Space information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsBuyHdSpace(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsBuyHdSpace(id, securityContext);
    }

    @GET
    @Path("/{id}/buy_ip")
    
    @Produces({ "application/json" })
    @Operation(summary = "Additional IP Addon Info", description = "Returns available additional IP address options and pricing for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Buy IP information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsBuyIp(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsBuyIp(id, securityContext);
    }

    @GET
    @Path("/{id}/change_timezone")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Timezone Info", description = "Returns the list of available timezones that can be set on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Change Timezone info response", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsChangeTimezone(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsChangeTimezone(id, securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Order", description = "Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The VPS Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Vps.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsInfo(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsInfo(id, securityContext);
    }

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Invoices", description = "Returns the billing invoices associated with this VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsInvoices(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsInvoices(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List VPS Orders", description = "Returns all VPS services on the account with their current status and configuration.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Vps` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = VpsRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsList() {
        return delegate.getVpsList(securityContext);
    }

    @GET
    @Path("/{id}/reinstall_os")
    
    @Produces({ "application/json" })
    @Operation(summary = "VPS Reinstall OS Options", description = "Returns the list of available OS templates for reinstalling the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Reinstall OS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTemplatesList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsReinstallOs(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsReinstallOs(id, securityContext);
    }

    @GET
    @Path("/{id}/reverse_dns")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", description = "Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsReverseDns(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsReverseDns(id, securityContext);
    }

    @GET
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "VNC Setup Info", description = "Returns the current VNC connection information for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Setup VNC Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsSetupVnc(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsSetupVnc(id, securityContext);
    }

    @GET
    @Path("/{id}/slices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Slice Upgrade Info", description = "Returns available slice upgrade options and pricing for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Slices information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsSlices(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsSlices(id, securityContext);
    }

    @GET
    @Path("/{id}/traffic_usage")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Traffic Usage", description = "Returns bandwidth traffic usage data for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Traffic usage", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTrafficResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsTrafficUsage(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsTrafficUsage(id, securityContext);
    }

    @GET
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get View Desktop Info", description = "Returns remote desktop connection information for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsViewDesktop(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.getVpsViewDesktop(id, securityContext);
    }

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend VPS Welcome Email", description = "Resends the welcome email containing connection details and credentials for the VPS order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getVpsWelcomeEmail(
@Parameter(description = "VPS ID",required=true) @PathParam("id") String id
) {
        return delegate.getVpsWelcomeEmail(id, securityContext);
    }

    @GET
    @Path("/{id}/backup")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start a VPS Backup", description = "Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsBackup(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsBackup(id, securityContext);
    }

    @POST
    @Path("/{id}/buy_hd_space")
    
    @Produces({ "application/json" })
    @Operation(summary = "Purchase HD Space Addon", description = "Purchases additional hard drive space for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Buy HD Space for VPS response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsBuyHdSpace(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsBuyHdSpace(id, securityContext);
    }

    @POST
    @Path("/{id}/buy_ip")
    
    @Produces({ "application/json" })
    @Operation(summary = "Purchase Additional IP", description = "Purchases an additional IP address for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit VPS Buy IP form response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsBuyIp(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsBuyIp(id, securityContext);
    }

    @POST
    @Path("/{id}/change_hostname")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Hostname", description = "Changes the hostname of the VPS. This queues a background task to update the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeHostname(@Multipart(value = "hostname")  String hostname, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeHostname(hostname, id, securityContext);
    }

    @POST
    @Path("/{id}/change_hostname")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Hostname", description = "Changes the hostname of the VPS. This queues a background task to update the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeHostname(
@Parameter(description = "" ,required=true) HostnameObject body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeHostname(body, id, securityContext);
    }

    @POST
    @Path("/{id}/change_root_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Root Password", description = "Changes the root password of the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeRootPassword(@Multipart(value = "password")  String password, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeRootPassword(password, id, securityContext);
    }

    @POST
    @Path("/{id}/change_root_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Root Password", description = "Changes the root password of the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeRootPassword(
@Parameter(description = "" ,required=true) PasswordRequest body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeRootPassword(body, id, securityContext);
    }

    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Timezone", description = "Changes the system timezone on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeTimezone(@Multipart(value = "timezone")  String timezone, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeTimezone(timezone, id, securityContext);
    }

    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Timezone", description = "Changes the system timezone on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeTimezone(
@Parameter(description = "" ,required=true) TimezoneUpdate body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeTimezone(body, id, securityContext);
    }

    @POST
    @Path("/{id}/change_webuzo_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", description = "Changes the Webuzo control panel password on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeWebuzoPassword(@Multipart(value = "password")  String password, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeWebuzoPassword(password, id, securityContext);
    }

    @POST
    @Path("/{id}/change_webuzo_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", description = "Changes the Webuzo control panel password on the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsChangeWebuzoPassword(
@Parameter(description = "" ,required=true) PasswordRequest body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsChangeWebuzoPassword(body, id, securityContext);
    }

    @POST
    @Path("/{id}/insert_cd")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in VPS", description = "Mounts an ISO image in the VPS virtual CD drive from the given URL.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsInsertCd(@Multipart(value = "url")  String url, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsInsertCd(url, id, securityContext);
    }

    @POST
    @Path("/{id}/insert_cd")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in VPS", description = "Mounts an ISO image in the VPS virtual CD drive from the given URL.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsInsertCd(
@Parameter(description = "" ,required=true) UrlRequest body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsInsertCd(body, id, securityContext);
    }

    @POST
    @Path("/{id}/reinstall_os")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall VPS OS", description = "Reinstalls the operating system on the VPS. Warning - all data will be erased.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsReinstallOs(@Multipart(value = "template")  String template, @Multipart(value = "password")  String password, @Multipart(value = "localPassword")  String localPassword, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsReinstallOs(template, password, localPassword, id, securityContext);
    }

    @POST
    @Path("/{id}/reinstall_os")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall VPS OS", description = "Reinstalls the operating system on the VPS. Warning - all data will be erased.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsReinstallOs(
@Parameter(description = "" ,required=true) TemplateRequest body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsReinstallOs(body, id, securityContext);
    }

    @POST
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset VPS Password", description = "Resets the root password on the VPS to a new randomly generated password.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsResetPassword(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsResetPassword(id, securityContext);
    }

    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore VPS from Backup", description = "Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsRestore(
@Parameter(description = "VPS Restore request" ,required=true) RestoreRequest body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsRestore(body, id, securityContext);
    }

    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore VPS from Backup", description = "Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsRestore(@Multipart(value = "backup")  String backup, @Multipart(value = "password")  String password, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsRestore(backup, password, id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the VPS IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsReverseDns(
@Parameter(description = "" ,required=true) ReverseDnsEntries body
, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsReverseDns(body, id, securityContext);
    }

    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the VPS IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, 
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsReverseDns(ips, id, securityContext);
    }

    @POST
    @Path("/{id}/setup_vnc")
    
    @Produces({ "application/json" })
    @Operation(summary = "Setup VNC", description = "Sets up or refreshes the VNC console connection for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsSetupVnc(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsSetupVnc(id, securityContext);
    }

    @POST
    @Path("/{id}/slices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Purchase Slice Upgrade", description = "Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS slices response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsSlices(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsSlices(id, securityContext);
    }

    @POST
    @Path("/{id}/view_desktop")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update View Desktop", description = "Updates or refreshes the remote desktop session for the VPS.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit VPS View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postVpsViewDesktop(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.postVpsViewDesktop(id, securityContext);
    }

    @PUT
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate VPS Order", description = "Validates a VPS order before placing it. Returns cost breakdown and any validation errors.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate VPS order response.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putVps(
@Parameter(description = "" ) VpsOrderPutRequest body
) {
        return delegate.putVps(body, securityContext);
    }

    @PUT
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate VPS Order", description = "Validates a VPS order before placing it. Returns cost breakdown and any validation errors.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate VPS order response.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putVps(@Multipart(value = "osDistro", required = false)  String osDistro, @Multipart(value = "slices", required = false)  Integer slices, @Multipart(value = "vpsPlatform", required = false)  String vpsPlatform, @Multipart(value = "controlpanel", required = false)  String controlpanel, @Multipart(value = "period", required = false)  Integer period, @Multipart(value = "location", required = false)  Integer location, @Multipart(value = "osVersion", required = false)  String osVersion, @Multipart(value = "hostname", required = false)  String hostname, @Multipart(value = "coupon", required = false)  String coupon, @Multipart(value = "rootpass", required = false)  String rootpass, @Multipart(value = "comment", required = false)  String comment) {
        return delegate.putVps(osDistro, slices, vpsPlatform, controlpanel, period, location, osVersion, hostname, coupon, rootpass, comment, securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Order", description = "Updates settings on a VPS order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateVpsInfo(
@Parameter(description = "VPS ID number.",required=true) @PathParam("id") String id
) {
        return delegate.updateVpsInfo(id, securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel VPS Service", description = "Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20021.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response vPSCancel(
@Parameter(description = "VPS ID number",required=true) @PathParam("id") Integer id
) {
        return delegate.vPSCancel(id, securityContext);
    }
}
