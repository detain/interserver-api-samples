import 'package:swagger/api.dart';
import 'package:test/test.dart';


/// tests for PublicApi
void main() {
  var instance = new PublicApi();

  group('tests for PublicApi', () {
    // Get Captcha Challenge
    //
    // Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
    //
    //Future<CaptchaResponse> getCaptcha() async
    test('test getCaptcha', () async {
      // TODO
    });

    // Get Countries
    //
    // Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
    //
    //Future<Object> getCountries({ String fetchBy }) async
    test('test getCountries', () async {
      // TODO
    });

    // Get Server Info
    //
    // Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
    //
    //Future<ServicesInfo> getInfo() async
    test('test getInfo', () async {
      // TODO
    });

    // Get Login Info
    //
    // Gets the various pieces of information useful for generating a login page.
    //
    //Future<LoginInfo> getLoginInfo() async
    test('test getLoginInfo', () async {
      // TODO
    });

    // List Marketplace Servers
    //
    // Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
    //
    //Future<BuyItNowList> getMPServers() async
    test('test getMPServers', () async {
      // TODO
    });

    // Get OAuth Redirect URL
    //
    // Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
    //
    //Future<InlineResponse2005> getOauthRedirect(String provider) async
    test('test getOauthRedirect', () async {
      // TODO
    });

    // Get Available Timezones
    //
    // Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
    //
    //Future<List<String>> getTimezones() async
    test('test getTimezones', () async {
      // TODO
    });

    // Complete OAuth Two-Factor Verification
    //
    // Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
    //
    //Future<InlineResponse2007> patchOauthTwoFactor(OauthBody2 body, int accountId, String code) async
    test('test patchOauthTwoFactor', () async {
      // TODO
    });

    // Ping Server
    //
    // Performs a single ping/pong request to let you know if the server is up.
    //
    //Future<String> pingServer() async
    test('test pingServer', () async {
      // TODO
    });

    // OAuth Callback
    //
    // Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
    //
    //Future<InlineResponse2006> postOauthCallback(String provider, { OauthBody body, String provider }) async
    test('test postOauthCallback', () async {
      // TODO
    });

    // Submit Login Information
    //
    // Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
    //
    //Future<LoginSuccessResponse> submitLogin(String login, String passwd, String remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, String tfa, LoginSubmissionExample body) async
    test('test submitLogin', () async {
      // TODO
    });

    // Submit Signup Information
    //
    // Creates a new account in our system using the provided information.
    //
    //Future submitSignup({ LoginSubmissionExample body }) async
    test('test submitSignup', () async {
      // TODO
    });

  });
}
