package io.swagger.api;

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

import javax.ws.rs.*;
import javax.ws.rs.core.Response;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

@Path("/mail")


public class MailApi {

    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Mail Order", description = "Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response addMail() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response addRule(@Valid DenyRuleNew body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response addRule(@FormParam(value = "user")  String user,@FormParam(value = "type")  String type,@FormParam(value = "data")  String data, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response createMailAlert(@Valid MailAlertRequest body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response createMailAlert(@FormParam(value = "type")  String type,@FormParam(value = "value")  String value,@FormParam(value = "to")  String to,@FormParam(value = "enabled")  String enabled, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response deleteMailAlert( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
, @NotNull  @QueryParam("alert_id") 

 @Parameter(description = "Alert ID to delete.")  Integer alertId
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response deleteRule( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
, @PathParam("rule")

 @Parameter(description = "The ID of the Rules entry.") String rule
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response delistBlock(@FormParam(value = "email")  String email, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response delistBlock(@Valid EmailAddress body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailAlerts( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailBlocks( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailDelist( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailDeliverability( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailInfo( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailInvoices( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Produces({ "application/json" })
    @Operation(summary = "List Mail Orders", description = "Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Mail" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Mail` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = MailRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailList() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getMailWelcomeEmail( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getNewMail() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getRules( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getStats( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
,  @QueryParam("time") 

 @Parameter(description = "The timeframe for the statistics.")  String time
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response mailCancel( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postMailDelist(@Valid MailDelistRequest body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postMailDelist(@FormParam(value = "unblock")  String unblock, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response putMail() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response resetMailPassword( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response sendAdvMail(@Valid SendMailAdv body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response sendAdvMail(@FormParam(value = "subject")  String subject,@FormParam(value = "body")  String body,@FormParam(value = "from")  EmailAddressName from,@FormParam(value = "to")  List<EmailAddressName> to,@FormParam(value = "replyto")  List<EmailAddressName> replyto,@FormParam(value = "cc")  List<EmailAddressName> cc,@FormParam(value = "bcc")  List<EmailAddressName> bcc,@FormParam(value = "attachments")  List<MailAttachment> attachments,@FormParam(value = "id")  Long id2, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response sendMail(@Valid SendMail body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response sendMail(@FormParam(value = "to")  String to,@FormParam(value = "from")  String from,@FormParam(value = "subject")  String subject,@FormParam(value = "body")  String body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateMailAlert(@Valid MailAlertUpdateRequest body, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response updateMailAlert(@FormParam(value = "alert_id")  Integer alertId,@FormParam(value = "type")  String type,@FormParam(value = "value")  String value,@FormParam(value = "to")  String to,@FormParam(value = "enabled")  String enabled, @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response updateMailInfo( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") String id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "400", description = "bad input parameter")
    })
    public Response viewMailLog( @PathParam("id")

 @Parameter(description = "The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.") Integer id
,  @QueryParam("id") 

 @Parameter(description = "The ID of your mail order this will be sent through.")  Long id
,  @QueryParam("origin") 

 @Parameter(description = "originating ip address sending mail")  String origin
,  @QueryParam("mx") 

 @Parameter(description = "mx record mail was sent to")  String mx
,  @QueryParam("from") 

 @Parameter(description = "from email address")  String from
,  @QueryParam("to") 

 @Parameter(description = "to/destination email address")  String to
,  @QueryParam("subject") 

 @Parameter(description = "subject containing this string")  String subject
,  @QueryParam("mailid") 

 @Parameter(description = "mail id")  String mailid
, @Min(0)  @QueryParam("skip") @DefaultValue("0") 

 @Parameter(description = "number of records to skip for pagination")  Integer skip
, @Min(1) @Max(10000)  @QueryParam("limit") @DefaultValue("100") 

 @Parameter(description = "maximum number of records to return")  Integer limit
, @Min(0L) @Max(9999999999L)  @QueryParam("startDate") 

 @Parameter(description = "earliest date to get emails in unix timestamp format")  Long startDate
, @Min(0L) @Max(9999999999L)  @QueryParam("endDate") 

 @Parameter(description = "Latest date to get emails in unix timestamp format.")  Long endDate
,  @QueryParam("delivered") 

 @Parameter(description = "Filter emails by whether or not they were delivered.")  String delivered
) {
        return Response.ok().entity("magic!").build();
    }}
