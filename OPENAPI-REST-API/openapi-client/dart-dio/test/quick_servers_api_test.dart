import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for QuickServersApi
void main() {
  final instance = Openapi().getQuickServersApi();

  group(QuickServersApi, () {
    // Place QuickServer Order
    //
    // Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
    //
    //Future addQs() async
    test('test addQs', () async {
      // TODO
    });

    // Delete QuickServer Backup
    //
    // Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
    //
    //Future<SuccessTextResponse> deleteQsBackup(int id, String file, { String all }) async
    test('test deleteQsBackup', () async {
      // TODO
    });

    // Block QuickServer SMTP
    //
    // Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
    //
    //Future<QueueResponse> doQsBlockSmtp(int id) async
    test('test doQsBlockSmtp', () async {
      // TODO
    });

    // Disable CD Drive
    //
    // Disables the virtual CD drive for the QuickServer.
    //
    //Future<QueueResponse> doQsDisableCd(int id) async
    test('test doQsDisableCd', () async {
      // TODO
    });

    // Disable Quotas
    //
    // Disables disk quota enforcement for the QuickServer.
    //
    //Future<QueueResponse> doQsDisableQuota(int id) async
    test('test doQsDisableQuota', () async {
      // TODO
    });

    // Eject CD Drive
    //
    // Ejects the virtual CD from the QuickServer's CD drive.
    //
    //Future<QueueResponse> doQsEjectCd(int id) async
    test('test doQsEjectCd', () async {
      // TODO
    });

    // Enable Quotas
    //
    // Enables disk quota enforcement for the QuickServer.
    //
    //Future<QueueResponse> doQsEnableQuota(int id) async
    test('test doQsEnableQuota', () async {
      // TODO
    });

    // Restart QuickServer
    //
    // Restarts the QuickServer. The server will be shut down and started again.
    //
    //Future<QueueResponse> doQsRestart(int id) async
    test('test doQsRestart', () async {
      // TODO
    });

    // Start QuickServer
    //
    // Powers on the QuickServer.
    //
    //Future<QueueResponse> doQsStart(int id) async
    test('test doQsStart', () async {
      // TODO
    });

    // Stop QuickServer
    //
    // Powers off the QuickServer.
    //
    //Future<QueueResponse> doQsStop(int id) async
    test('test doQsStop', () async {
      // TODO
    });

    // Download QuickServer Backup
    //
    // Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
    //
    //Future<DownloadQsBackup200Response> downloadQsBackup(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String all }) async
    test('test downloadQsBackup', () async {
      // TODO
    });

    // Get QuickServer Ordering Information
    //
    // Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
    //
    //Future<QuickserverOrder> getNewQs() async
    test('test getNewQs', () async {
      // TODO
    });

    // List QuickServer Backups
    //
    // Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
    //
    //Future<VpsBackupRows> getQsBackups(int id, { String all }) async
    test('test getQsBackups', () async {
      // TODO
    });

    // Get QuickServer Hostname
    //
    // Retrieves the current hostname and any validation requirements for changing it.
    //
    //Future getQsChangeHostname(int id) async
    test('test getQsChangeHostname', () async {
      // TODO
    });

    // Get Change Root Password Info
    //
    // Retrieves instructions or metadata needed to reset the root password.
    //
    //Future getQsChangeRootPassword(int id) async
    test('test getQsChangeRootPassword', () async {
      // TODO
    });

    // Get Timezone Info
    //
    // Returns the list of available timezones that can be set on the QuickServer.
    //
    //Future<BuiltList<String>> getQsChangeTimezone(int id) async
    test('test getQsChangeTimezone', () async {
      // TODO
    });

    // Webuzo Change Pass Info
    //
    // Retrieves instructions or metadata for changing the Webuzo control panel password.
    //
    //Future getQsChangeWebuzoPassword(int id) async
    test('test getQsChangeWebuzoPassword', () async {
      // TODO
    });

    // Get QuickServer Order
    //
    // Returns detailed QuickServer information, including credentials, IPs, and available client actions.
    //
    //Future<Quickserver> getQsInfo(int id) async
    test('test getQsInfo', () async {
      // TODO
    });

    // Insert CD Information
    //
    // Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
    //
    //Future getQsInsertCd(int id) async
    test('test getQsInsertCd', () async {
      // TODO
    });

    // Get QuickServer Invoices
    //
    // Returns the billing invoices associated with this QuickServer.
    //
    //Future<ChargeInvoiceRows> getQsInvoices(int id) async
    test('test getQsInvoices', () async {
      // TODO
    });

    // List QuickServers
    //
    // Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
    //
    //Future<BuiltList<QuickserverRow>> getQsList() async
    test('test getQsList', () async {
      // TODO
    });

    // QuickServer Reinstall OS Options
    //
    // Returns the list of available operating system templates for reinstalling the QuickServer.
    //
    //Future<VpsTemplatesList> getQsReinstallOs(int id) async
    test('test getQsReinstallOs', () async {
      // TODO
    });

    // Reset QuickServer Password Info
    //
    // Returns information needed before resetting the QuickServer's root password.
    //
    //Future getQsResetPassword(int id) async
    test('test getQsResetPassword', () async {
      // TODO
    });

    // Reverse DNS Info
    //
    // Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
    //
    //Future<ReverseDnsEntries> getQsReverseDns(int id) async
    test('test getQsReverseDns', () async {
      // TODO
    });

    // VNC Setup Info
    //
    // Returns the current VNC connection information for the QuickServer.
    //
    //Future getQsSetupVnc(int id) async
    test('test getQsSetupVnc', () async {
      // TODO
    });

    // Get Traffic Usage
    //
    // Returns bandwidth traffic usage data for the QuickServer.
    //
    //Future getQsTrafficUsage(int id) async
    test('test getQsTrafficUsage', () async {
      // TODO
    });

    // Get View Desktop Info
    //
    // Returns remote desktop connection information for the QuickServer.
    //
    //Future getQsViewDesktop(int id) async
    test('test getQsViewDesktop', () async {
      // TODO
    });

    // Resend QuickServer Welcome Email
    //
    // Resends the welcome email containing connection details and credentials for the QuickServer order.
    //
    //Future<TextResponse> getQsWelcomeEmail(String id) async
    test('test getQsWelcomeEmail', () async {
      // TODO
    });

    // Create QuickServer Backup
    //
    // Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
    //
    //Future<QueueResponse> postQsBackup(int id) async
    test('test postQsBackup', () async {
      // TODO
    });

    // Update QuickServer Hostname
    //
    // Submits a hostname change request for the QuickServer.
    //
    //Future<QueueResponse> postQsChangeHostname(int id) async
    test('test postQsChangeHostname', () async {
      // TODO
    });

    // Change Root Password
    //
    // Triggers a root password reset for the QuickServer.
    //
    //Future<QueueResponse> postQsChangeRootPassword(int id) async
    test('test postQsChangeRootPassword', () async {
      // TODO
    });

    // Change QuickServer Timezone
    //
    // Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
    //
    //Future<QueueResponse> postQsChangeTimezone(int id, String timezone) async
    test('test postQsChangeTimezone', () async {
      // TODO
    });

    // Change Webuzo Password
    //
    // Resets the Webuzo control panel password for the QuickServer.
    //
    //Future<QueueResponse> postQsChangeWebuzoPassword(int id) async
    test('test postQsChangeWebuzoPassword', () async {
      // TODO
    });

    // Insert CD in QuickServer
    //
    // Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
    //
    //Future<QueueResponse> postQsInsertCd(int id) async
    test('test postQsInsertCd', () async {
      // TODO
    });

    // Reinstall QuickServer OS
    //
    // Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
    //
    //Future<QueueResponse> postQsReinstallOs(int id) async
    test('test postQsReinstallOs', () async {
      // TODO
    });

    // Reset QuickServer Password
    //
    // Resets the root password on the QuickServer to a new randomly generated password.
    //
    //Future<QueueResponse> postQsResetPassword(int id) async
    test('test postQsResetPassword', () async {
      // TODO
    });

    // Update Reverse DNS
    //
    // Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
    //
    //Future<TextResponse> postQsReverseDns(int id, ReverseDnsEntries reverseDnsEntries) async
    test('test postQsReverseDns', () async {
      // TODO
    });

    // Setup VNC
    //
    // Sets up or refreshes the VNC console connection for the QuickServer.
    //
    //Future<QueueResponse> postQsSetupVnc(int id) async
    test('test postQsSetupVnc', () async {
      // TODO
    });

    // Search Traffic Usage
    //
    // Searches and filters the QuickServer's bandwidth traffic usage data by date range.
    //
    //Future postQsTrafficUsage(int id) async
    test('test postQsTrafficUsage', () async {
      // TODO
    });

    // Update View Desktop
    //
    // Updates or refreshes the remote desktop session for the QuickServer.
    //
    //Future postQsViewDesktop(int id) async
    test('test postQsViewDesktop', () async {
      // TODO
    });

    // Restore QuickServer from Backup
    //
    // Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
    //
    //Future<QueueResponse> postQuickServerRestore(int id, RestoreRequest restoreRequest) async
    test('test postQuickServerRestore', () async {
      // TODO
    });

    // Validate QuickServer Order
    //
    // Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
    //
    //Future putQs() async
    test('test putQs', () async {
      // TODO
    });

    // Cancel QuickServer Order
    //
    // Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    //
    //Future<QuickserversCancel200Response> quickserversCancel(int id) async
    test('test quickserversCancel', () async {
      // TODO
    });

    // Update QuickServer Order
    //
    // Updates QuickServer metadata or stored settings associated with the order.
    //
    //Future updateQsInfo(String id) async
    test('test updateQsInfo', () async {
      // TODO
    });

  });
}
