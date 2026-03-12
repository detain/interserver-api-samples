package org.openapitools.api;

import org.openapitools.model.BuyItNowList;
import org.openapitools.model.BuyItNowServerOrder200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.PlaceBuyNowServerRequest;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.Server;
import org.openapitools.model.ServerIpmiLiveInfo;
import org.openapitools.model.ServerOrder;
import org.openapitools.model.ServerRow;
import org.openapitools.model.ServersBuyNowError;
import org.openapitools.model.ServersBuyNowResponse;
import org.openapitools.model.ServersCancel200Response;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;

import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("")
@Api(value = "/", description = "")
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
    @ApiOperation(value = "Place Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
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
    @ApiOperation(value = "Get Buy Now Server Options", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Available server configurations with pricing and hardware options.", response = BuyItNowServerOrder200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BuyItNowServerOrder200Response buyItNowServerOrder();

    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     *
     */
    @GET
    @Path("/buy_now_servers_list")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Marketplace Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Marketplace Buy it now servers list", response = BuyItNowList.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Server Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Server Ordering details", response = ServerOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Get Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Server details", response = Server.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Get Server Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "List Servers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Servers` services on your account.", response = ServerRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<ServerRow> getServerList();

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.
     *
     */
    @GET
    @Path("/servers/{id}/reverse_dns")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reverse DNS Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Servers Reverse DNS info response", response = ReverseDnsEntries.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Resend Server Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Place Buy Now Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Order placed successfully.", response = ServersBuyNowResponse.class),
        @ApiResponse(code = 400, message = "Order validation failed.", response = ServersBuyNowError.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ServersBuyNowResponse placeBuyNowServer(PlaceBuyNowServerRequest placeBuyNowServerRequest);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.
     *
     */
    @POST
    @Path("/servers/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Update Server Reverse DNS response", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse postServerReverseDns(@PathParam("id") Integer id, ReverseDnsEntries reverseDnsEntries);

    /**
     * Validate Server Order
     *
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    @PUT
    @Path("/servers/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Server order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Server IPMI Live Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response from the Servers IPMI Live information request.", response = ServerIpmiLiveInfo.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public ServerIpmiLiveInfo serverIpmiLiveGet(@PathParam("id") Integer id);

    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.
     *
     */
    @POST
    @Path("/servers/{id}/ipmi_live")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Server IPMI Live Setup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response from the Servers IPMI Live information request.", response = ServerIpmiLiveInfo.class),
        @ApiResponse(code = 404, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public ServerIpmiLiveInfo serverIpmiLivePost(@PathParam("id") Integer id, @Multipart(value = "ip")  String ip, @Multipart(value = "asset", required = false)  Integer asset);

    /**
     * Get IPMI Power Status
     *
     * Returns the chassis power status from ipmi.
     *
     */
    @GET
    @Path("/servers/{id}/ipmi_power")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get IPMI Power Status", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
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
    @ApiOperation(value = "Server IPMI Power", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 400, message = "The specified resource was not found", response = GetAccountInfo401Response.class) })
    public TextResponse serverIpmiPowerPost(@PathParam("id") Integer id, @Multipart(value = "action")  String action, @Multipart(value = "asset", required = false)  Integer asset);

    /**
     * Cancel Server Service
     *
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/servers/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Server Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Servers Cancel", response = ServersCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ServersCancel200Response serversCancel(@PathParam("id") Integer id);

    /**
     * Update Server Order
     *
     * Updates settings on a dedicated server order.
     *
     */
    @POST
    @Path("/servers/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Server Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateServerInfo(@PathParam("id") String id);
}
