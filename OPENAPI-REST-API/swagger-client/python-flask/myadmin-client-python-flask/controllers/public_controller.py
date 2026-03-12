import connexion
import six

from myadmin-client-python-flask.models.buy_it_now_list import BuyItNowList  # noqa: E501
from myadmin-client-python-flask.models.captcha_response import CaptchaResponse  # noqa: E501
from myadmin-client-python-flask.models.inline_response2005 import InlineResponse2005  # noqa: E501
from myadmin-client-python-flask.models.inline_response2006 import InlineResponse2006  # noqa: E501
from myadmin-client-python-flask.models.inline_response2007 import InlineResponse2007  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.login_error_response import LoginErrorResponse  # noqa: E501
from myadmin-client-python-flask.models.login_info import LoginInfo  # noqa: E501
from myadmin-client-python-flask.models.login_submission_example import LoginSubmissionExample  # noqa: E501
from myadmin-client-python-flask.models.login_submission_example_grecaptcharesponse import LoginSubmissionExampleGrecaptcharesponse  # noqa: E501
from myadmin-client-python-flask.models.login_success_response import LoginSuccessResponse  # noqa: E501
from myadmin-client-python-flask.models.oauth_body import OauthBody  # noqa: E501
from myadmin-client-python-flask.models.oauth_body2 import OauthBody2  # noqa: E501
from myadmin-client-python-flask.models.services_info import ServicesInfo  # noqa: E501
from myadmin-client-python-flask import util


def get_captcha():  # noqa: E501
    """Get Captcha Challenge

    Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint. # noqa: E501


    :rtype: CaptchaResponse
    """
    return 'do some magic!'


def get_countries(fetch_by=None):  # noqa: E501
    """Get Countries

    Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms. # noqa: E501

    :param fetch_by: Get countries by iso2 or iso3 or numcode
    :type fetch_by: str

    :rtype: object
    """
    return 'do some magic!'


def get_info():  # noqa: E501
    """Get Server Info

    Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders. # noqa: E501


    :rtype: ServicesInfo
    """
    return 'do some magic!'


def get_login_info():  # noqa: E501
    """Get Login Info

    Gets the various pieces of information useful for generating a login page. # noqa: E501


    :rtype: LoginInfo
    """
    return 'do some magic!'


def get_mp_servers():  # noqa: E501
    """List Marketplace Servers

    Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase. # noqa: E501


    :rtype: BuyItNowList
    """
    return 'do some magic!'


def get_oauth_redirect(provider):  # noqa: E501
    """Get OAuth Redirect URL

    Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;. # noqa: E501

    :param provider: The OAuth provider name (e.g. &#x60;Google&#x60;).
    :type provider: str

    :rtype: InlineResponse2005
    """
    return 'do some magic!'


def get_timezones():  # noqa: E501
    """Get Available Timezones

    Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;. # noqa: E501


    :rtype: List[str]
    """
    return 'do some magic!'


def patch_oauth_two_factor(body):  # noqa: E501
    """Complete OAuth Two-Factor Verification

    Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: InlineResponse2007
    """
    if connexion.request.is_json:
        body = OauthBody2.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def patch_oauth_two_factor(account_id, code):  # noqa: E501
    """Complete OAuth Two-Factor Verification

    Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;. # noqa: E501

    :param account_id: 
    :type account_id: int
    :param code: 
    :type code: str

    :rtype: InlineResponse2007
    """
    return 'do some magic!'


def ping_server():  # noqa: E501
    """Ping Server

    Performs a single ping/pong request to let you know if the server is up. # noqa: E501


    :rtype: str
    """
    return 'do some magic!'


def post_oauth_callback(provider, body=None):  # noqa: E501
    """OAuth Callback

    Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login. # noqa: E501

    :param provider: The OAuth provider name (e.g. &#x60;Google&#x60;).
    :type provider: str
    :param body: 
    :type body: dict | bytes

    :rtype: InlineResponse2006
    """
    if connexion.request.is_json:
        body = OauthBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_oauth_callback(provider, provider2=None):  # noqa: E501
    """OAuth Callback

    Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login. # noqa: E501

    :param provider: The OAuth provider name (e.g. &#x60;Google&#x60;).
    :type provider: str
    :param provider2: 
    :type provider2: str

    :rtype: InlineResponse2006
    """
    return 'do some magic!'


def submit_login(login, passwd, remember, g_recaptcha_response, tfa):  # noqa: E501
    """Submit Login Information

    Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned. # noqa: E501

    :param login: 
    :type login: str
    :param passwd: 
    :type passwd: str
    :param remember: 
    :type remember: str
    :param g_recaptcha_response: 
    :type g_recaptcha_response: dict | bytes
    :param tfa: 
    :type tfa: str

    :rtype: LoginSuccessResponse
    """
    if connexion.request.is_json:
        g_recaptcha_response = LoginSubmissionExampleGrecaptcharesponse.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def submit_login(body):  # noqa: E501
    """Submit Login Information

    Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: LoginSuccessResponse
    """
    if connexion.request.is_json:
        body = LoginSubmissionExample.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def submit_signup(body=None):  # noqa: E501
    """Submit Signup Information

    Creates a new account in our system using the provided information. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        body = LoginSubmissionExample.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
