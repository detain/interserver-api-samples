package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.MailApiService;

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
import io.swagger.model.DenyRuleNew;
import io.swagger.model.DenyRuleRecord;
import io.swagger.model.EmailAddress;
import io.swagger.model.EmailAddressName;
import io.swagger.model.GenericResponse;
import io.swagger.model.InlineResponse2008;
import io.swagger.model.InlineResponse401;
import io.swagger.model.MailAlertRequest;
import io.swagger.model.MailAlertUpdateRequest;
import io.swagger.model.MailAlertsResponse;
import io.swagger.model.MailAttachment;
import io.swagger.model.MailBlocks;
import io.swagger.model.MailDelistRequest;
import io.swagger.model.MailDelistResponse;
import io.swagger.model.MailDeliverabilityResponse;
import io.swagger.model.MailLog;
import io.swagger.model.MailOrder;
import io.swagger.model.MailRow;
import io.swagger.model.MailSchema;
import io.swagger.model.MailStatsType;
import io.swagger.model.SendMail;
import io.swagger.model.SendMailAdv;
import io.swagger.model.SuccessTextResponse;

import java.util.Map;
import java.util.List;

import java.io.InputStream;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import org.glassfish.jersey.media.multipart.FormDataParam;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;

@Path("/mail")



public class MailApi  {

   private MailApiService delegate;

   protected MailApi() {
   }

   @javax.inject.Inject
   public MailApi(MailApiService delegate) {
      this.delegate = delegate;
   }

    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place Mail Order", description = "Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response addMail(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addMail(securityContext);
    }
    @POST
    @Path("/{id}/rules")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Deny Rule", description = "Adds a new deny rule to automatically block emails that match the specified criteria.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Deny rule created successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addRule(@Parameter(in = ParameterIn.DEFAULT, description = "These are the fields needed to create a new email deny rule." ,required=true) DenyRuleNew body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addRule(body,id,securityContext);
    }
    @POST
    @Path("/{id}/rules")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Deny Rule", description = "Adds a new deny rule to automatically block emails that match the specified criteria.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Deny rule created successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addRule(@Parameter(description = "", required=true)  @FormParam("user")  String user,@Parameter(description = "", required=true, schema=@Schema(allowableValues={ "domain", "email", "startswith", "destination" })
)  @FormParam("type")  String type,@Parameter(description = "", required=true)  @FormParam("data")  String data,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addRule(user,type,data,id,securityContext);
    }
    @POST
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Mail Alert", description = "Creates a new alert for the mail service, such as delivery or quota notifications.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response createMailAlert(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) MailAlertRequest body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.createMailAlert(body,id,securityContext);
    }
    @POST
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Mail Alert", description = "Creates a new alert for the mail service, such as delivery or quota notifications.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response createMailAlert(@Parameter(description = "", required=true)  @FormParam("type")  String type,@Parameter(description = "", required=true)  @FormParam("value")  String value,@Parameter(description = "", required=true)  @FormParam("to")  String to,@Parameter(description = "", required=true)  @FormParam("enabled")  String enabled,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.createMailAlert(type,value,to,enabled,id,securityContext);
    }
    @DELETE
    @Path("/{id}/alerts")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Mail Alert", description = "Deletes an existing alert definition for the mail service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteMailAlert(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Parameter(in = ParameterIn.QUERY, description = "Alert ID to delete.",required=true) @QueryParam("alert_id") Integer alertId,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteMailAlert(id,alertId,securityContext);
    }
    @DELETE
    @Path("/{id}/rules/{rule}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Deny Rule", description = "Removes a deny rule from the mail service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Deny rule deleted successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response deleteRule(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Parameter(in = ParameterIn.PATH, description = "The ID of the Rules entry.",required=true) @PathParam("rule") String rule,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteRule(id,rule,securityContext);
    }
    @POST
    @Path("/{id}/blocks/delete")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Remove Email Address from Block List", description = "Removes an email address from the mail service's block lists.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email address removed from block list successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response delistBlock(@Parameter(description = "", required=true)  @FormParam("email")  String email,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.delistBlock(email,id,securityContext);
    }
    @POST
    @Path("/{id}/blocks/delete")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Remove Email Address from Block List", description = "Removes an email address from the mail service's block lists.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email address removed from block list successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response delistBlock(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) EmailAddress body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.delistBlock(body,id,securityContext);
    }
    @GET
    @Path("/{id}/alerts")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Mail Alerts", description = "Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Alert configuration for the mail service.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailAlertsResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailAlerts(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailAlerts(id,securityContext);
    }
    @GET
    @Path("/{id}/blocks")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Blocked Email Addresses", description = "Displays a listing of the blocked email addresses", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailBlocks.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailBlocks(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailBlocks(id,securityContext);
    }
    @GET
    @Path("/{id}/delist")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Delist Status", description = "Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Blocklist entries and delist details for the mail service.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailDelistResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailDelist(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailDelist(id,securityContext);
    }
    @GET
    @Path("/{id}/deliverability")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Deliverability Metrics", description = "Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Deliverability metrics for the mail service.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailDeliverabilityResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailDeliverability(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailDeliverability(id,securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Mail Order", description = "Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Mail Information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailInfo(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailInfo(id,securityContext);
    }
    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Mail Invoices", description = "Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailInvoices(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailInvoices(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Mail Orders", description = "Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Mail` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = MailRow.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailList(securityContext);
    }
    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend Mail Welcome Email", description = "Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getMailWelcomeEmail(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getMailWelcomeEmail(id,securityContext);
    }
    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Mail Ordering Information", description = "Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Mail ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailOrder.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewMail(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getNewMail(securityContext);
    }
    @GET
    @Path("/{id}/rules")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Deny Rules", description = "Returns a listing of all the deny block rules configured for this mail service.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "List of configured deny rules.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DenyRuleRecord.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getRules(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getRules(id,securityContext);
    }
    @GET
    @Path("/{id}/stats")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Mail Usage Statistics", description = "Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Mail service usage statistics.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailStatsType.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getStats(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Parameter(in = ParameterIn.QUERY, description = "The timeframe for the statistics.", schema=@Schema(allowableValues={ "all", "billing", "month", "7d", "24h", "1d", "1h" })
) @QueryParam("time") String time,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getStats(id,time,securityContext);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Mail", description = "Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Mail Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2008.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response mailCancel(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.mailCancel(id,securityContext);
    }
    @POST
    @Path("/{id}/delist")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Delist a Blocked Sender", description = "Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postMailDelist(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) MailDelistRequest body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postMailDelist(body,id,securityContext);
    }
    @POST
    @Path("/{id}/delist")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Delist a Blocked Sender", description = "Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postMailDelist(@Parameter(description = "", required=true)  @FormParam("unblock")  String unblock,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postMailDelist(unblock,id,securityContext);
    }
    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate Mail Order", description = "Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Mail order response."),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response putMail(@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.putMail(securityContext);
    }
    @GET
    @Path("/{id}/reset_password")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reset Mail Password", description = "Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response resetMailPassword(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.resetMailPassword(id,securityContext);
    }
    @POST
    @Path("/{id}/advsend")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Send Email with Advanced Options", description = "Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email queued successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response sendAdvMail(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) SendMailAdv body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.sendAdvMail(body,id,securityContext);
    }
    @POST
    @Path("/{id}/advsend")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Send Email with Advanced Options", description = "Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email queued successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response sendAdvMail(@Parameter(description = "", required=true)  @FormParam("subject")  String subject,@Parameter(description = "", required=true)  @FormParam("body")  String body,@Parameter(description = "", required=true)  @FormParam("from")  EmailAddressName from,@Parameter(description = "", required=true)  @FormParam("to")  List<EmailAddressName> to,@Parameter(description = "", required=true)  @FormParam("replyto")  List<EmailAddressName> replyto,@Parameter(description = "", required=true)  @FormParam("cc")  List<EmailAddressName> cc,@Parameter(description = "", required=true)  @FormParam("bcc")  List<EmailAddressName> bcc,@Parameter(description = "", required=true)  @FormParam("attachments")  List<MailAttachment> attachments,@Parameter(description = "", required=true)  @FormParam("id")  Long id2,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.sendAdvMail(subject,body,from,to,replyto,cc,bcc,attachments,id2,id,securityContext);
    }
    @POST
    @Path("/{id}/send")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Send Email", description = "Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email queued successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response sendMail(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) SendMail body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.sendMail(body,id,securityContext);
    }
    @POST
    @Path("/{id}/send")
    @Consumes({ "application/json", "application/x-www-form-urlencoded" })
    @Produces({ "application/json" })
    @Operation(summary = "Send Email", description = "Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Email queued successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = GenericResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response sendMail(@Parameter(description = "", required=true)  @FormParam("to")  String to,@Parameter(description = "", required=true)  @FormParam("from")  String from,@Parameter(description = "", required=true)  @FormParam("subject")  String subject,@Parameter(description = "", required=true)  @FormParam("body")  String body,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.sendMail(to,from,subject,body,id,securityContext);
    }
    @PUT
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Mail Alert", description = "Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateMailAlert(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) MailAlertUpdateRequest body
,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateMailAlert(body,id,securityContext);
    }
    @PUT
    @Path("/{id}/alerts")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Mail Alert", description = "Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response updateMailAlert(@Parameter(description = "", required=true)  @FormParam("alert_id")  Integer alertId,@Parameter(description = "", required=true)  @FormParam("type")  String type,@Parameter(description = "", required=true)  @FormParam("value")  String value,@Parameter(description = "", required=true)  @FormParam("to")  String to,@Parameter(description = "", required=true)  @FormParam("enabled")  String enabled,@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateMailAlert(alertId,type,value,to,enabled,id,securityContext);
    }
    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Mail Order", description = "Updates mail service metadata for the order, such as stored settings or account details.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateMailInfo(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateMailInfo(id,securityContext);
    }
    @GET
    @Path("/{id}/log")
    
    @Produces({ "application/json" })
    @Operation(summary = "View Mail Log", description = "Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Paginated list of mail log entries matching the specified filters.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MailLog.class))),
        
        @ApiResponse(responseCode = "400", description = "bad input parameter") })
    public Response viewMailLog(@Parameter(in = ParameterIn.PATH, description = "The mail service ID. Use `mail_id` from `GET /mail`.",required=true) @PathParam("id") Integer id,@Parameter(in = ParameterIn.QUERY, description = "The ID of your mail order this will be sent through.") @QueryParam("id") Long id,@Parameter(in = ParameterIn.QUERY, description = "originating ip address sending mail") @QueryParam("origin") String origin,@Parameter(in = ParameterIn.QUERY, description = "mx record mail was sent to") @QueryParam("mx") String mx,@Parameter(in = ParameterIn.QUERY, description = "from email address") @QueryParam("from") String from,@Parameter(in = ParameterIn.QUERY, description = "to/destination email address") @QueryParam("to") String to,@Parameter(in = ParameterIn.QUERY, description = "subject containing this string") @QueryParam("subject") String subject,@Parameter(in = ParameterIn.QUERY, description = "mail id") @QueryParam("mailid") String mailid,@Parameter(in = ParameterIn.QUERY, description = "number of records to skip for pagination", schema=@Schema(allowableValues={ "0" })
) @DefaultValue("0") @QueryParam("skip") Integer skip,@Parameter(in = ParameterIn.QUERY, description = "maximum number of records to return", schema=@Schema(allowableValues={ "1", "10000" }, minimum="1", maximum="10000")
) @DefaultValue("100") @QueryParam("limit") Integer limit,@Parameter(in = ParameterIn.QUERY, description = "earliest date to get emails in unix timestamp format", schema=@Schema(allowableValues={ "0", "9999999999" }, maximum="9999999999")
) @QueryParam("startDate") Long startDate,@Parameter(in = ParameterIn.QUERY, description = "Latest date to get emails in unix timestamp format.", schema=@Schema(allowableValues={ "0", "9999999999" }, maximum="9999999999")
) @QueryParam("endDate") Long endDate,@Parameter(in = ParameterIn.QUERY, description = "Filter emails by whether or not they were delivered.", schema=@Schema(allowableValues={ "0", "1" })
) @QueryParam("delivered") String delivered,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.viewMailLog(id,id,origin,mx,from,to,subject,mailid,skip,limit,startDate,endDate,delivered,securityContext);
    }
}
