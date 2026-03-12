#ifndef _PublicManager_H_
#define _PublicManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BuyItNowList.h"
#include "CaptchaResponse.h"
#include "GetAccountInfo_401_response.h"
#include "GetOauthRedirect_200_response.h"
#include "LoginErrorResponse.h"
#include "LoginInfo.h"
#include "LoginSubmissionExample.h"
#include "LoginSubmissionExample_g_recaptcha_response.h"
#include "LoginSuccessResponse.h"
#include "PatchOauthTwoFactor_200_response.h"
#include "PatchOauthTwoFactor_request.h"
#include "PostOauthCallback_200_response.h"
#include "PostOauthCallback_request.h"
#include "ServicesInfo.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Public Public
 * \ingroup Operations
 *  @{
 */
class PublicManager {
public:
	PublicManager();
	virtual ~PublicManager();

/*! \brief Get Captcha Challenge. *Synchronous*
 *
 * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCaptchaSync(char * accessToken,
	
	void(* handler)(CaptchaResponse, Error, void* )
	, void* userData);

/*! \brief Get Captcha Challenge. *Asynchronous*
 *
 * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCaptchaAsync(char * accessToken,
	
	void(* handler)(CaptchaResponse, Error, void* )
	, void* userData);


/*! \brief Get Countries. *Synchronous*
 *
 * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
 * \param fetchBy Get countries by iso2 or iso3 or numcode
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountriesSync(char * accessToken,
	std::string fetchBy, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get Countries. *Asynchronous*
 *
 * Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
 * \param fetchBy Get countries by iso2 or iso3 or numcode
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCountriesAsync(char * accessToken,
	std::string fetchBy, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get Server Info. *Synchronous*
 *
 * Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInfoSync(char * accessToken,
	
	void(* handler)(ServicesInfo, Error, void* )
	, void* userData);

/*! \brief Get Server Info. *Asynchronous*
 *
 * Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInfoAsync(char * accessToken,
	
	void(* handler)(ServicesInfo, Error, void* )
	, void* userData);


/*! \brief Get Login Info. *Synchronous*
 *
 * Gets the various pieces of information useful for generating a login page.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLoginInfoSync(char * accessToken,
	
	void(* handler)(LoginInfo, Error, void* )
	, void* userData);

/*! \brief Get Login Info. *Asynchronous*
 *
 * Gets the various pieces of information useful for generating a login page.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLoginInfoAsync(char * accessToken,
	
	void(* handler)(LoginInfo, Error, void* )
	, void* userData);


/*! \brief List Marketplace Servers. *Synchronous*
 *
 * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMPServersSync(char * accessToken,
	
	void(* handler)(BuyItNowList, Error, void* )
	, void* userData);

/*! \brief List Marketplace Servers. *Asynchronous*
 *
 * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMPServersAsync(char * accessToken,
	
	void(* handler)(BuyItNowList, Error, void* )
	, void* userData);


/*! \brief Get OAuth Redirect URL. *Synchronous*
 *
 * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
 * \param provider The OAuth provider name (e.g. `Google`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOauthRedirectSync(char * accessToken,
	std::string provider, 
	void(* handler)(GetOauthRedirect_200_response, Error, void* )
	, void* userData);

/*! \brief Get OAuth Redirect URL. *Asynchronous*
 *
 * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
 * \param provider The OAuth provider name (e.g. `Google`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOauthRedirectAsync(char * accessToken,
	std::string provider, 
	void(* handler)(GetOauthRedirect_200_response, Error, void* )
	, void* userData);


/*! \brief Get Available Timezones. *Synchronous*
 *
 * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTimezonesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Get Available Timezones. *Asynchronous*
 *
 * Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTimezonesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Complete OAuth Two-Factor Verification. *Synchronous*
 *
 * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
 * \param patchOauthTwoFactorRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool patchOauthTwoFactorSync(char * accessToken,
	std::shared_ptr<PatchOauthTwoFactor_request> patchOauthTwoFactorRequest, 
	void(* handler)(PatchOauthTwoFactor_200_response, Error, void* )
	, void* userData);

/*! \brief Complete OAuth Two-Factor Verification. *Asynchronous*
 *
 * Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
 * \param patchOauthTwoFactorRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool patchOauthTwoFactorAsync(char * accessToken,
	std::shared_ptr<PatchOauthTwoFactor_request> patchOauthTwoFactorRequest, 
	void(* handler)(PatchOauthTwoFactor_200_response, Error, void* )
	, void* userData);


/*! \brief Ping Server. *Synchronous*
 *
 * Performs a single ping/pong request to let you know if the server is up.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool pingServerSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Ping Server. *Asynchronous*
 *
 * Performs a single ping/pong request to let you know if the server is up.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool pingServerAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief OAuth Callback. *Synchronous*
 *
 * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
 * \param provider The OAuth provider name (e.g. `Google`). *Required*
 * \param postOauthCallbackRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postOauthCallbackSync(char * accessToken,
	std::string provider, std::shared_ptr<PostOauthCallback_request> postOauthCallbackRequest, 
	void(* handler)(PostOauthCallback_200_response, Error, void* )
	, void* userData);

/*! \brief OAuth Callback. *Asynchronous*
 *
 * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
 * \param provider The OAuth provider name (e.g. `Google`). *Required*
 * \param postOauthCallbackRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postOauthCallbackAsync(char * accessToken,
	std::string provider, std::shared_ptr<PostOauthCallback_request> postOauthCallbackRequest, 
	void(* handler)(PostOauthCallback_200_response, Error, void* )
	, void* userData);


/*! \brief Submit Login Information. *Synchronous*
 *
 * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
 * \param login  *Required*
 * \param passwd  *Required*
 * \param remember 
 * \param gRecaptchaResponse 
 * \param tfa Two Factor Authentication Response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitLoginSync(char * accessToken,
	std::string login, std::string passwd, std::string remember, LoginSubmissionExample_g_recaptcha_response gRecaptchaResponse, std::string tfa, 
	void(* handler)(LoginSuccessResponse, Error, void* )
	, void* userData);

/*! \brief Submit Login Information. *Asynchronous*
 *
 * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
 * \param login  *Required*
 * \param passwd  *Required*
 * \param remember 
 * \param gRecaptchaResponse 
 * \param tfa Two Factor Authentication Response.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitLoginAsync(char * accessToken,
	std::string login, std::string passwd, std::string remember, LoginSubmissionExample_g_recaptcha_response gRecaptchaResponse, std::string tfa, 
	void(* handler)(LoginSuccessResponse, Error, void* )
	, void* userData);


/*! \brief Submit Signup Information. *Synchronous*
 *
 * Creates a new account in our system using the provided information.
 * \param loginSubmissionExample 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitSignupSync(char * accessToken,
	std::shared_ptr<LoginSubmissionExample> loginSubmissionExample, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Submit Signup Information. *Asynchronous*
 *
 * Creates a new account in our system using the provided information.
 * \param loginSubmissionExample 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool submitSignupAsync(char * accessToken,
	std::shared_ptr<LoginSubmissionExample> loginSubmissionExample, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* PublicManager_H_ */
