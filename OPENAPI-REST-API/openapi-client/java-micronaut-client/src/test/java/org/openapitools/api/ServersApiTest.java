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
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for ServersApi
 */
@MicronautTest
public class ServersApiTest {

    @Inject
    ServersApi api;

    
    /**
     * Place Server Order
     *
     * Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addServerTest() {
        // given

        // when
        api.addServer().block();

        // then
        // TODO implement the addServerTest()
    }

    
    /**
     * Get Buy Now Server Options
     *
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void buyItNowServerOrderTest() {
        // given

        // when
        BuyItNowServerOrder200Response body = api.buyItNowServerOrder().block();

        // then
        // TODO implement the buyItNowServerOrderTest()
    }

    
    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMPServersTest() {
        // given

        // when
        BuyItNowList body = api.getMPServers().block();

        // then
        // TODO implement the getMPServersTest()
    }

    
    /**
     * Server Ordering Information
     *
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewServerTest() {
        // given

        // when
        ServerOrder body = api.getNewServer().block();

        // then
        // TODO implement the getNewServerTest()
    }

    
    /**
     * Get Server Order
     *
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     */
    @Test
    @Disabled("Not Implemented")
    public void getServerInfoTest() {
        // given
        Integer id = 56;

        // when
        Server body = api.getServerInfo(id).block();

        // then
        // TODO implement the getServerInfoTest()
    }

    
    /**
     * Get Server Invoices
     *
     * Returns the billing invoices associated with this dedicated server.
     */
    @Test
    @Disabled("Not Implemented")
    public void getServerInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getServerInvoices(id).block();

        // then
        // TODO implement the getServerInvoicesTest()
    }

    
    /**
     * List Servers
     *
     * Returns all dedicated server services on the account with their current status and configuration.
     */
    @Test
    @Disabled("Not Implemented")
    public void getServerListTest() {
        // given

        // when
        List<ServerRow> body = api.getServerList().block();

        // then
        // TODO implement the getServerListTest()
    }

    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void getServerReverseDnsTest() {
        // given
        Integer id = 56;

        // when
        ReverseDnsEntries body = api.getServerReverseDns(id).block();

        // then
        // TODO implement the getServerReverseDnsTest()
    }

    
    /**
     * Resend Server Welcome Email
     *
     * Resends the welcome email for the order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getServersWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getServersWelcomeEmail(id).block();

        // then
        // TODO implement the getServersWelcomeEmailTest()
    }

    
    /**
     * Place Buy Now Server Order
     *
     * Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
     */
    @Test
    @Disabled("Not Implemented")
    public void placeBuyNowServerTest() {
        // given
        PlaceBuyNowServerRequest placeBuyNowServerRequest = new PlaceBuyNowServerRequest();

        // when
        ServersBuyNowResponse body = api.placeBuyNowServer(placeBuyNowServerRequest).block();

        // then
        // TODO implement the placeBuyNowServerTest()
    }

    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void postServerReverseDnsTest() {
        // given
        Integer id = 56;
        ReverseDnsEntries reverseDnsEntries = new ReverseDnsEntries();

        // when
        TextResponse body = api.postServerReverseDns(id, reverseDnsEntries).block();

        // then
        // TODO implement the postServerReverseDnsTest()
    }

    
    /**
     * Validate Server Order
     *
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     */
    @Test
    @Disabled("Not Implemented")
    public void putServersTest() {
        // given

        // when
        api.putServers().block();

        // then
        // TODO implement the putServersTest()
    }

    
    /**
     * Server IPMI Live Information
     *
     * Returns the current IPMI live connection information for the server.
     */
    @Test
    @Disabled("Not Implemented")
    public void serverIpmiLiveGetTest() {
        // given
        Integer id = 56;

        // when
        ServerIpmiLiveInfo body = api.serverIpmiLiveGet(id).block();

        // then
        // TODO implement the serverIpmiLiveGetTest()
    }

    
    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.
     */
    @Test
    @Disabled("Not Implemented")
    public void serverIpmiLivePostTest() {
        // given
        Integer id = 56;
        String ip = "example";
        Integer asset = 56;

        // when
        ServerIpmiLiveInfo body = api.serverIpmiLivePost(id, ip, asset).block();

        // then
        // TODO implement the serverIpmiLivePostTest()
    }

    
    /**
     * Get IPMI Power Status
     *
     * Returns the chassis power status from ipmi.
     */
    @Test
    @Disabled("Not Implemented")
    public void serverIpmiPowerGetTest() {
        // given
        Integer id = 56;

        // when
        TextResponse body = api.serverIpmiPowerGet(id).block();

        // then
        // TODO implement the serverIpmiPowerGetTest()
    }

    
    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     */
    @Test
    @Disabled("Not Implemented")
    public void serverIpmiPowerPostTest() {
        // given
        Integer id = 56;
        String action = "example";
        Integer asset = 56;

        // when
        TextResponse body = api.serverIpmiPowerPost(id, action, asset).block();

        // then
        // TODO implement the serverIpmiPowerPostTest()
    }

    
    /**
     * Cancel Server Service
     *
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @Test
    @Disabled("Not Implemented")
    public void serversCancelTest() {
        // given
        Integer id = 56;

        // when
        ServersCancel200Response body = api.serversCancel(id).block();

        // then
        // TODO implement the serversCancelTest()
    }

    
    /**
     * Update Server Order
     *
     * Updates settings on a dedicated server order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateServerInfoTest() {
        // given
        String id = "example";

        // when
        api.updateServerInfo(id).block();

        // then
        // TODO implement the updateServerInfoTest()
    }

    
}
