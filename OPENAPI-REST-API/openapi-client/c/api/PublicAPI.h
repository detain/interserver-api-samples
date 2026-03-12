#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/buy_it_now_list.h"
#include "../model/captcha_response.h"
#include "../model/get_account_info_401_response.h"
#include "../model/get_oauth_redirect_200_response.h"
#include "../model/login_error_response.h"
#include "../model/login_info.h"
#include "../model/login_submission_example.h"
#include "../model/login_submission_example_g_recaptcha_response.h"
#include "../model/login_success_response.h"
#include "../model/object.h"
#include "../model/patch_oauth_two_factor_200_response.h"
#include "../model/patch_oauth_two_factor_request.h"
#include "../model/post_oauth_callback_200_response.h"
#include "../model/post_oauth_callback_request.h"
#include "../model/services_info.h"

// Enum FETCHBY for PublicAPI_getCountries
typedef enum  { interserver_management_api_getCountries_FETCHBY_NULL = 0, interserver_management_api_getCountries_FETCHBY_iso2, interserver_management_api_getCountries_FETCHBY_iso3, interserver_management_api_getCountries_FETCHBY_numcode } interserver_management_api_getCountries_fetch_by_e;


// Get Captcha Challenge
//
// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
//
captcha_response_t*
PublicAPI_getCaptcha(apiClient_t *apiClient);


// Get Countries
//
// Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
//
object_t*
PublicAPI_getCountries(apiClient_t *apiClient, interserver_management_api_getCountries_fetch_by_e fetch_by);


// Get Server Info
//
// Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
//
services_info_t*
PublicAPI_getInfo(apiClient_t *apiClient);


// Get Login Info
//
// Gets the various pieces of information useful for generating a login page.
//
login_info_t*
PublicAPI_getLoginInfo(apiClient_t *apiClient);


// List Marketplace Servers
//
// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
//
buy_it_now_list_t*
PublicAPI_getMPServers(apiClient_t *apiClient);


// Get OAuth Redirect URL
//
// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
//
get_oauth_redirect_200_response_t*
PublicAPI_getOauthRedirect(apiClient_t *apiClient, char *provider);


// Get Available Timezones
//
// Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
//
list_t*
PublicAPI_getTimezones(apiClient_t *apiClient);


// Complete OAuth Two-Factor Verification
//
// Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
//
patch_oauth_two_factor_200_response_t*
PublicAPI_patchOauthTwoFactor(apiClient_t *apiClient, patch_oauth_two_factor_request_t *patch_oauth_two_factor_request);


// Ping Server
//
// Performs a single ping/pong request to let you know if the server is up.
//
char*
PublicAPI_pingServer(apiClient_t *apiClient);


// OAuth Callback
//
// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
//
post_oauth_callback_200_response_t*
PublicAPI_postOauthCallback(apiClient_t *apiClient, char *provider, post_oauth_callback_request_t *post_oauth_callback_request);


// Submit Login Information
//
// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
//
login_success_response_t*
PublicAPI_submitLogin(apiClient_t *apiClient, char *login, char *passwd, char *remember, login_submission_example_g_recaptcha_response_t *g_recaptcha_response, char *tfa);


// Submit Signup Information
//
// Creates a new account in our system using the provided information.
//
void
PublicAPI_submitSignup(apiClient_t *apiClient, login_submission_example_t *login_submission_example);


