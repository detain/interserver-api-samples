#ifndef TINY_CPP_CLIENT_AccountApi_H_
#define TINY_CPP_CLIENT_AccountApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "AccountInfo.h"
#include "GenericResponse.h"
#include "GetAccountInfo_401_response.h"
#include "GetAccountTfaSetup_200_response.h"
#include "Home.h"
#include "IpLimitRange.h"
#include "SearchAutocompleteResponse.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class AccountApi : public Service {
public:
    AccountApi() = default;

    virtual ~AccountApi();

    /**
    * Change Account Username.
    *
    * Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
    */
    Response<
                TextResponse
        >
    changeAccountUsername(
    );
    /**
    * Unlink OAuth Account.
    *
    * Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
    * \param name  *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteAccountOauthName(
            
            std::string name
            
    );
    /**
    * Disable Two-Factor Authentication.
    *
    * Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
    */
    Response<
                SuccessTextResponse
        >
    deleteAccountTfa(
    );
    /**
    * Remove IP Access Restriction.
    *
    * Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
    * \param ipLimitRange 
    */
    Response<
                GenericResponse
        >
    deleteIpLimit(
            
            IpLimitRange ipLimitRange
            
    );
    /**
    * Retrieve Account Details.
    *
    * Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
    */
    Response<
                AccountInfo
        >
    getAccountInfo(
    );
    /**
    * Get Two-Factor Setup Data.
    *
    * Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
    */
    Response<
                GetAccountTfaSetup_200_response
        >
    getAccountTfaSetup(
    );
    /**
    * Get Home Data.
    *
    * Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
    */
    Response<
                Home
        >
    getHome(
    );
    /**
    * Search Autocomplete.
    *
    * Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
    */
    Response<
                SearchAutocompleteResponse&lt;std::string, Object&gt;
        >
    getSearch(
    );
    /**
    * Log Out.
    *
    * Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
    */
    Response<
                SuccessTextResponse
        >
    logout(
    );
    /**
    * Logout of OAuth.
    *
    * Logs out of the specified OAuth provider session.
    * \param name  *Required*
    */
    Response<
                SuccessTextResponse
        >
    logoutAccountOauth(
            
            std::string name
            
    );
    /**
    * Generate New API Key.
    *
    * Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
    */
    Response<
                SuccessTextResponse
        >
    updateAccountApiKey(
    );
    /**
    * Update Account Feature Flags.
    *
    * Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
    * \param disableReset 
    * \param disableReinstall 
    */
    Response<
                SuccessTextResponse
        >
    updateAccountFeatures(
            
            int disableReset
            , 
            
            int disableReinstall
            
    );
    /**
    * Update Account Information.
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
    */
    Response<
                SuccessTextResponse
        >
    updateAccountInfo(
            
            std::string name
            , 
            
            std::string address
            , 
            
            std::string city
            , 
            
            std::string state
            , 
            
            std::string zip
            , 
            
            std::string country
            , 
            
            std::string phone
            , 
            
            std::string company
            , 
            
            std::string address2
            , 
            
            std::string locale
            , 
            
            std::string emailInvoices
            , 
            
            std::string emailAbuse
            , 
            
            bool disableReset
            , 
            
            bool disableReinstall
            , 
            
            bool disableServerNotifications
            , 
            
            bool disableEmailNotifications
            , 
            
            std::string gstin
            
    );
    /**
    * Add IP Access Restriction.
    *
    * Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
    * \param start The begining (or first) IP address in the range. *Required*
    * \param end The ending (or last) IP address in the range. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateAccountIpLimits(
            
            std::string start
            , 
            
            std::string end
            
    );
    /**
    * Change Account Password.
    *
    * Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
    * \param password  *Required*
    */
    Response<
                TextResponse
        >
    updateAccountPassword(
            
            std::string password
            
    );
    /**
    * Update SSH Keys.
    *
    * Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
    * \param sshKey 
    */
    Response<
                SuccessTextResponse
        >
    updateAccountSshKey(
            
            std::string sshKey
            
    );
    /**
    * Enable Two-Factor Authentication.
    *
    * Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
    * \param r_2fa_google_code The 6-digit verification code from your authenticator app. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateAccountTfa(
            
            std::string r_2fa_google_code
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_AccountApi_H_ */