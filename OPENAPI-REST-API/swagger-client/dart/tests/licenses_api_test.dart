import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for LicensesApi
void main() {
  var instance = new LicensesApi();

  group('tests for LicensesApi', () {
    // Place License Order
    //
    // Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
    //
    //Future<ServiceOrderPostResponse> addLicense() async
    test('test addLicense', () async {
      // TODO
    });

    // Get License
    //
    // Returns detailed information about a specific license including its type, IP assignment, and status.
    //
    //Future<License> getLicenseInfo(int id) async
    test('test getLicenseInfo', () async {
      // TODO
    });

    // Get License Invoices
    //
    // Returns the billing invoices associated with this license service.
    //
    //Future<ChargeInvoiceRows> getLicenseInvoices(int id) async
    test('test getLicenseInvoices', () async {
      // TODO
    });

    // List Licenses
    //
    // Returns all software license services on the account with their current status and IP assignments.
    //
    //Future<List<LicenseRow>> getLicenseList() async
    test('test getLicenseList', () async {
      // TODO
    });

    // Get License Order Information for Category
    //
    // Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
    //
    //Future getLicenseOrderCatTagInfo(String catTag) async
    test('test getLicenseOrderCatTagInfo', () async {
      // TODO
    });

    // Resend License Welcome Email
    //
    // Resends the welcome email for the license service. The email contains the license key and activation instructions.
    //
    //Future<SuccessTextResponse> getLicensesWelcomeEmail(int id) async
    test('test getLicensesWelcomeEmail', () async {
      // TODO
    });

    // Get License Order Information
    //
    // Retrieves available license types, categories, and pricing for ordering a new license.
    //
    //Future<LicensesOrder> getNewLicense() async
    test('test getNewLicense', () async {
      // TODO
    });

    // Cancel License
    //
    // Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
    //
    //Future<InlineResponse2004> licensesCancel(int id) async
    test('test licensesCancel', () async {
      // TODO
    });

    // Change License IP
    //
    // Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
    //
    //Future<SuccessTextResponse> postLicenseChangeIp(IpObject body, String ip, int id) async
    test('test postLicenseChangeIp', () async {
      // TODO
    });

    // Validate License Order
    //
    // Validates a license order before placing it. Use this to check for errors before committing to a purchase.
    //
    //Future putLicenses() async
    test('test putLicenses', () async {
      // TODO
    });

    // Update License
    //
    // Updates settings on a license service such as its assigned IP.
    //
    //Future<SuccessTextResponse> updateLicenseInfo(String id) async
    test('test updateLicenseInfo', () async {
      // TODO
    });

  });
}
