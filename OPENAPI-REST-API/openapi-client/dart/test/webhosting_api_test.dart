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


/// tests for WebhostingApi
void main() {
  // final instance = WebhostingApi();

  group('tests for WebhostingApi', () {
    // Place Website Order
    //
    // Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
    //
    //Future<ServiceOrderPostResponse> addWebsite() async
    test('test addWebsite', () async {
      // TODO
    });

    // Website Ordering Information
    //
    // Retrieves available webhosting plans and pricing for ordering.
    //
    //Future<WebsitesOrder> getNewWebsite() async
    test('test getNewWebsite', () async {
      // TODO
    });

    // Get Website IP Information
    //
    // Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
    //
    //Future<GetWebsiteBuyIp200Response> getWebsiteBuyIp(int id) async
    test('test getWebsiteBuyIp', () async {
      // TODO
    });

    // Get Website Order
    //
    // Returns detailed information about a specific webhosting order including its domain, plan, and status.
    //
    //Future<Website> getWebsiteInfo(int id) async
    test('test getWebsiteInfo', () async {
      // TODO
    });

    // Get Website Invoices
    //
    // Returns the billing invoices associated with this webhosting service.
    //
    //Future<ChargeInvoiceRows> getWebsiteInvoices(int id) async
    test('test getWebsiteInvoices', () async {
      // TODO
    });

    // Get Website Listing
    //
    // Gets a listing of your webhosting orders and service details.
    //
    //Future<List<WebsiteRow>> getWebsiteList() async
    test('test getWebsiteList', () async {
      // TODO
    });

    // Get Website Backups
    //
    // Gets a list of the backups that exist for a website and their sizes.
    //
    //Future<WebsiteBackups> getWebsitesBackups(int id) async
    test('test getWebsitesBackups', () async {
      // TODO
    });

    // Hosting Panel Auto Login
    //
    // Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
    //
    //Future<WebsiteLoginResponse> getWebsitesLogin(int id) async
    test('test getWebsitesLogin', () async {
      // TODO
    });

    // Resend Website Welcome Email
    //
    // Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
    //
    //Future<SuccessTextResponse> getWebsitesWelcomeEmail(int id) async
    test('test getWebsitesWelcomeEmail', () async {
      // TODO
    });

    // Get Website Reverse DNS
    //
    // Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
    //
    //Future<ReverseDnsEntries> gettWebsiteReverseDns(int id) async
    test('test gettWebsiteReverseDns', () async {
      // TODO
    });

    // Update Website IP DNS
    //
    // Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
    //
    //Future<PostWebsiteBuyIp200Response> postWebsiteBuyIp(int id, PostWebsiteBuyIpRequest postWebsiteBuyIpRequest) async
    test('test postWebsiteBuyIp', () async {
      // TODO
    });

    // Request Website Migration
    //
    // Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
    //
    //Future<PostWebsiteMigration200Response> postWebsiteMigration(int id, PostWebsiteMigrationRequest postWebsiteMigrationRequest) async
    test('test postWebsiteMigration', () async {
      // TODO
    });

    // Update Website Reverse DNS
    //
    // Updates the reverse DNS entries for each of the IP addresses for the website.
    //
    //Future<TextResponse> postWebsitesReverseDns(int id, ReverseDnsEntries reverseDnsEntries) async
    test('test postWebsitesReverseDns', () async {
      // TODO
    });

    // Validate Webhosting Order
    //
    // Validates a webhosting order before placing it.
    //
    //Future putWebsites() async
    test('test putWebsites', () async {
      // TODO
    });

    // Update Website Order
    //
    // Updates settings on a webhosting order.
    //
    //Future<SuccessTextResponse> updateWebsiteInfo(String id) async
    test('test updateWebsiteInfo', () async {
      // TODO
    });

    // Cancel Website
    //
    // Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
    //
    //Future<WebhostingCancel200Response> webhostingCancel(String id) async
    test('test webhostingCancel', () async {
      // TODO
    });

  });
}
