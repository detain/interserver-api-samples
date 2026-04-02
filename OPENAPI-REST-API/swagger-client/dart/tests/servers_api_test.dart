import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for ServersApi
void main() {
  var instance = new ServersApi();

  group('tests for ServersApi', () {
    // Place Server Order
    //
    // Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
    //
    //Future<InlineResponse20019> addServer() async
    test('test addServer', () async {
      // TODO
    });

    // Get Buy Now Server Options
    //
    // Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
    //
    //Future<InlineResponse20027> buyItNowServerOrder() async
    test('test buyItNowServerOrder', () async {
      // TODO
    });

    // List Marketplace Servers
    //
    // Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
    //
    //Future<BuyItNowList> getMPServers() async
    test('test getMPServers', () async {
      // TODO
    });

    // Server Ordering Information
    //
    // Retrieves available server configurations and pricing for ordering a new dedicated server.
    //
    //Future<ServerOrder> getNewServer() async
    test('test getNewServer', () async {
      // TODO
    });

    // Get Server Order
    //
    // Returns detailed information about a specific server including its hardware configuration, IPs, and status.
    //
    //Future<Server> getServerInfo(int id) async
    test('test getServerInfo', () async {
      // TODO
    });

    // Get Server Invoices
    //
    // Returns the billing invoices associated with this dedicated server.
    //
    //Future<ChargeInvoiceRows> getServerInvoices(int id) async
    test('test getServerInvoices', () async {
      // TODO
    });

    // List Servers
    //
    // Returns all dedicated server services on the account with their current status and configuration.
    //
    //Future<List<ServerRow>> getServerList() async
    test('test getServerList', () async {
      // TODO
    });

    // Reverse DNS Info
    //
    // Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
    //
    //Future<ReverseDnsEntries> getServerReverseDns(int id) async
    test('test getServerReverseDns', () async {
      // TODO
    });

    // Resend Server Welcome Email
    //
    // Resends the welcome email for the order.
    //
    //Future<SuccessTextResponse> getServersWelcomeEmail(int id) async
    test('test getServersWelcomeEmail', () async {
      // TODO
    });

    // Place Buy Now Server Order
    //
    // Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
    //
    //Future<ServersBuyNowResponse> placeBuyNowServer({ OrderBuyNowServerBody body }) async
    test('test placeBuyNowServer', () async {
      // TODO
    });

    // Update Reverse DNS
    //
    // Updates the reverse DNS (PTR record) entries for the server's IP addresses.
    //
    //Future<TextResponse> postServerReverseDns(ReverseDnsEntries body, Map ips, int id) async
    test('test postServerReverseDns', () async {
      // TODO
    });

    // Validate Server Order
    //
    // Validates a server order before placing it. Use this to check for errors before committing to a purchase.
    //
    //Future putServers() async
    test('test putServers', () async {
      // TODO
    });

    // Server IPMI Live Information
    //
    // Returns the current IPMI live connection information for the server.
    //
    //Future<ServerIpmiLiveInfo> serverIpmiLiveGet(int id) async
    test('test serverIpmiLiveGet', () async {
      // TODO
    });

    // Server IPMI Live Setup
    //
    // Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
    //
    //Future<ServerIpmiLiveInfo> serverIpmiLivePost(int asset, String ip, ServerIpmiLiveRequest body, int id) async
    test('test serverIpmiLivePost', () async {
      // TODO
    });

    // Get IPMI Power Status
    //
    // Returns the chassis power status from ipmi.
    //
    //Future<TextResponse> serverIpmiPowerGet(int id) async
    test('test serverIpmiPowerGet', () async {
      // TODO
    });

    // Server IPMI Power
    //
    // Uses the IPMI interface to set the Power status on the server.
    //
    //Future<TextResponse> serverIpmiPowerPost(int asset, String action, ServerIpmiPowerRequest body, int id) async
    test('test serverIpmiPowerPost', () async {
      // TODO
    });

    // Cancel Server Service
    //
    // Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    //
    //Future<InlineResponse20020> serversCancel(int id) async
    test('test serversCancel', () async {
      // TODO
    });

    // Update Server Order
    //
    // Updates settings on a dedicated server order.
    //
    //Future<SuccessTextResponse> updateServerInfo(String id) async
    test('test updateServerInfo', () async {
      // TODO
    });

  });
}
