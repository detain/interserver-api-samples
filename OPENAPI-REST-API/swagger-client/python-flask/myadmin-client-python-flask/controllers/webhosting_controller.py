import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.id_buy_ip_body import IdBuyIpBody  # noqa: E501
from myadmin-client-python-flask.models.id_migration_body import IdMigrationBody  # noqa: E501
from myadmin-client-python-flask.models.inline_response20022 import InlineResponse20022  # noqa: E501
from myadmin-client-python-flask.models.inline_response20023 import InlineResponse20023  # noqa: E501
from myadmin-client-python-flask.models.inline_response20024 import InlineResponse20024  # noqa: E501
from myadmin-client-python-flask.models.inline_response20025 import InlineResponse20025  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.reverse_dns_entries import ReverseDnsEntries  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.models.website import Website  # noqa: E501
from myadmin-client-python-flask.models.website_backups import WebsiteBackups  # noqa: E501
from myadmin-client-python-flask.models.website_login_response import WebsiteLoginResponse  # noqa: E501
from myadmin-client-python-flask.models.website_row import WebsiteRow  # noqa: E501
from myadmin-client-python-flask.models.websites_order import WebsitesOrder  # noqa: E501
from myadmin-client-python-flask import util


def add_website():  # noqa: E501
    """Place Website Order

    Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def get_new_website():  # noqa: E501
    """Website Ordering Information

    Retrieves available webhosting plans and pricing for ordering. # noqa: E501


    :rtype: WebsitesOrder
    """
    return 'do some magic!'


def get_website_buy_ip(id):  # noqa: E501
    """Get Website IP Information

    Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: InlineResponse20023
    """
    return 'do some magic!'


def get_website_info(id):  # noqa: E501
    """Get Website Order

    Returns detailed information about a specific webhosting order including its domain, plan, and status. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: Website
    """
    return 'do some magic!'


def get_website_invoices(id):  # noqa: E501
    """Get Website Invoices

    Returns the billing invoices associated with this webhosting service. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_website_list():  # noqa: E501
    """Get Website Listing

    Gets a listing of your webhosting orders and service details. # noqa: E501


    :rtype: List[WebsiteRow]
    """
    return 'do some magic!'


def get_websites_backups(id):  # noqa: E501
    """Get Website Backups

    Gets a list of the backups that exist for a website and their sizes. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: WebsiteBackups
    """
    return 'do some magic!'


def get_websites_login(id):  # noqa: E501
    """Hosting Panel Auto Login

    Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: WebsiteLoginResponse
    """
    return 'do some magic!'


def get_websites_welcome_email(id):  # noqa: E501
    """Resend Website Welcome Email

    Resends the welcome email containing hosting credentials and panel access details for the webhosting order. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def gett_website_reverse_dns(id):  # noqa: E501
    """Get Website Reverse DNS

    Returns the current reverse DNS (PTR record) entries for the website&#x27;s IP addresses. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: ReverseDnsEntries
    """
    return 'do some magic!'


def post_website_buy_ip(body, id):  # noqa: E501
    """Update Website IP DNS

    Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: InlineResponse20024
    """
    if connexion.request.is_json:
        body = IdBuyIpBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_website_buy_ip(ips, id):  # noqa: E501
    """Update Website IP DNS

    Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname. # noqa: E501

    :param ips: 
    :type ips: Dict[str, str]
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: InlineResponse20024
    """
    return 'do some magic!'


def post_website_migration(body, id):  # noqa: E501
    """Request Website Migration

    Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: InlineResponse20025
    """
    if connexion.request.is_json:
        body = IdMigrationBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_website_migration(cust_portal, reg_email, password, ctrl_panel, ftp_username, ftp_password, site_busy_mig, spl_req_mig, domain_reg, data_mig, domain_reg_portal, domain_reg_email, domain_reg_password, id):  # noqa: E501
    """Request Website Migration

    Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status. # noqa: E501

    :param cust_portal: 
    :type cust_portal: str
    :param reg_email: 
    :type reg_email: str
    :param password: 
    :type password: str
    :param ctrl_panel: 
    :type ctrl_panel: str
    :param ftp_username: 
    :type ftp_username: str
    :param ftp_password: 
    :type ftp_password: str
    :param site_busy_mig: 
    :type site_busy_mig: str
    :param spl_req_mig: 
    :type spl_req_mig: str
    :param domain_reg: 
    :type domain_reg: str
    :param data_mig: 
    :type data_mig: str
    :param domain_reg_portal: 
    :type domain_reg_portal: str
    :param domain_reg_email: 
    :type domain_reg_email: str
    :param domain_reg_password: 
    :type domain_reg_password: str
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: InlineResponse20025
    """
    return 'do some magic!'


def post_websites_reverse_dns(body, id):  # noqa: E501
    """Update Website Reverse DNS

    Updates the reverse DNS entries for each of the IP addresses for the website. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = ReverseDnsEntries.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_websites_reverse_dns(ips, id):  # noqa: E501
    """Update Website Reverse DNS

    Updates the reverse DNS entries for each of the IP addresses for the website. # noqa: E501

    :param ips: 
    :type ips: Dict[str, ]
    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def put_websites():  # noqa: E501
    """Validate Webhosting Order

    Validates a webhosting order before placing it. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def update_website_info(id):  # noqa: E501
    """Update Website Order

    Updates settings on a webhosting order. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'


def webhosting_cancel(id):  # noqa: E501
    """Cancel Website

    Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone. # noqa: E501

    :param id: The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
    :type id: str

    :rtype: InlineResponse20022
    """
    return 'do some magic!'
