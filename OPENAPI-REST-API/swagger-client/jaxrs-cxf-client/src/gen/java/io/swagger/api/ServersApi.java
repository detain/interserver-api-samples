package io.swagger.api;

import io.swagger.model.BuyItNowList;
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

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
public interface ServersApi  {

    /**
     * Place Server Order
     *
     * Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/servers/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void addServer();

    /**
     * Get Buy Now Server Options
     *
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
     *
     */
    @GET
    @Path("/servers/order/buy_now_server")
    @Produces({ "application/json" })
    @Operation(summary = "Get Buy Now Server Options", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Available server configurations with pricing and hardware options.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20026.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20026 buyItNowServerOrder();

    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     *
     */
    @GET
    @Path("/buy_now_servers_list")
    @Produces({ "application/json" })
    @Operation(summary = "List Marketplace Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Marketplace Buy it now servers list", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BuyItNowList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public BuyItNowList getMPServers();

    /**
     * Server Ordering Information
     *
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     *
     */
    @GET
    @Path("/servers/order")
    @Produces({ "application/json" })
    @Operation(summary = "Server Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Server Ordering details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServerOrder getNewServer();

    /**
     * Get Server Order
     *
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     *
     */
    @GET
    @Path("/servers/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Server details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Server.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Server getServerInfo(@PathParam("id") Integer id);

    /**
     * Get Server Invoices
     *
     * Returns the billing invoices associated with this dedicated server.
     *
     */
    @GET
    @Path("/servers/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Server Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getServerInvoices(@PathParam("id") Integer id);

    /**
     * List Servers
     *
     * Returns all dedicated server services on the account with their current status and configuration.
     *
     */
    @GET
    @Path("/servers")
    @Produces({ "application/json" })
    @Operation(summary = "List Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Servers` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ServerRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<ServerRow> getServerList();

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    @GET
    @Path("/servers/{id}/reverse_dns")
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Servers Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ReverseDnsEntries getServerReverseDns(@PathParam("id") Integer id);

    /**
     * Resend Server Welcome Email
     *
     * Resends the welcome email for the order.
     *
     */
    @GET
    @Path("/servers/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Server Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getServersWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Place Buy Now Server Order
     *
     * Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
     *
     */
    @POST
    @Path("/servers/order/buy_now_server")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Buy Now Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServersBuyNowResponse.class))),
        @ApiResponse(responseCode = "400", description = "Order validation failed.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServersBuyNowError.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ServersBuyNowResponse placeBuyNowServer(OrderBuyNowServerBody body);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    @POST
    @Path("/servers/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update Server Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postServerReverseDns(ReverseDnsEntries body, @PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    @POST
    @Path("/servers/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update Server Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postServerReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, @PathParam("id") Integer id);

    /**
     * Validate Server Order
     *
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    @PUT
    @Path("/servers/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Server order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putServers();

    /**
     * Server IPMI Live Information
     *
     * Returns the current IPMI live connection information for the server.
     *
     */
    @GET
    @Path("/servers/{id}/ipmi_live")
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServerIpmiLiveInfo serverIpmiLiveGet(@PathParam("id") Integer id);

    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
     *
     */
    @POST
    @Path("/servers/{id}/ipmi_live")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Setup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServerIpmiLiveInfo serverIpmiLivePost(@Multipart(value = "asset")  Integer asset, @Multipart(value = "ip")  String ip, @PathParam("id") Integer id);

    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
     *
     */
    @POST
    @Path("/servers/{id}/ipmi_live")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Live Setup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from the Servers IPMI Live information request.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServerIpmiLiveInfo.class))),
        @ApiResponse(responseCode = "404", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServerIpmiLiveInfo serverIpmiLivePost(ServerIpmiLiveRequest body, @PathParam("id") Integer id);

    /**
     * Get IPMI Power Status
     *
     * Returns the chassis power status from ipmi.
     *
     */
    @GET
    @Path("/servers/{id}/ipmi_power")
    @Produces({ "application/json" })
    @Operation(summary = "Get IPMI Power Status", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse serverIpmiPowerGet(@PathParam("id") Integer id);

    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     *
     */
    @POST
    @Path("/servers/{id}/ipmi_power")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Power", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse serverIpmiPowerPost(@Multipart(value = "asset")  Integer asset, @Multipart(value = "action")  String action, @PathParam("id") Integer id);

    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     *
     */
    @POST
    @Path("/servers/{id}/ipmi_power")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Server IPMI Power", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "400", description = "The specified resource was not found", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse serverIpmiPowerPost(ServerIpmiPowerRequest body, @PathParam("id") Integer id);

    /**
     * Cancel Server Service
     *
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/servers/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Server Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Servers Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20019.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20019 serversCancel(@PathParam("id") Integer id);

    /**
     * Update Server Order
     *
     * Updates settings on a dedicated server order.
     *
     */
    @POST
    @Path("/servers/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public void updateServerInfo(@PathParam("id") String id);
}
