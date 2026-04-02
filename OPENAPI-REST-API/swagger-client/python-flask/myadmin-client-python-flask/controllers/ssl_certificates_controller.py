import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response20021 import InlineResponse20021  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_ssl():  # noqa: E501
    """Place SSL Cert Order

    Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first. # noqa: E501


    :rtype: ServiceOrderPostResponse
    """
    return 'do some magic!'


def get_new_ssl():  # noqa: E501
    """SSL Cert Ordering Information

    Retrieves available SSL certificate types and pricing for ordering. # noqa: E501


    :rtype: object
    """
    return 'do some magic!'


def get_ssl_info(id):  # noqa: E501
    """Get SSL Cert Info

    Returns detailed information about a specific SSL certificate including its domain and expiration. # noqa: E501

    :param id: SSL certificate ID number.
    :type id: int

    :rtype: object
    """
    return 'do some magic!'


def get_ssl_invoices(id):  # noqa: E501
    """Get SSL Cert Invoices

    Returns the billing invoices associated with this SSL certificate. # noqa: E501

    :param id: SSL Cert ID number
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_ssl_list():  # noqa: E501
    """List SSL Certs

    Returns all SSL certificate services on the account with their current status. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def get_ssl_welcome_email(id):  # noqa: E501
    """Resend SSL Welcome Email

    Resends the welcome email for the order. # noqa: E501

    :param id: SSL Cert ID number
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def put_ssl():  # noqa: E501
    """Validate SSL Cert Order

    Validates an SSL certificate order before placing it. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def ssl_cancel(id):  # noqa: E501
    """Cancel SSL Certificate Service

    Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle. # noqa: E501

    :param id: SSL Cert ID number
    :type id: int

    :rtype: InlineResponse20021
    """
    return 'do some magic!'


def update_ssl_info(id):  # noqa: E501
    """Update SSL Cert Order

    Updates settings on an SSL certificate order. # noqa: E501

    :param id: SSL certificate ID number.
    :type id: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'
