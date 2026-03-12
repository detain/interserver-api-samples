import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for SSLCertificatesApi
void main() {
  final instance = Openapi().getSSLCertificatesApi();

  group(SSLCertificatesApi, () {
    // Place SSL Cert Order
    //
    // Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
    //
    //Future addSsl() async
    test('test addSsl', () async {
      // TODO
    });

    // SSL Cert Ordering Information
    //
    // Retrieves available SSL certificate types and pricing for ordering.
    //
    //Future getNewSsl() async
    test('test getNewSsl', () async {
      // TODO
    });

    // Get SSL Cert Info
    //
    // Returns detailed information about a specific SSL certificate including its domain and expiration.
    //
    //Future getSslInfo(int id) async
    test('test getSslInfo', () async {
      // TODO
    });

    // Get SSL Cert Invoices
    //
    // Returns the billing invoices associated with this SSL certificate.
    //
    //Future<ChargeInvoiceRows> getSslInvoices(int id) async
    test('test getSslInvoices', () async {
      // TODO
    });

    // List SSL Certs
    //
    // Returns all SSL certificate services on the account with their current status.
    //
    //Future getSslList() async
    test('test getSslList', () async {
      // TODO
    });

    // Resend SSL Welcome Email
    //
    // Resends the welcome email for the order.
    //
    //Future<SuccessTextResponse> getSslWelcomeEmail(int id) async
    test('test getSslWelcomeEmail', () async {
      // TODO
    });

    // Validate SSL Cert Order
    //
    // Validates an SSL certificate order before placing it.
    //
    //Future putSsl() async
    test('test putSsl', () async {
      // TODO
    });

    // Cancel SSL Certificate Service
    //
    // Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
    //
    //Future<SslCancel200Response> sslCancel(int id) async
    test('test sslCancel', () async {
      // TODO
    });

    // Update SSL Cert Order
    //
    // Updates settings on an SSL certificate order.
    //
    //Future updateSslInfo(String id) async
    test('test updateSslInfo', () async {
      // TODO
    });

  });
}
