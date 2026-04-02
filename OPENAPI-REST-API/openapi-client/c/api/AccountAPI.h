#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_info.h"
#include "../model/generic_response.h"
#include "../model/get_account_info_401_response.h"
#include "../model/get_account_tfa_setup_200_response.h"
#include "../model/home.h"
#include "../model/ip_limit_range.h"
#include "../model/search_autocomplete_response.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"


// Change Account Username
//
// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
//
text_response_t*
AccountAPI_changeAccountUsername(apiClient_t *apiClient);


// Unlink OAuth Account
//
// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
//
success_text_response_t*
AccountAPI_deleteAccountOauthName(apiClient_t *apiClient, char *name);


// Disable Two-Factor Authentication
//
// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
//
success_text_response_t*
AccountAPI_deleteAccountTfa(apiClient_t *apiClient);


// Remove IP Access Restriction
//
// Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
//
generic_response_t*
AccountAPI_deleteIpLimit(apiClient_t *apiClient, ip_limit_range_t *ip_limit_range);


// Retrieve Account Details
//
// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
//
account_info_t*
AccountAPI_getAccountInfo(apiClient_t *apiClient);


// Get Two-Factor Setup Data
//
// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
//
get_account_tfa_setup_200_response_t*
AccountAPI_getAccountTfaSetup(apiClient_t *apiClient);


// Get Home Data
//
// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
//
home_t*
AccountAPI_getHome(apiClient_t *apiClient);


// Search Autocomplete
//
// Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
//
search_autocomplete_response_t*
AccountAPI_getSearch(apiClient_t *apiClient);


// Log Out
//
// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
//
success_text_response_t*
AccountAPI_logout(apiClient_t *apiClient);


// Logout of OAuth
//
// Logs out of the specified OAuth provider session.
//
success_text_response_t*
AccountAPI_logoutAccountOauth(apiClient_t *apiClient, char *name);


// Generate New API Key
//
// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
//
success_text_response_t*
AccountAPI_updateAccountApiKey(apiClient_t *apiClient);


// Update Account Feature Flags
//
// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
//
success_text_response_t*
AccountAPI_updateAccountFeatures(apiClient_t *apiClient, int *disable_reset, int *disable_reinstall);


// Update Account Information
//
// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
//
success_text_response_t*
AccountAPI_updateAccountInfo(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *zip, char *country, char *phone, char *company, char *address2, char *locale, char *email_invoices, char *email_abuse, int *disable_reset, int *disable_reinstall, int *disable_server_notifications, int *disable_email_notifications, char *gstin);


// Add IP Access Restriction
//
// Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
//
success_text_response_t*
AccountAPI_updateAccountIpLimits(apiClient_t *apiClient, char *start, char *end);


// Change Account Password
//
// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
//
text_response_t*
AccountAPI_updateAccountPassword(apiClient_t *apiClient, char *password);


// Update SSH Keys
//
// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
//
success_text_response_t*
AccountAPI_updateAccountSshKey(apiClient_t *apiClient, char *ssh_key);


// Enable Two-Factor Authentication
//
// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
//
success_text_response_t*
AccountAPI_updateAccountTfa(apiClient_t *apiClient, char *_2fa_google_code);


