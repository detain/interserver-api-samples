import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for WebhostingApi
void main() {
  var instance = new WebhostingApi();

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
    //Future<InlineResponse20024> getWebsiteBuyIp(int id) async
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
    //Future<InlineResponse20025> postWebsiteBuyIp(IdBuyIpBody body, Map<String, String> ips, int id) async
    test('test postWebsiteBuyIp', () async {
      // TODO
    });

    // Request Website Migration
    //
    // Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
    //
    //Future<InlineResponse20026> postWebsiteMigration(IdMigrationBody body, String custPortal, String regEmail, String password, String ctrlPanel, String ftpUsername, String ftpPassword, String siteBusyMig, String splReqMig, String domainReg, String dataMig, String domainRegPortal, String domainRegEmail, String domainRegPassword, int id) async
    test('test postWebsiteMigration', () async {
      // TODO
    });

    // Update Website Reverse DNS
    //
    // Updates the reverse DNS entries for each of the IP addresses for the website.
    //
    //Future<TextResponse> postWebsitesReverseDns(ReverseDnsEntries body, Map ips, int id) async
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
    //Future<InlineResponse20023> webhostingCancel(String id) async
    test('test webhostingCancel', () async {
      // TODO
    });

  });
}
