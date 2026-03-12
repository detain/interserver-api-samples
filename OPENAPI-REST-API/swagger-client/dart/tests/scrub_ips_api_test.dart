import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for ScrubIpsApi
void main() {
  var instance = new ScrubIpsApi();

  group('tests for ScrubIpsApi', () {
    // Cancel Scrub IP Service
    //
    // Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
    //
    //Future<InlineResponse20013> cancelScrubIp(int id) async
    test('test cancelScrubIp', () async {
      // TODO
    });

    // Create Traffic Filter
    //
    // Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
    //
    //Future<InlineResponse2011> createFilter(CreateFilter body, int id) async
    test('test createFilter', () async {
      // TODO
    });

    // Create Geo Firewall Rule
    //
    // Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
    //
    //Future<InlineResponse201> createGeoRule(CreateGeoFirewallRule body, int id) async
    test('test createGeoRule', () async {
      // TODO
    });

    // Create Firewall Rule
    //
    // Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
    //
    //Future<InlineResponse201> createRule(CreateFirewallRule body, int id) async
    test('test createRule', () async {
      // TODO
    });

    // Delete Traffic Filter
    //
    // Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
    //
    //Future<InlineResponse20017> deleteFilter(CreateFilter body, int id) async
    test('test deleteFilter', () async {
      // TODO
    });

    // Disable Scrub Protection
    //
    // Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
    //
    //Future<InlineResponse20015> disableScrub(int id) async
    test('test disableScrub', () async {
      // TODO
    });

    // Enable Scrub Protection
    //
    // Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
    //
    //Future<InlineResponse20014> enableScrub(int id) async
    test('test enableScrub', () async {
      // TODO
    });

    // Get Scrub IP Ordering Information
    //
    // Returns the available Scrub IP service plans and pricing information needed to build an order form.
    //
    //Future<InlineResponse20018> getOrderDetail() async
    test('test getOrderDetail', () async {
      // TODO
    });

    // Get Scrub IP Details
    //
    // Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
    //
    //Future<InlineResponse20012> getScrubIpDetails(int id) async
    test('test getScrubIpDetails', () async {
      // TODO
    });

    // List Scrub Filter Types
    //
    // Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
    //
    //Future<ScrubIpFilterTypes> getScrubIpFilterTypes() async
    test('test getScrubIpFilterTypes', () async {
      // TODO
    });

    // Get ScrubIp Invoices
    //
    // Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
    //
    //Future<ChargeInvoiceRows> getScrubIpInvoices(int id) async
    test('test getScrubIpInvoices', () async {
      // TODO
    });

    // Get Scrub IP Logs
    //
    // Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
    //
    //Future<List<ScrubIpsLogRowSchema>> getScrubIpLogs(String id) async
    test('test getScrubIpLogs', () async {
      // TODO
    });

    // List Scrub IP Services
    //
    // Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
    //
    //Future<List<ScrubIpsRowSchema>> getScrubIpsList() async
    test('test getScrubIpsList', () async {
      // TODO
    });

    // Place Scrub IP Order
    //
    // Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
    //
    //Future<InlineResponse2012> placeScrubOrder(ScrubIpPlaceOrder body) async
    test('test placeScrubOrder', () async {
      // TODO
    });

    // Delete Geo Firewall Rule
    //
    // Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
    //
    //Future<InlineResponse20016> scrubIpsDeleteGeoRule(Delete Geo Firewall Rule body, int id) async
    test('test scrubIpsDeleteGeoRule', () async {
      // TODO
    });

    // Delete Firewall Rule
    //
    // Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
    //
    //Future<InlineResponse20016> scrubIpsDeleteRule(Delete Firewall Rule body, int id) async
    test('test scrubIpsDeleteRule', () async {
      // TODO
    });

  });
}
