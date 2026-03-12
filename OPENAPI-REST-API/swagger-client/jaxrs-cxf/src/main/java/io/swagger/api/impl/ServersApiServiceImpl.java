package io.swagger.api.impl;

import io.swagger.api.*;
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
import org.apache.cxf.jaxrs.model.wadl.Description;
import org.apache.cxf.jaxrs.model.wadl.DocTarget;

import org.apache.cxf.jaxrs.ext.multipart.*;


/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
public class ServersApiServiceImpl implements ServersApi {
    /**
     * Place Server Order
     *
     * Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
     *
     */
    public void addServer() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Buy Now Server Options
     *
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
     *
     */
    public InlineResponse20026 buyItNowServerOrder() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     *
     */
    public BuyItNowList getMPServers() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Server Ordering Information
     *
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     *
     */
    public ServerOrder getNewServer() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Server Order
     *
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     *
     */
    public Server getServerInfo(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get Server Invoices
     *
     * Returns the billing invoices associated with this dedicated server.
     *
     */
    public ChargeInvoiceRows getServerInvoices(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List Servers
     *
     * Returns all dedicated server services on the account with their current status and configuration.
     *
     */
    public List<ServerRow> getServerList() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    public ReverseDnsEntries getServerReverseDns(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Resend Server Welcome Email
     *
     * Resends the welcome email for the order.
     *
     */
    public SuccessTextResponse getServersWelcomeEmail(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Place Buy Now Server Order
     *
     * Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
     *
     */
    public ServersBuyNowResponse placeBuyNowServer(OrderBuyNowServerBody body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    public TextResponse postServerReverseDns(ReverseDnsEntries body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
     *
     */
    public TextResponse postServerReverseDns(Map<String, Object> ips, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Validate Server Order
     *
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     *
     */
    public void putServers() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Server IPMI Live Information
     *
     * Returns the current IPMI live connection information for the server.
     *
     */
    public ServerIpmiLiveInfo serverIpmiLiveGet(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
     *
     */
    public ServerIpmiLiveInfo serverIpmiLivePost(Integer asset, String ip, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
     *
     */
    public ServerIpmiLiveInfo serverIpmiLivePost(ServerIpmiLiveRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get IPMI Power Status
     *
     * Returns the chassis power status from ipmi.
     *
     */
    public TextResponse serverIpmiPowerGet(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     *
     */
    public TextResponse serverIpmiPowerPost(Integer asset, String action, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     *
     */
    public TextResponse serverIpmiPowerPost(ServerIpmiPowerRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Cancel Server Service
     *
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    public InlineResponse20019 serversCancel(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Server Order
     *
     * Updates settings on a dedicated server order.
     *
     */
    public void updateServerInfo(String id) {
        // TODO: Implement...
        
        
    }
    
}

