#ifndef _AccountManager_H_
#define _AccountManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "AccountInfo.h"
#include "GenericResponse.h"
#include "GetAccountInfo_401_response.h"
#include "GetAccountTfaSetup_200_response.h"
#include "Home.h"
#include "SearchAutocompleteResponse.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Account Account
 * \ingroup Operations
 *  @{
 */
class AccountManager {
public:
	AccountManager();
	virtual ~AccountManager();

/*! \brief Change Account Username. *Synchronous*
 *
 * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool changeAccountUsernameSync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Change Account Username. *Asynchronous*
 *
 * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool changeAccountUsernameAsync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Unlink OAuth Account. *Synchronous*
 *
 * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
 * \param name  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountOauthNameSync(char * accessToken,
	std::string name, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Unlink OAuth Account. *Asynchronous*
 *
 * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
 * \param name  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountOauthNameAsync(char * accessToken,
	std::string name, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Disable Two-Factor Authentication. *Synchronous*
 *
 * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountTfaSync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Disable Two-Factor Authentication. *Asynchronous*
 *
 * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountTfaAsync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Remove IP Access Restriction. *Synchronous*
 *
 * Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteIpLimitSync(char * accessToken,
	
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Remove IP Access Restriction. *Asynchronous*
 *
 * Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteIpLimitAsync(char * accessToken,
	
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief Retrieve Account Details. *Synchronous*
 *
 * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAccountInfoSync(char * accessToken,
	
	void(* handler)(AccountInfo, Error, void* )
	, void* userData);

/*! \brief Retrieve Account Details. *Asynchronous*
 *
 * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAccountInfoAsync(char * accessToken,
	
	void(* handler)(AccountInfo, Error, void* )
	, void* userData);


/*! \brief Get Two-Factor Setup Data. *Synchronous*
 *
 * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAccountTfaSetupSync(char * accessToken,
	
	void(* handler)(GetAccountTfaSetup_200_response, Error, void* )
	, void* userData);

/*! \brief Get Two-Factor Setup Data. *Asynchronous*
 *
 * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAccountTfaSetupAsync(char * accessToken,
	
	void(* handler)(GetAccountTfaSetup_200_response, Error, void* )
	, void* userData);


/*! \brief Get Home Data. *Synchronous*
 *
 * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getHomeSync(char * accessToken,
	
	void(* handler)(Home, Error, void* )
	, void* userData);

/*! \brief Get Home Data. *Asynchronous*
 *
 * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getHomeAsync(char * accessToken,
	
	void(* handler)(Home, Error, void* )
	, void* userData);


/*! \brief Search Autocomplete. *Synchronous*
 *
 * Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSearchSync(char * accessToken,
	
	void(* handler)(SearchAutocompleteResponse, Error, void* )
	, void* userData);

/*! \brief Search Autocomplete. *Asynchronous*
 *
 * Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSearchAsync(char * accessToken,
	
	void(* handler)(SearchAutocompleteResponse, Error, void* )
	, void* userData);


/*! \brief Log Out. *Synchronous*
 *
 * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool logoutSync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Log Out. *Asynchronous*
 *
 * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool logoutAsync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Logout of OAuth. *Synchronous*
 *
 * Logs out of the specified OAuth provider session.
 * \param name  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool logoutAccountOauthSync(char * accessToken,
	std::string name, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Logout of OAuth. *Asynchronous*
 *
 * Logs out of the specified OAuth provider session.
 * \param name  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool logoutAccountOauthAsync(char * accessToken,
	std::string name, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Generate New API Key. *Synchronous*
 *
 * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountApiKeySync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Generate New API Key. *Asynchronous*
 *
 * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountApiKeyAsync(char * accessToken,
	
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Account Feature Flags. *Synchronous*
 *
 * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
 * \param disableReset 
 * \param disableReinstall 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountFeaturesSync(char * accessToken,
	int disableReset, int disableReinstall, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Account Feature Flags. *Asynchronous*
 *
 * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
 * \param disableReset 
 * \param disableReinstall 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountFeaturesAsync(char * accessToken,
	int disableReset, int disableReinstall, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Account Information. *Synchronous*
 *
 * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
 * \param name Your name. *Required*
 * \param address Your address. *Required*
 * \param city Your city. *Required*
 * \param state Your state. *Required*
 * \param zip Your ZIP code. *Required*
 * \param country Your country. *Required*
 * \param phone Your phone number. *Required*
 * \param company Your company name.
 * \param address2 Additional address information.
 * \param locale Your preferred locale.
 * \param emailInvoices Your email for invoice notifications.
 * \param emailAbuse Your email for abuse notifications.
 * \param disableReset Set to `true` to disable account resets, or `false` to enable them.
 * \param disableReinstall Set to `true` to disable server reinstalls, or `false` to enable them.
 * \param disableServerNotifications Set to `true` to disable server notifications, or `false` to enable them.
 * \param disableEmailNotifications Set to `true` to disable email notifications, or `false` to enable them.
 * \param gstin Your GST identification number (if applicable).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountInfoSync(char * accessToken,
	std::string name, std::string address, std::string city, std::string state, std::string zip, std::string country, std::string phone, std::string company, std::string address2, std::string locale, std::string emailInvoices, std::string emailAbuse, bool disableReset, bool disableReinstall, bool disableServerNotifications, bool disableEmailNotifications, std::string gstin, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update Account Information. *Asynchronous*
 *
 * Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
 * \param name Your name. *Required*
 * \param address Your address. *Required*
 * \param city Your city. *Required*
 * \param state Your state. *Required*
 * \param zip Your ZIP code. *Required*
 * \param country Your country. *Required*
 * \param phone Your phone number. *Required*
 * \param company Your company name.
 * \param address2 Additional address information.
 * \param locale Your preferred locale.
 * \param emailInvoices Your email for invoice notifications.
 * \param emailAbuse Your email for abuse notifications.
 * \param disableReset Set to `true` to disable account resets, or `false` to enable them.
 * \param disableReinstall Set to `true` to disable server reinstalls, or `false` to enable them.
 * \param disableServerNotifications Set to `true` to disable server notifications, or `false` to enable them.
 * \param disableEmailNotifications Set to `true` to disable email notifications, or `false` to enable them.
 * \param gstin Your GST identification number (if applicable).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountInfoAsync(char * accessToken,
	std::string name, std::string address, std::string city, std::string state, std::string zip, std::string country, std::string phone, std::string company, std::string address2, std::string locale, std::string emailInvoices, std::string emailAbuse, bool disableReset, bool disableReinstall, bool disableServerNotifications, bool disableEmailNotifications, std::string gstin, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add IP Access Restriction. *Synchronous*
 *
 * Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
 * \param start The begining (or first) IP address in the range. *Required*
 * \param end The ending (or last) IP address in the range. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountIpLimitsSync(char * accessToken,
	std::string start, std::string end, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add IP Access Restriction. *Asynchronous*
 *
 * Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
 * \param start The begining (or first) IP address in the range. *Required*
 * \param end The ending (or last) IP address in the range. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountIpLimitsAsync(char * accessToken,
	std::string start, std::string end, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Change Account Password. *Synchronous*
 *
 * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountPasswordSync(char * accessToken,
	std::string password, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Change Account Password. *Asynchronous*
 *
 * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountPasswordAsync(char * accessToken,
	std::string password, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Update SSH Keys. *Synchronous*
 *
 * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
 * \param sshKey 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountSshKeySync(char * accessToken,
	std::string sshKey, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update SSH Keys. *Asynchronous*
 *
 * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
 * \param sshKey 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountSshKeyAsync(char * accessToken,
	std::string sshKey, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Enable Two-Factor Authentication. *Synchronous*
 *
 * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
 * \param r_2fa_google_code The 6-digit verification code from your authenticator app. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountTfaSync(char * accessToken,
	std::string r_2fa_google_code, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Enable Two-Factor Authentication. *Asynchronous*
 *
 * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
 * \param r_2fa_google_code The 6-digit verification code from your authenticator app. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountTfaAsync(char * accessToken,
	std::string r_2fa_google_code, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* AccountManager_H_ */
