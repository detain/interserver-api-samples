import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for VPSApi
void main() {
  final instance = Openapi().getVPSApi();

  group(VPSApi, () {
    // Place VPS Order
    //
    // Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
    //
    //Future addVps({ VpsOrderPostRequest vpsOrderPostRequest }) async
    test('test addVps', () async {
      // TODO
    });

    // Delete VPS Backup
    //
    // Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
    //
    //Future<SuccessTextResponse> deleteVpsBackup(int id, String file, { String all }) async
    test('test deleteVpsBackup', () async {
      // TODO
    });

    // Blocks SMTP
    //
    // Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
    //
    //Future<QueueResponse> doVpsBlockSmtp(int id) async
    test('test doVpsBlockSmtp', () async {
      // TODO
    });

    // Disable CD Drive
    //
    // Disables the virtual CD drive on the VPS.
    //
    //Future<QueueResponse> doVpsDisableCd(int id) async
    test('test doVpsDisableCd', () async {
      // TODO
    });

    // Disable Quotas
    //
    // Disables disk quota enforcement on the VPS.
    //
    //Future<QueueResponse> doVpsDisableQuota(int id) async
    test('test doVpsDisableQuota', () async {
      // TODO
    });

    // Eject CD Drive
    //
    // Ejects the virtual CD from the VPS CD drive.
    //
    //Future<QueueResponse> doVpsEjectCd(int id) async
    test('test doVpsEjectCd', () async {
      // TODO
    });

    // Enable Quotas
    //
    // Enables disk quota enforcement on the VPS.
    //
    //Future<QueueResponse> doVpsEnableQuota(int id) async
    test('test doVpsEnableQuota', () async {
      // TODO
    });

    // Restart VPS
    //
    // Restarts the VPS.
    //
    //Future<QueueResponse> doVpsRestart(int id) async
    test('test doVpsRestart', () async {
      // TODO
    });

    // Start VPS
    //
    // Powers on the VPS.
    //
    //Future<QueueResponse> doVpsStart(int id) async
    test('test doVpsStart', () async {
      // TODO
    });

    // Stop VPS
    //
    // Powers off the VPS.
    //
    //Future<QueueResponse> doVpsStop(int id) async
    test('test doVpsStop', () async {
      // TODO
    });

    // Download VPS Backup
    //
    // Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
    //
    //Future<DownloadQsBackup200Response> downloadVpsBackup(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String all }) async
    test('test downloadVpsBackup', () async {
      // TODO
    });

    // VPS Ordering Information
    //
    // Retrieves available VPS configurations, OS templates, and pricing for ordering.
    //
    //Future<VpsOrder> getNewVps() async
    test('test getNewVps', () async {
      // TODO
    });

    // Get VPS Backups List
    //
    // Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
    //
    //Future<VpsBackupRows> getVpsBackups(int id, { String all }) async
    test('test getVpsBackups', () async {
      // TODO
    });

    // HD Space Addon Info
    //
    // Returns available hard drive space addon options and pricing for the VPS.
    //
    //Future getVpsBuyHdSpace(int id) async
    test('test getVpsBuyHdSpace', () async {
      // TODO
    });

    // Additional IP Addon Info
    //
    // Returns available additional IP address options and pricing for the VPS.
    //
    //Future getVpsBuyIp(int id) async
    test('test getVpsBuyIp', () async {
      // TODO
    });

    // Get Timezone Info
    //
    // Returns the list of available timezones that can be set on the VPS.
    //
    //Future<BuiltList<String>> getVpsChangeTimezone(int id) async
    test('test getVpsChangeTimezone', () async {
      // TODO
    });

    // Get VPS Order
    //
    // Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
    //
    //Future<Vps> getVpsInfo(int id) async
    test('test getVpsInfo', () async {
      // TODO
    });

    // Get VPS Invoices
    //
    // Returns the billing invoices associated with this VPS.
    //
    //Future<ChargeInvoiceRows> getVpsInvoices(int id) async
    test('test getVpsInvoices', () async {
      // TODO
    });

    // List VPS Orders
    //
    // Returns all VPS services on the account with their current status and configuration.
    //
    //Future<BuiltList<VpsRow>> getVpsList() async
    test('test getVpsList', () async {
      // TODO
    });

    // VPS Reinstall OS Options
    //
    // Returns the list of available OS templates for reinstalling the VPS.
    //
    //Future<VpsTemplatesList> getVpsReinstallOs(int id) async
    test('test getVpsReinstallOs', () async {
      // TODO
    });

    // Reverse DNS Info
    //
    // Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
    //
    //Future<ReverseDnsEntries> getVpsReverseDns(int id) async
    test('test getVpsReverseDns', () async {
      // TODO
    });

    // VNC Setup Info
    //
    // Returns the current VNC connection information for the VPS.
    //
    //Future getVpsSetupVnc(int id) async
    test('test getVpsSetupVnc', () async {
      // TODO
    });

    // Slice Upgrade Info
    //
    // Returns available slice upgrade options and pricing for the VPS.
    //
    //Future getVpsSlices(int id) async
    test('test getVpsSlices', () async {
      // TODO
    });

    // Get Traffic Usage
    //
    // Returns bandwidth traffic usage data for the VPS.
    //
    //Future<VpsTrafficResponse> getVpsTrafficUsage(int id) async
    test('test getVpsTrafficUsage', () async {
      // TODO
    });

    // Get View Desktop Info
    //
    // Returns remote desktop connection information for the VPS.
    //
    //Future getVpsViewDesktop(int id) async
    test('test getVpsViewDesktop', () async {
      // TODO
    });

    // Resend VPS Welcome Email
    //
    // Resends the welcome email containing connection details and credentials for the VPS order.
    //
    //Future<SuccessTextResponse> getVpsWelcomeEmail(String id) async
    test('test getVpsWelcomeEmail', () async {
      // TODO
    });

    // Start a VPS Backup
    //
    // Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
    //
    //Future<QueueResponse> postVpsBackup(int id) async
    test('test postVpsBackup', () async {
      // TODO
    });

    // Purchase HD Space Addon
    //
    // Purchases additional hard drive space for the VPS.
    //
    //Future postVpsBuyHdSpace(int id) async
    test('test postVpsBuyHdSpace', () async {
      // TODO
    });

    // Purchase Additional IP
    //
    // Purchases an additional IP address for the VPS.
    //
    //Future postVpsBuyIp(int id) async
    test('test postVpsBuyIp', () async {
      // TODO
    });

    // Update VPS Hostname
    //
    // Changes the hostname of the VPS. This queues a background task to update the server.
    //
    //Future<QueueResponse> postVpsChangeHostname(int id, { String hostname }) async
    test('test postVpsChangeHostname', () async {
      // TODO
    });

    // Change VPS Root Password
    //
    // Changes the root password of the VPS.
    //
    //Future<QueueResponse> postVpsChangeRootPassword(int id, String password) async
    test('test postVpsChangeRootPassword', () async {
      // TODO
    });

    // Change VPS Timezone
    //
    // Changes the system timezone on the VPS.
    //
    //Future<QueueResponse> postVpsChangeTimezone(int id, String timezone) async
    test('test postVpsChangeTimezone', () async {
      // TODO
    });

    // Change Webuzo Password
    //
    // Changes the Webuzo control panel password on the VPS.
    //
    //Future<QueueResponse> postVpsChangeWebuzoPassword(int id, String password) async
    test('test postVpsChangeWebuzoPassword', () async {
      // TODO
    });

    // Insert CD in VPS
    //
    // Mounts an ISO image in the VPS virtual CD drive from the given URL.
    //
    //Future<QueueResponse> postVpsInsertCd(int id, { String url }) async
    test('test postVpsInsertCd', () async {
      // TODO
    });

    // Reinstall VPS OS
    //
    // Reinstalls the operating system on the VPS. Warning - all data will be erased.
    //
    //Future<QueueResponse> postVpsReinstallOs(int id, String template, String localPassword, { String password }) async
    test('test postVpsReinstallOs', () async {
      // TODO
    });

    // Reset VPS Password
    //
    // Resets the root password on the VPS to a new randomly generated password.
    //
    //Future<QueueResponse> postVpsResetPassword(int id) async
    test('test postVpsResetPassword', () async {
      // TODO
    });

    // Restore VPS from Backup
    //
    // Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
    //
    //Future<QueueResponse> postVpsRestore(int id, RestoreRequest restoreRequest) async
    test('test postVpsRestore', () async {
      // TODO
    });

    // Update Reverse DNS
    //
    // Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
    //
    //Future<TextResponse> postVpsReverseDns(int id, ReverseDnsEntries reverseDnsEntries) async
    test('test postVpsReverseDns', () async {
      // TODO
    });

    // Setup VNC
    //
    // Sets up or refreshes the VNC console connection for the VPS.
    //
    //Future<QueueResponse> postVpsSetupVnc(int id) async
    test('test postVpsSetupVnc', () async {
      // TODO
    });

    // Purchase Slice Upgrade
    //
    // Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
    //
    //Future postVpsSlices(int id) async
    test('test postVpsSlices', () async {
      // TODO
    });

    // Update View Desktop
    //
    // Updates or refreshes the remote desktop session for the VPS.
    //
    //Future postVpsViewDesktop(int id) async
    test('test postVpsViewDesktop', () async {
      // TODO
    });

    // Validate VPS Order
    //
    // Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
    //
    //Future<VpsOrderPutResponse> putVps({ VpsOrderPutRequest vpsOrderPutRequest }) async
    test('test putVps', () async {
      // TODO
    });

    // Update VPS Order
    //
    // Updates settings on a VPS order.
    //
    //Future updateVpsInfo(String id) async
    test('test updateVpsInfo', () async {
      // TODO
    });

    // Cancel VPS Service
    //
    // Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    //
    //Future<VPSCancel200Response> vPSCancel(int id) async
    test('test vPSCancel', () async {
      // TODO
    });

  });
}
