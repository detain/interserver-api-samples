package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.InlineResponse20019;
import io.swagger.model.InlineResponse20026;
import io.swagger.model.InlineResponse401;
import io.swagger.model.OrderBuyNowServerBody;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.Server;
import io.swagger.model.ServerIpmiLiveInfo;
import io.swagger.model.ServerIpmiLiveRequest;
import io.swagger.model.ServerIpmiPowerRequest;
import io.swagger.model.ServerOrder;
import io.swagger.model.ServerRow;
import io.swagger.model.ServersBuyNowError;
import io.swagger.model.ServersBuyNowResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

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

@Path("/servers")


public class ServersApi {

    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Server Order", description = "Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response addServer() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/order/buy_now_server")
    @Produces({ "application/json" })
    @Operation(summary = "Get Buy Now Server Options", description = "Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Available server configurations with pricing and hardware options.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20026.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response buyItNowServerOrder() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @Operation(summary = "Server Ordering Information", description = "Retrieves available server configurations and pricing for ordering a new dedicated server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Server Ordering details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getNewServer() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Server Order", description = "Returns detailed information about a specific server including its hardware configuration, IPs, and status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Server details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Server.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getServerInfo( @PathParam("id")

 @Parameter(description = "Server ID number.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Server Invoices", description = "Returns the billing invoices associated with this dedicated server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getServerInvoices( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Produces({ "application/json" })
    @Operation(summary = "List Servers", description = "Returns all dedicated server services on the account with their current status and configuration.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Servers` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ServerRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getServerList() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}/reverse_dns")
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", description = "Returns the current reverse DNS (PTR record) entries for the server's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Servers Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getServerReverseDns( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Server Welcome Email", description = "Resends the welcome email for the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getServersWelcomeEmail( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/order/buy_now_server")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Buy Now Server Order", description = "Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServersBuyNowResponse.class))),
        @ApiResponse(responseCode = "400", description = "Order validation failed.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServersBuyNowError.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response placeBuyNowServer(@Valid OrderBuyNowServerBody body) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the server's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update Server Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postServerReverseDns(@Valid ReverseDnsEntries body, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", description = "Updates the reverse DNS (PTR record) entries for the server's IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update Server Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postServerReverseDns(@FormParam(value = "ips")  Map<String, Object> ips, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate Server Order", description = "Validates a server order before placing it. Use this to check for errors before committing to a purchase.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Server order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response putServers() {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}/ipmi_live")
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Information", description = "Returns the current IPMI live connection information for the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiLiveGet( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/ipmi_live")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Setup", description = "Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiLivePost(@FormParam(value = "asset")  Integer asset,@FormParam(value = "ip")  String ip, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/ipmi_live")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Setup", description = "Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiLivePost(@Valid ServerIpmiLiveRequest body, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Path("/{id}/ipmi_power")
    @Produces({ "application/json" })
    @Operation(summary = "Get IPMI Power Status", description = "Returns the chassis power status from ipmi.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiPowerGet( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/ipmi_power")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Power", description = "Uses the IPMI interface to set the Power status on the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiPowerPost(@FormParam(value = "asset")  Integer asset,@FormParam(value = "action")  String action, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}/ipmi_power")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Power", description = "Uses the IPMI interface to set the Power status on the server.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serverIpmiPowerPost(@Valid ServerIpmiPowerRequest body, @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Server Service", description = "Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Servers Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20019.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response serversCancel( @PathParam("id")

 @Parameter(description = "Server ID number") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Server Order", description = "Updates settings on a dedicated server order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Servers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response updateServerInfo( @PathParam("id")

 @Parameter(description = "Server ID number.") String id
) {
        return Response.ok().entity("magic!").build();
    }}
