import connexion
import six

from myadmin-client-python-flask.models.buy_it_now_list import BuyItNowList  # noqa: E501
from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response20019 import InlineResponse20019  # noqa: E501
from myadmin-client-python-flask.models.inline_response20026 import InlineResponse20026  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.order_buy_now_server_body import OrderBuyNowServerBody  # noqa: E501
from myadmin-client-python-flask.models.reverse_dns_entries import ReverseDnsEntries  # noqa: E501
from myadmin-client-python-flask.models.server import Server  # noqa: E501
from myadmin-client-python-flask.models.server_ipmi_live_info import ServerIpmiLiveInfo  # noqa: E501
from myadmin-client-python-flask.models.server_ipmi_live_request import ServerIpmiLiveRequest  # noqa: E501
from myadmin-client-python-flask.models.server_ipmi_power_request import ServerIpmiPowerRequest  # noqa: E501
from myadmin-client-python-flask.models.server_order import ServerOrder  # noqa: E501
from myadmin-client-python-flask.models.server_row import ServerRow  # noqa: E501
from myadmin-client-python-flask.models.servers_buy_now_error import ServersBuyNowError  # noqa: E501
from myadmin-client-python-flask.models.servers_buy_now_response import ServersBuyNowResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_server():  # noqa: E501
    """Place Server Order

    Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def buy_it_now_server_order():  # noqa: E501
    """Get Buy Now Server Options

    Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;. # noqa: E501


    :rtype: InlineResponse20026
    """
    return 'do some magic!'


def get_mp_servers():  # noqa: E501
    """List Marketplace Servers

    Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase. # noqa: E501


    :rtype: BuyItNowList
    """
    return 'do some magic!'


def get_new_server():  # noqa: E501
    """Server Ordering Information

    Retrieves available server configurations and pricing for ordering a new dedicated server. # noqa: E501


    :rtype: ServerOrder
    """
    return 'do some magic!'


def get_server_info(id):  # noqa: E501
    """Get Server Order

    Returns detailed information about a specific server including its hardware configuration, IPs, and status. # noqa: E501

    :param id: Server ID number.
    :type id: int

    :rtype: Server
    """
    return 'do some magic!'


def get_server_invoices(id):  # noqa: E501
    """Get Server Invoices

    Returns the billing invoices associated with this dedicated server. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_server_list():  # noqa: E501
    """List Servers

    Returns all dedicated server services on the account with their current status and configuration. # noqa: E501


    :rtype: List[ServerRow]
    """
    return 'do some magic!'


def get_server_reverse_dns(id):  # noqa: E501
    """Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: ReverseDnsEntries
    """
    return 'do some magic!'


def get_servers_welcome_email(id):  # noqa: E501
    """Resend Server Welcome Email

    Resends the welcome email for the order. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def place_buy_now_server(body=None):  # noqa: E501
    """Place Buy Now Server Order

    Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: ServersBuyNowResponse
    """
    if connexion.request.is_json:
        body = OrderBuyNowServerBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_server_reverse_dns(body, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: Server ID number
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = ReverseDnsEntries.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_server_reverse_dns(ips, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses. # noqa: E501

    :param ips: 
    :type ips: Dict[str, ]
    :param id: Server ID number
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def put_servers():  # noqa: E501
    """Validate Server Order

    Validates a server order before placing it. Use this to check for errors before committing to a purchase. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def server_ipmi_live_get(id):  # noqa: E501
    """Server IPMI Live Information

    Returns the current IPMI live connection information for the server. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: ServerIpmiLiveInfo
    """
    return 'do some magic!'


def server_ipmi_live_post(asset, ip, id):  # noqa: E501
    """Server IPMI Live Setup

    Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface. # noqa: E501

    :param asset: 
    :type asset: int
    :param ip: 
    :type ip: str
    :param id: Server ID number
    :type id: int

    :rtype: ServerIpmiLiveInfo
    """
    return 'do some magic!'


def server_ipmi_live_post(body, id):  # noqa: E501
    """Server IPMI Live Setup

    Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: Server ID number
    :type id: int

    :rtype: ServerIpmiLiveInfo
    """
    if connexion.request.is_json:
        body = ServerIpmiLiveRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def server_ipmi_power_get(id):  # noqa: E501
    """Get IPMI Power Status

    Returns the chassis power status from ipmi. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def server_ipmi_power_post(asset, action, id):  # noqa: E501
    """Server IPMI Power

    Uses the IPMI interface to set the Power status on the server. # noqa: E501

    :param asset: 
    :type asset: int
    :param action: 
    :type action: str
    :param id: Server ID number
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def server_ipmi_power_post(body, id):  # noqa: E501
    """Server IPMI Power

    Uses the IPMI interface to set the Power status on the server. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: Server ID number
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = ServerIpmiPowerRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def servers_cancel(id):  # noqa: E501
    """Cancel Server Service

    Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle. # noqa: E501

    :param id: Server ID number
    :type id: int

    :rtype: InlineResponse20019
    """
    return 'do some magic!'


def update_server_info(id):  # noqa: E501
    """Update Server Order

    Updates settings on a dedicated server order. # noqa: E501

    :param id: Server ID number.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'
