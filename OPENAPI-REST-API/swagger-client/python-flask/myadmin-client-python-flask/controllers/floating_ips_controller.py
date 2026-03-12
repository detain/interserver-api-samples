import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response2003 import InlineResponse2003  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.ip_object import IpObject  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_floating_ip():  # noqa: E501
    """Place Floating IP Order

    Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def floating_ips_cancel(id):  # noqa: E501
    """Cancel Floating IP

    Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred. # noqa: E501

    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: InlineResponse2003
    """
    return 'do some magic!'


def get_floating_ip_info(id):  # noqa: E501
    """View Floating IP

    Returns detailed information about a specific Floating IP service including its current target IP assignment. # noqa: E501

    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_floating_ip_invoices(id):  # noqa: E501
    """Get Floating IP Invoices

    Returns the billing invoices associated with this Floating IP service. # noqa: E501

    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_floating_ips_list():  # noqa: E501
    """List Floating IPs

    Returns all Floating IP services on the account with their current status and assignment details. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def get_floating_ips_welcome_email(id):  # noqa: E501
    """Resend Floating IPs Welcome Email

    Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details. # noqa: E501

    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_new_floating_ip():  # noqa: E501
    """Get Floating IP Ordering Information

    Retrieves available options and pricing for ordering a new Floating IP. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def post_floating_ips_change_ip(ip, id):  # noqa: E501
    """Change Floating IP Target

    Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes. # noqa: E501

    :param ip: 
    :type ip: str
    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def post_floating_ips_change_ip(body, id):  # noqa: E501
    """Change Floating IP Target

    Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = IpObject.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def put_floating_ips():  # noqa: E501
    """Validate Floating IP Order

    Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def update_floating_ip_info(id):  # noqa: E501
    """Update Floating IP

    Updates settings on a Floating IP service, such as its label or configuration metadata. # noqa: E501

    :param id: The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'
