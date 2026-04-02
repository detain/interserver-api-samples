import connexion
import six

from myadmin-client-python-flask.models.account2fa_body1 import Account2faBody1  # noqa: E501
from myadmin-client-python-flask.models.account_features import AccountFeatures  # noqa: E501
from myadmin-client-python-flask.models.account_info import AccountInfo  # noqa: E501
from myadmin-client-python-flask.models.account_info_post import AccountInfoPost  # noqa: E501
from myadmin-client-python-flask.models.account_ssh_key import AccountSshKey  # noqa: E501
from myadmin-client-python-flask.models.generic_response import GenericResponse  # noqa: E501
from myadmin-client-python-flask.models.home import Home  # noqa: E501
from myadmin-client-python-flask.models.inline_response200 import InlineResponse200  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.ip_limit_range import IpLimitRange  # noqa: E501
from myadmin-client-python-flask.models.password_request import PasswordRequest  # noqa: E501
from myadmin-client-python-flask.models.search_autocomplete_response import SearchAutocompleteResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask import util


def change_account_username():  # noqa: E501
    """Change Account Username

    Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins. # noqa: E501


    :rtype: TextResponse
    """
    return 'do some magic!'


def delete_account_oauth_name(name):  # noqa: E501
    """Unlink OAuth Account

    Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login. # noqa: E501

    :param name: 
    :type name: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_account_tfa():  # noqa: E501
    """Disable Two-Factor Authentication

    Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication. # noqa: E501


    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_ip_limit(body=None):  # noqa: E501
    """Remove IP Access Restriction

    Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        body = IpLimitRange.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def get_account_info():  # noqa: E501
    """Retrieve Account Details

    Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;. # noqa: E501


    :rtype: AccountInfo
    """
    return 'do some magic!'


def get_account_tfa_setup():  # noqa: E501
    """Get Two-Factor Setup Data

    Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;. # noqa: E501


    :rtype: InlineResponse200
    """
    return 'do some magic!'


def get_home():  # noqa: E501
    """Get Home Data

    Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session. # noqa: E501


    :rtype: Home
    """
    return 'do some magic!'


def get_search():  # noqa: E501
    """Search Autocomplete

    Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal. # noqa: E501


    :rtype: SearchAutocompleteResponse
    """
    return 'do some magic!'


def logout():  # noqa: E501
    """Log Out

    Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID. # noqa: E501


    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def logout_account_oauth(name):  # noqa: E501
    """Logout of OAuth

    Logs out of the specified OAuth provider session. # noqa: E501

    :param name: 
    :type name: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_api_key():  # noqa: E501
    """Generate New API Key

    Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later. # noqa: E501


    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_features(disable_reset, disable_reinstall):  # noqa: E501
    """Update Account Feature Flags

    Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately. # noqa: E501

    :param disable_reset: 
    :type disable_reset: int
    :param disable_reinstall: 
    :type disable_reinstall: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_features(body):  # noqa: E501
    """Update Account Feature Flags

    Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = AccountFeatures.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_account_info(name, company, address, address2, city, state, zip, country, phone, locale, email_invoices, email_abuse, disable_reset, disable_reinstall, disable_server_notifications, disable_email_notifications, gstin):  # noqa: E501
    """Update Account Information

    Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages. # noqa: E501

    :param name: 
    :type name: str
    :param company: 
    :type company: str
    :param address: 
    :type address: str
    :param address2: 
    :type address2: str
    :param city: 
    :type city: str
    :param state: 
    :type state: str
    :param zip: 
    :type zip: str
    :param country: 
    :type country: str
    :param phone: 
    :type phone: str
    :param locale: 
    :type locale: str
    :param email_invoices: 
    :type email_invoices: str
    :param email_abuse: 
    :type email_abuse: str
    :param disable_reset: 
    :type disable_reset: bool
    :param disable_reinstall: 
    :type disable_reinstall: bool
    :param disable_server_notifications: 
    :type disable_server_notifications: bool
    :param disable_email_notifications: 
    :type disable_email_notifications: bool
    :param gstin: 
    :type gstin: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_info(body):  # noqa: E501
    """Update Account Information

    Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = AccountInfoPost.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_account_ip_limits(start, end):  # noqa: E501
    """Add IP Access Restriction

    Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation. # noqa: E501

    :param start: 
    :type start: str
    :param end: 
    :type end: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_ip_limits(body):  # noqa: E501
    """Add IP Access Restriction

    Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation. # noqa: E501

    :param body: The lower and upper bounds of an ip range.
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = IpLimitRange.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_account_password(password):  # noqa: E501
    """Change Account Password

    Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication. # noqa: E501

    :param password: 
    :type password: str

    :rtype: TextResponse
    """
    return 'do some magic!'


def update_account_password(body):  # noqa: E501
    """Change Account Password

    Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = PasswordRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_account_ssh_key(ssh_key):  # noqa: E501
    """Update SSH Keys

    Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders. # noqa: E501

    :param ssh_key: 
    :type ssh_key: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_ssh_key(body):  # noqa: E501
    """Update SSH Keys

    Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = AccountSshKey.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_account_tfa(_2fa_google_code):  # noqa: E501
    """Enable Two-Factor Authentication

    Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup. # noqa: E501

    :param _2fa_google_code: 
    :type _2fa_google_code: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_tfa(body):  # noqa: E501
    """Enable Two-Factor Authentication

    Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = Account2faBody1.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
