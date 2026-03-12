import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.create_filter import CreateFilter  # noqa: E501
from myadmin-client-python-flask.models.create_firewall_rule import CreateFirewallRule  # noqa: E501
from myadmin-client-python-flask.models.create_geo_firewall_rule import CreateGeoFirewallRule  # noqa: E501
from myadmin-client-python-flask.models.delete_firewall_rule import DeleteFirewallRule  # noqa: E501
from myadmin-client-python-flask.models.delete_geo_firewall_rule import DeleteGeoFirewallRule  # noqa: E501
from myadmin-client-python-flask.models.inline_response20012 import InlineResponse20012  # noqa: E501
from myadmin-client-python-flask.models.inline_response20013 import InlineResponse20013  # noqa: E501
from myadmin-client-python-flask.models.inline_response20014 import InlineResponse20014  # noqa: E501
from myadmin-client-python-flask.models.inline_response20015 import InlineResponse20015  # noqa: E501
from myadmin-client-python-flask.models.inline_response20016 import InlineResponse20016  # noqa: E501
from myadmin-client-python-flask.models.inline_response20017 import InlineResponse20017  # noqa: E501
from myadmin-client-python-flask.models.inline_response20018 import InlineResponse20018  # noqa: E501
from myadmin-client-python-flask.models.inline_response201 import InlineResponse201  # noqa: E501
from myadmin-client-python-flask.models.inline_response2011 import InlineResponse2011  # noqa: E501
from myadmin-client-python-flask.models.inline_response2012 import InlineResponse2012  # noqa: E501
from myadmin-client-python-flask.models.inline_response400 import InlineResponse400  # noqa: E501
from myadmin-client-python-flask.models.inline_response4001 import InlineResponse4001  # noqa: E501
from myadmin-client-python-flask.models.inline_response4002 import InlineResponse4002  # noqa: E501
from myadmin-client-python-flask.models.inline_response4003 import InlineResponse4003  # noqa: E501
from myadmin-client-python-flask.models.inline_response4004 import InlineResponse4004  # noqa: E501
from myadmin-client-python-flask.models.inline_response4005 import InlineResponse4005  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.inline_response500 import InlineResponse500  # noqa: E501
from myadmin-client-python-flask.models.inline_response5001 import InlineResponse5001  # noqa: E501
from myadmin-client-python-flask.models.inline_response5002 import InlineResponse5002  # noqa: E501
from myadmin-client-python-flask.models.inline_response5003 import InlineResponse5003  # noqa: E501
from myadmin-client-python-flask.models.inline_response5004 import InlineResponse5004  # noqa: E501
from myadmin-client-python-flask.models.inline_response5005 import InlineResponse5005  # noqa: E501
from myadmin-client-python-flask.models.scrub_ip_filter_types import ScrubIpFilterTypes  # noqa: E501
from myadmin-client-python-flask.models.scrub_ip_place_order import ScrubIpPlaceOrder  # noqa: E501
from myadmin-client-python-flask.models.scrub_ips_log_row_schema import ScrubIpsLogRowSchema  # noqa: E501
from myadmin-client-python-flask.models.scrub_ips_row_schema import ScrubIpsRowSchema  # noqa: E501
from myadmin-client-python-flask import util


def cancel_scrub_ip(id):  # noqa: E501
    """Cancel Scrub IP Service

    Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle. # noqa: E501

    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20013
    """
    return 'do some magic!'


def create_filter(body, id):  # noqa: E501
    """Create Traffic Filter

    Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse2011
    """
    if connexion.request.is_json:
        body = CreateFilter.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def create_geo_rule(body, id):  # noqa: E501
    """Create Geo Firewall Rule

    Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse201
    """
    if connexion.request.is_json:
        body = CreateGeoFirewallRule.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def create_rule(body, id):  # noqa: E501
    """Create Firewall Rule

    Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse201
    """
    if connexion.request.is_json:
        body = CreateFirewallRule.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def delete_filter(body, id):  # noqa: E501
    """Delete Traffic Filter

    Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20017
    """
    if connexion.request.is_json:
        body = CreateFilter.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def disable_scrub(id):  # noqa: E501
    """Disable Scrub Protection

    Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure. # noqa: E501

    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20015
    """
    return 'do some magic!'


def enable_scrub(id):  # noqa: E501
    """Enable Scrub Protection

    Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets. # noqa: E501

    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20014
    """
    return 'do some magic!'


def get_order_detail():  # noqa: E501
    """Get Scrub IP Ordering Information

    Returns the available Scrub IP service plans and pricing information needed to build an order form. # noqa: E501


    :rtype: InlineResponse20018
    """
    return 'do some magic!'


def get_scrub_ip_details(id):  # noqa: E501
    """Get Scrub IP Details

    Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters. # noqa: E501

    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20012
    """
    return 'do some magic!'


def get_scrub_ip_filter_types():  # noqa: E501
    """List Scrub Filter Types

    Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;. # noqa: E501


    :rtype: ScrubIpFilterTypes
    """
    return 'do some magic!'


def get_scrub_ip_invoices(id):  # noqa: E501
    """Get ScrubIp Invoices

    Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment. # noqa: E501

    :param id: ScrubIp ID number
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_scrub_ip_logs(id):  # noqa: E501
    """Get Scrub IP Logs

    Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes. # noqa: E501

    :param id: Scrub Order ID
    :type id: str

    :rtype: List[ScrubIpsLogRowSchema]
    """
    return 'do some magic!'


def get_scrub_ips_list():  # noqa: E501
    """List Scrub IP Services

    Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses. # noqa: E501


    :rtype: List[ScrubIpsRowSchema]
    """
    return 'do some magic!'


def place_scrub_order(body):  # noqa: E501
    """Place Scrub IP Order

    Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: InlineResponse2012
    """
    if connexion.request.is_json:
        body = ScrubIpPlaceOrder.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def scrub_ips_delete_geo_rule(body, id):  # noqa: E501
    """Delete Geo Firewall Rule

    Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20016
    """
    if connexion.request.is_json:
        body = DeleteGeoFirewallRule.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def scrub_ips_delete_rule(body, id):  # noqa: E501
    """Delete Firewall Rule

    Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: ScrubIp ID number
    :type id: int

    :rtype: InlineResponse20016
    """
    if connexion.request.is_json:
        body = DeleteFirewallRule.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
