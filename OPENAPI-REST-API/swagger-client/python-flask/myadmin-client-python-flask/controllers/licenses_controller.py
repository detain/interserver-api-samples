import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response2004 import InlineResponse2004  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.ip_object import IpObject  # noqa: E501
from myadmin-client-python-flask.models.license import License  # noqa: E501
from myadmin-client-python-flask.models.license_row import LicenseRow  # noqa: E501
from myadmin-client-python-flask.models.licenses_order import LicensesOrder  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_license():  # noqa: E501
    """Place License Order

    Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def get_license_info(id):  # noqa: E501
    """Get License

    Returns detailed information about a specific license including its type, IP assignment, and status. # noqa: E501

    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: License
    """
    return 'do some magic!'


def get_license_invoices(id):  # noqa: E501
    """Get License Invoices

    Returns the billing invoices associated with this license service. # noqa: E501

    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_license_list():  # noqa: E501
    """List Licenses

    Returns all software license services on the account with their current status and IP assignments. # noqa: E501


    :rtype: List[LicenseRow]
    """
    return 'do some magic!'


def get_license_order_cat_tag_info(cat_tag):  # noqa: E501
    """Get License Order Information for Category

    Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values. # noqa: E501

    :param cat_tag: The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.
    :type cat_tag: str

    :rtype: None
    """
    return 'do some magic!'


def get_licenses_welcome_email(id):  # noqa: E501
    """Resend License Welcome Email

    Resends the welcome email for the license service. The email contains the license key and activation instructions. # noqa: E501

    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_new_license():  # noqa: E501
    """Get License Order Information

    Retrieves available license types, categories, and pricing for ordering a new license. # noqa: E501


    :rtype: LicensesOrder
    """
    return 'do some magic!'


def licenses_cancel(id):  # noqa: E501
    """Cancel License

    Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred. # noqa: E501

    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: InlineResponse2004
    """
    return 'do some magic!'


def post_license_change_ip(body, id):  # noqa: E501
    """Change License IP

    Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = IpObject.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_license_change_ip(ip, id):  # noqa: E501
    """Change License IP

    Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes. # noqa: E501

    :param ip: 
    :type ip: str
    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def put_licenses():  # noqa: E501
    """Validate License Order

    Validates a license order before placing it. Use this to check for errors before committing to a purchase. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def update_license_info(id):  # noqa: E501
    """Update License

    Updates settings on a license service such as its assigned IP. # noqa: E501

    :param id: The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'
