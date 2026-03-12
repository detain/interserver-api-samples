import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for BackupsApi
void main() {
  var instance = new BackupsApi();

  group('tests for BackupsApi', () {
    // Place Backup Order
    //
    // Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
    //
    //Future<BackupOrderPostResponse> addBackup(bool validateOnly, int serviceType, String coupon, BackupOrderPutRequest body) async
    test('test addBackup', () async {
      // TODO
    });

    // Cancel Backup Service
    //
    // Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
    //
    //Future<InlineResponse2001> cancelBackup(int id) async
    test('test cancelBackup', () async {
      // TODO
    });

    // Get Backup Service Details
    //
    // Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
    //
    //Future<Backup> getBackupInfo(int id) async
    test('test getBackupInfo', () async {
      // TODO
    });

    // Get Backup Order Invoices
    //
    // Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
    //
    //Future<ChargeInvoiceRows> getBackupInvoices(int id) async
    test('test getBackupInvoices', () async {
      // TODO
    });

    // Get Backup Storage Panel Login
    //
    // Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
    //
    //Future<BackupLoginResponse> getBackupLogin(int id) async
    test('test getBackupLogin', () async {
      // TODO
    });

    // List Backup Services
    //
    // Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
    //
    //Future<List<BackupRow>> getBackupsList() async
    test('test getBackupsList', () async {
      // TODO
    });

    // Resend Backup Welcome Email
    //
    // Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
    //
    //Future<SuccessTextResponse> getBackupsWelcomeEmail(int id) async
    test('test getBackupsWelcomeEmail', () async {
      // TODO
    });

    // Get Backup Order Form Data
    //
    // Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
    //
    //Future<BackupsOrder> getNewBackup() async
    test('test getNewBackup', () async {
      // TODO
    });

    // Update Backup Information
    //
    // Updates backup storage service metadata, such as stored credentials or settings for the order.
    //
    //Future updateBackupInfo(int id) async
    test('test updateBackupInfo', () async {
      // TODO
    });

    // Validate Backup Order
    //
    // Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
    //
    //Future<BackupOrderPutResponse> validateBackupOrder(bool validateOnly, int serviceType, String coupon, BackupOrderPutRequest body) async
    test('test validateBackupOrder', () async {
      // TODO
    });

  });
}
