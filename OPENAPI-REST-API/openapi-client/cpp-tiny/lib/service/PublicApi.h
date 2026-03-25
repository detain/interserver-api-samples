#ifndef TINY_CPP_CLIENT_PublicApi_H_
#define TINY_CPP_CLIENT_PublicApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "BuyItNowList.h"
#include "CaptchaResponse.h"
#include "GetAccountInfo_401_response.h"
#include "GetOauthRedirect_200_response.h"
#include "LoginErrorResponse.h"
#include "LoginInfo.h"
#include "LoginSubmissionExample.h"
#include "LoginSubmissionExample_g_recaptcha_response.h"
#include "LoginSuccessResponse.h"
#include "Object.h"
#include "PatchOauthTwoFactor_200_response.h"
#include "PatchOauthTwoFactor_request.h"
#include "PostOauthCallback_200_response.h"
#include "PostOauthCallback_request.h"
#include "ServicesInfo.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class PublicApi : public Service {
public:
    PublicApi() = default;

    virtual ~PublicApi();

    /**
    * Get Captcha Challenge.
    *
    * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
    */
    Response<
                CaptchaResponse
        >
    getCaptcha(
    );
    /**
    * Get Countries.
    *
    * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
    * \param fetchBy Get countries by iso2 or iso3 or numcode
    */
    Response<
                Object
        >
    getCountries(
            
            std::string fetchBy
            
    );
    /**
    * Get Server Info.
    *
    * Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
    */
    Response<
                ServicesInfo
        >
    getInfo(
    );
    /**
    * Get Login Info.
    *
    * Gets the various pieces of information useful for generating a login page.
    */
    Response<
                LoginInfo
        >
    getLoginInfo(
    );
    /**
    * List Marketplace Servers.
    *
    * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
    */
    Response<
                BuyItNowList
        >
    getMPServers(
    );
    /**
    * Get OAuth Redirect URL.
    *
    * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
    * \param provider The OAuth provider name (e.g. `Google`). *Required*
    */
    Response<
                GetOauthRedirect_200_response
        >
    getOauthRedirect(
            
            std::string provider
            
    );
    /**
    * Get Available Timezones.
    *
    * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
    */
    Response<
                    std::list<std::string>
        >
    getTimezones(
    );
    /**
    * Complete OAuth Two-Factor Verification.
    *
    * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
    * \param patchOauthTwoFactorRequest  *Required*
    */
    Response<
                PatchOauthTwoFactor_200_response
        >
    patchOauthTwoFactor(
            
            PatchOauthTwoFactor_request patchOauthTwoFactorRequest
            
    );
    /**
    * Ping Server.
    *
    * Performs a single ping/pong request to let you know if the server is up.
    */
    Response<
                std::string
        >
    pingServer(
    );
    /**
    * OAuth Callback.
    *
    * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
    * \param provider The OAuth provider name (e.g. `Google`). *Required*
    * \param postOauthCallbackRequest 
    */
    Response<
                PostOauthCallback_200_response
        >
    postOauthCallback(
            
            std::string provider
            , 
            
            PostOauthCallback_request postOauthCallbackRequest
            
    );
    /**
    * Submit Login Information.
    *
    * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
    * \param login  *Required*
    * \param passwd  *Required*
    * \param remember 
    * \param gRecaptchaResponse 
    * \param tfa Two Factor Authentication Response.
    */
    Response<
                LoginSuccessResponse
        >
    submitLogin(
            
            std::string login
            , 
            
            std::string passwd
            , 
            
            std::string remember
            , 
            
            LoginSubmissionExample_g_recaptcha_response gRecaptchaResponse
            , 
            
            std::string tfa
            
    );
    /**
    * Submit Signup Information.
    *
    * Creates a new account in our system using the provided information.
    * \param loginSubmissionExample 
    */
    Response<
            String
        >
    submitSignup(
            
            LoginSubmissionExample loginSubmissionExample
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_PublicApi_H_ */