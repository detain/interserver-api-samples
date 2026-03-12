import connexion
import six

from myadmin-client-python-flask.models.close_ticket_response_schema import CloseTicketResponseSchema  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.reply_ticket_request import ReplyTicketRequest  # noqa: E501
from myadmin-client-python-flask.models.reply_ticket_response_schema import ReplyTicketResponseSchema  # noqa: E501
from myadmin-client-python-flask.models.ticket_new import TicketNew  # noqa: E501
from myadmin-client-python-flask.models.ticket_new_response import TicketNewResponse  # noqa: E501
from myadmin-client-python-flask.models.tickets import Tickets  # noqa: E501
from myadmin-client-python-flask.models.update_ticket import UpdateTicket  # noqa: E501
from myadmin-client-python-flask.models.update_ticket_response_schema import UpdateTicketResponseSchema  # noqa: E501
from myadmin-client-python-flask.models.view_ticket_response import ViewTicketResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_new_ticket(body):  # noqa: E501
    """Create New Ticket

    Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: TicketNewResponse
    """
    if connexion.request.is_json:
        body = TicketNew.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_new_ticket(subject, body, service_id, service_module):  # noqa: E501
    """Create New Ticket

    Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module. # noqa: E501

    :param subject: 
    :type subject: str
    :param body: 
    :type body: str
    :param service_id: 
    :type service_id: int
    :param service_module: 
    :type service_module: str

    :rtype: TicketNewResponse
    """
    return 'do some magic!'


def close_ticket(id):  # noqa: E501
    """Close Ticket

    Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox. # noqa: E501

    :param id: Ticket ID
    :type id: str

    :rtype: CloseTicketResponseSchema
    """
    return 'do some magic!'


def delete_ticket_info(id):  # noqa: E501
    """Close Ticket

    Closes the support ticket. # noqa: E501

    :param id: Ticket ID number.
    :type id: float

    :rtype: ViewTicketResponse
    """
    return 'do some magic!'


def get_new_ticket():  # noqa: E501
    """Gets Information for creating a new ticket.

    Returns the form data needed to create a new support ticket, such as available departments and service categories. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def get_ticket_info(id):  # noqa: E501
    """Get Ticket Information

    Returns the full details of a support ticket including its history of replies. # noqa: E501

    :param id: Ticket ID number.
    :type id: float

    :rtype: ViewTicketResponse
    """
    return 'do some magic!'


def get_tickets_list(page=None, period=None, view=None):  # noqa: E501
    """List Support Tickets

    Returns a paginated list of support tickets on the account. Filter by status and time period. # noqa: E501

    :param page: Page number for paginated results.
    :type page: int
    :param period: How far back to show tickets from. Value is in days.
    :type period: str
    :param view: The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
    :type view: str

    :rtype: Tickets
    """
    return 'do some magic!'


def post_ticket_info(id):  # noqa: E501
    """Reply To Ticket

    Adds a reply to an existing support ticket. # noqa: E501

    :param id: Ticket ID number.
    :type id: float

    :rtype: ViewTicketResponse
    """
    return 'do some magic!'


def post_tickets_list():  # noqa: E501
    """Search Support Tickets

    Searches support tickets by email, subject, or ticket mask ID. # noqa: E501


    :rtype: Tickets
    """
    return 'do some magic!'


def put_ticket_info(id):  # noqa: E501
    """Update Ticket

    Updates a support ticket&#x27;s properties such as subject or status. # noqa: E501

    :param id: Ticket ID number.
    :type id: float

    :rtype: ViewTicketResponse
    """
    return 'do some magic!'


def reply_ticket(id, body=None):  # noqa: E501
    """Reply Ticket

    Posts a reply to an existing support ticket thread. # noqa: E501

    :param id: The ticket ID number.
    :type id: float
    :param body: 
    :type body: dict | bytes

    :rtype: ReplyTicketResponseSchema
    """
    if connexion.request.is_json:
        body = ReplyTicketRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def reply_ticket(id, content=None):  # noqa: E501
    """Reply Ticket

    Posts a reply to an existing support ticket thread. # noqa: E501

    :param id: The ticket ID number.
    :type id: float
    :param content: 
    :type content: str

    :rtype: ReplyTicketResponseSchema
    """
    return 'do some magic!'


def update_ticket_info(id, body=None):  # noqa: E501
    """Update Ticket

    Updates a support ticket&#x27;s subject or body content. # noqa: E501

    :param id: The ticket ID number.
    :type id: float
    :param body: 
    :type body: dict | bytes

    :rtype: UpdateTicketResponseSchema
    """
    if connexion.request.is_json:
        body = UpdateTicket.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_ticket_info(id, ip=None, ip_address=None, customer_server_access=None, root_password=None, sudo_username=None, sudo_password=None, port=None):  # noqa: E501
    """Update Ticket

    Updates a support ticket&#x27;s subject or body content. # noqa: E501

    :param id: The ticket ID number.
    :type id: float
    :param ip: 
    :type ip: str
    :param ip_address: 
    :type ip_address: str
    :param customer_server_access: 
    :type customer_server_access: str
    :param root_password: 
    :type root_password: str
    :param sudo_username: 
    :type sudo_username: str
    :param sudo_password: 
    :type sudo_password: str
    :param port: 
    :type port: int

    :rtype: UpdateTicketResponseSchema
    """
    return 'do some magic!'
