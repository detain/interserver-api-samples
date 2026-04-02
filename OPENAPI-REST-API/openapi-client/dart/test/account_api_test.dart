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


/// tests for AccountApi
void main() {
  // final instance = AccountApi();

  group('tests for AccountApi', () {
    // Change Account Username
    //
    // Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
    //
    //Future<TextResponse> changeAccountUsername() async
    test('test changeAccountUsername', () async {
      // TODO
    });

    // Unlink OAuth Account
    //
    // Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
    //
    //Future<SuccessTextResponse> deleteAccountOauthName(String name) async
    test('test deleteAccountOauthName', () async {
      // TODO
    });

    // Disable Two-Factor Authentication
    //
    // Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
    //
    //Future<SuccessTextResponse> deleteAccountTfa() async
    test('test deleteAccountTfa', () async {
      // TODO
    });

    // Remove IP Access Restriction
    //
    // Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
    //
    //Future<GenericResponse> deleteIpLimit() async
    test('test deleteIpLimit', () async {
      // TODO
    });

    // Retrieve Account Details
    //
    // Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
    //
    //Future<AccountInfo> getAccountInfo() async
    test('test getAccountInfo', () async {
      // TODO
    });

    // Get Two-Factor Setup Data
    //
    // Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
    //
    //Future<GetAccountTfaSetup200Response> getAccountTfaSetup() async
    test('test getAccountTfaSetup', () async {
      // TODO
    });

    // Get Home Data
    //
    // Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
    //
    //Future<Home> getHome() async
    test('test getHome', () async {
      // TODO
    });

    // Search Autocomplete
    //
    // Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
    //
    //Future<SearchAutocompleteResponse> getSearch() async
    test('test getSearch', () async {
      // TODO
    });

    // Log Out
    //
    // Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
    //
    //Future<SuccessTextResponse> logout() async
    test('test logout', () async {
      // TODO
    });

    // Logout of OAuth
    //
    // Logs out of the specified OAuth provider session.
    //
    //Future<SuccessTextResponse> logoutAccountOauth(String name) async
    test('test logoutAccountOauth', () async {
      // TODO
    });

    // Generate New API Key
    //
    // Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
    //
    //Future<SuccessTextResponse> updateAccountApiKey() async
    test('test updateAccountApiKey', () async {
      // TODO
    });

    // Update Account Feature Flags
    //
    // Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
    //
    //Future<SuccessTextResponse> updateAccountFeatures({ int disableReset, int disableReinstall }) async
    test('test updateAccountFeatures', () async {
      // TODO
    });

    // Update Account Information
    //
    // Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
    //
    //Future<SuccessTextResponse> updateAccountInfo(String name, String address, String city, String state, String zip, String country, String phone, { String company, String address2, String locale, String emailInvoices, String emailAbuse, bool disableReset, bool disableReinstall, bool disableServerNotifications, bool disableEmailNotifications, String gstin }) async
    test('test updateAccountInfo', () async {
      // TODO
    });

    // Add IP Access Restriction
    //
    // Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
    //
    //Future<SuccessTextResponse> updateAccountIpLimits(String start, String end) async
    test('test updateAccountIpLimits', () async {
      // TODO
    });

    // Change Account Password
    //
    // Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
    //
    //Future<TextResponse> updateAccountPassword(String password) async
    test('test updateAccountPassword', () async {
      // TODO
    });

    // Update SSH Keys
    //
    // Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
    //
    //Future<SuccessTextResponse> updateAccountSshKey({ String sshKey }) async
    test('test updateAccountSshKey', () async {
      // TODO
    });

    // Enable Two-Factor Authentication
    //
    // Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
    //
    //Future<SuccessTextResponse> updateAccountTfa(String n2faGoogleCode) async
    test('test updateAccountTfa', () async {
      // TODO
    });

  });
}
