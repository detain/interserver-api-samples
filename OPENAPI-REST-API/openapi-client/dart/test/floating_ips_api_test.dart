//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

import 'package:openapi/api.dart';
import 'package:test/test.dart';


/// tests for FloatingIPsApi
void main() {
  // final instance = FloatingIPsApi();

  group('tests for FloatingIPsApi', () {
    // Place Floating IP Order
    //
    // Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
    //
    //Future addFloatingIp() async
    test('test addFloatingIp', () async {
      // TODO
    });

    // Cancel Floating IP
    //
    // Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
    //
    //Future<FloatingIpsCancel200Response> floatingIpsCancel(int id) async
    test('test floatingIpsCancel', () async {
      // TODO
    });

    // View Floating IP
    //
    // Returns detailed information about a specific Floating IP service including its current target IP assignment.
    //
    //Future getFloatingIpInfo(int id) async
    test('test getFloatingIpInfo', () async {
      // TODO
    });

    // Get Floating IP Invoices
    //
    // Returns the billing invoices associated with this Floating IP service.
    //
    //Future<ChargeInvoiceRows> getFloatingIpInvoices(int id) async
    test('test getFloatingIpInvoices', () async {
      // TODO
    });

    // List Floating IPs
    //
    // Returns all Floating IP services on the account with their current status and assignment details.
    //
    //Future getFloatingIpsList() async
    test('test getFloatingIpsList', () async {
      // TODO
    });

    // Resend Floating IPs Welcome Email
    //
    // Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
    //
    //Future<SuccessTextResponse> getFloatingIpsWelcomeEmail(int id) async
    test('test getFloatingIpsWelcomeEmail', () async {
      // TODO
    });

    // Get Floating IP Ordering Information
    //
    // Retrieves available options and pricing for ordering a new Floating IP.
    //
    //Future getNewFloatingIp() async
    test('test getNewFloatingIp', () async {
      // TODO
    });

    // Change Floating IP Target
    //
    // Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
    //
    //Future<SuccessTextResponse> postFloatingIpsChangeIp(int id, String ip) async
    test('test postFloatingIpsChangeIp', () async {
      // TODO
    });

    // Validate Floating IP Order
    //
    // Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
    //
    //Future putFloatingIps() async
    test('test putFloatingIps', () async {
      // TODO
    });

    // Update Floating IP
    //
    // Updates settings on a Floating IP service, such as its label or configuration metadata.
    //
    //Future updateFloatingIpInfo(String id) async
    test('test updateFloatingIpInfo', () async {
      // TODO
    });

  });
}
