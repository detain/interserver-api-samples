import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.deny_rule_new import DenyRuleNew  # noqa: E501
from myadmin-client-python-flask.models.deny_rule_record import DenyRuleRecord  # noqa: E501
from myadmin-client-python-flask.models.email_address import EmailAddress  # noqa: E501
from myadmin-client-python-flask.models.email_address_name import EmailAddressName  # noqa: E501
from myadmin-client-python-flask.models.generic_response import GenericResponse  # noqa: E501
from myadmin-client-python-flask.models.inline_response2008 import InlineResponse2008  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.mail_alert_request import MailAlertRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_alert_update_request import MailAlertUpdateRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_alerts_response import MailAlertsResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_attachment import MailAttachment  # noqa: E501
from myadmin-client-python-flask.models.mail_blocks import MailBlocks  # noqa: E501
from myadmin-client-python-flask.models.mail_delist_request import MailDelistRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_delist_response import MailDelistResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_deliverability_response import MailDeliverabilityResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_log import MailLog  # noqa: E501
from myadmin-client-python-flask.models.mail_order import MailOrder  # noqa: E501
from myadmin-client-python-flask.models.mail_row import MailRow  # noqa: E501
from myadmin-client-python-flask.models.mail_schema import MailSchema  # noqa: E501
from myadmin-client-python-flask.models.mail_stats_type import MailStatsType  # noqa: E501
from myadmin-client-python-flask.models.send_mail import SendMail  # noqa: E501
from myadmin-client-python-flask.models.send_mail_adv import SendMailAdv  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_mail():  # noqa: E501
    """Place Mail Order

    Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def add_rule(body, id):  # noqa: E501
    """Create Deny Rule

    Adds a new deny rule to automatically block emails that match the specified criteria. # noqa: E501

    :param body: These are the fields needed to create a new email deny rule.
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        body = DenyRuleNew.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_rule(user, type, data, id):  # noqa: E501
    """Create Deny Rule

    Adds a new deny rule to automatically block emails that match the specified criteria. # noqa: E501

    :param user: 
    :type user: str
    :param type: 
    :type type: str
    :param data: 
    :type data: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    return 'do some magic!'


def create_mail_alert(body, id):  # noqa: E501
    """Create Mail Alert

    Creates a new alert for the mail service, such as delivery or quota notifications. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = MailAlertRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def create_mail_alert(type, value, to, enabled, id):  # noqa: E501
    """Create Mail Alert

    Creates a new alert for the mail service, such as delivery or quota notifications. # noqa: E501

    :param type: 
    :type type: str
    :param value: 
    :type value: str
    :param to: 
    :type to: str
    :param enabled: 
    :type enabled: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_mail_alert(id, alert_id):  # noqa: E501
    """Delete Mail Alert

    Deletes an existing alert definition for the mail service. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int
    :param alert_id: Alert ID to delete.
    :type alert_id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_rule(id, rule):  # noqa: E501
    """Delete Deny Rule

    Removes a deny rule from the mail service. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int
    :param rule: The ID of the Rules entry.
    :type rule: str

    :rtype: GenericResponse
    """
    return 'do some magic!'


def delist_block(email, id):  # noqa: E501
    """Remove Email Address from Block List

    Removes an email address from the mail service&#x27;s block lists. # noqa: E501

    :param email: 
    :type email: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    return 'do some magic!'


def delist_block(body, id):  # noqa: E501
    """Remove Email Address from Block List

    Removes an email address from the mail service&#x27;s block lists. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        body = EmailAddress.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def get_mail_alerts(id):  # noqa: E501
    """List Mail Alerts

    Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: MailAlertsResponse
    """
    return 'do some magic!'


def get_mail_blocks(id):  # noqa: E501
    """List Blocked Email Addresses

    Displays a listing of the blocked email addresses # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: MailBlocks
    """
    return 'do some magic!'


def get_mail_delist(id):  # noqa: E501
    """Get Delist Status

    Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: MailDelistResponse
    """
    return 'do some magic!'


def get_mail_deliverability(id):  # noqa: E501
    """Get Deliverability Metrics

    Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: MailDeliverabilityResponse
    """
    return 'do some magic!'


def get_mail_info(id):  # noqa: E501
    """Get Mail Order

    Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: MailSchema
    """
    return 'do some magic!'


def get_mail_invoices(id):  # noqa: E501
    """Get Mail Invoices

    Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_mail_list():  # noqa: E501
    """List Mail Orders

    Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics. # noqa: E501


    :rtype: List[MailRow]
    """
    return 'do some magic!'


def get_mail_welcome_email(id):  # noqa: E501
    """Resend Mail Welcome Email

    Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_new_mail():  # noqa: E501
    """Get Mail Ordering Information

    Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order. # noqa: E501


    :rtype: MailOrder
    """
    return 'do some magic!'


def get_rules(id):  # noqa: E501
    """List Deny Rules

    Returns a listing of all the deny block rules configured for this mail service. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: List[DenyRuleRecord]
    """
    return 'do some magic!'


def get_stats(id, time=None):  # noqa: E501
    """Get Mail Usage Statistics

    Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int
    :param time: The timeframe for the statistics.
    :type time: str

    :rtype: MailStatsType
    """
    return 'do some magic!'


def mail_cancel(id):  # noqa: E501
    """Cancel Mail

    Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: InlineResponse2008
    """
    return 'do some magic!'


def post_mail_delist(body, id):  # noqa: E501
    """Delist a Blocked Sender

    Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = MailDelistRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_mail_delist(unblock, id):  # noqa: E501
    """Delist a Blocked Sender

    Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response. # noqa: E501

    :param unblock: 
    :type unblock: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def put_mail():  # noqa: E501
    """Validate Mail Order

    Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def reset_mail_password(id):  # noqa: E501
    """Reset Mail Password

    Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def send_adv_mail(body, id):  # noqa: E501
    """Send Email with Advanced Options

    Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        body = SendMailAdv.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def send_adv_mail(subject, body, _from, to, replyto, cc, bcc, attachments, id2, id):  # noqa: E501
    """Send Email with Advanced Options

    Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;. # noqa: E501

    :param subject: 
    :type subject: str
    :param body: 
    :type body: str
    :param _from: 
    :type _from: dict | bytes
    :param to: 
    :type to: list | bytes
    :param replyto: 
    :type replyto: list | bytes
    :param cc: 
    :type cc: list | bytes
    :param bcc: 
    :type bcc: list | bytes
    :param attachments: 
    :type attachments: list | bytes
    :param id2: 
    :type id2: int
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        _from = EmailAddressName.from_dict(connexion.request.get_json())  # noqa: E501
    if connexion.request.is_json:
        to = [EmailAddressName.from_dict(d) for d in connexion.request.get_json()]  # noqa: E501
    if connexion.request.is_json:
        replyto = [EmailAddressName.from_dict(d) for d in connexion.request.get_json()]  # noqa: E501
    if connexion.request.is_json:
        cc = [EmailAddressName.from_dict(d) for d in connexion.request.get_json()]  # noqa: E501
    if connexion.request.is_json:
        bcc = [EmailAddressName.from_dict(d) for d in connexion.request.get_json()]  # noqa: E501
    if connexion.request.is_json:
        attachments = [MailAttachment.from_dict(d) for d in connexion.request.get_json()]  # noqa: E501
    return 'do some magic!'


def send_mail(body, id):  # noqa: E501
    """Send Email

    Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    if connexion.request.is_json:
        body = SendMail.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def send_mail(to, _from, subject, body, id):  # noqa: E501
    """Send Email

    Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead. # noqa: E501

    :param to: 
    :type to: str
    :param _from: 
    :type _from: str
    :param subject: 
    :type subject: str
    :param body: 
    :type body: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: GenericResponse
    """
    return 'do some magic!'


def update_mail_alert(body, id):  # noqa: E501
    """Update Mail Alert

    Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = MailAlertUpdateRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_mail_alert(alert_id, type, value, to, enabled, id):  # noqa: E501
    """Update Mail Alert

    Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields. # noqa: E501

    :param alert_id: 
    :type alert_id: int
    :param type: 
    :type type: str
    :param value: 
    :type value: str
    :param to: 
    :type to: str
    :param enabled: 
    :type enabled: str
    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_mail_info(id):  # noqa: E501
    """Update Mail Order

    Updates mail service metadata for the order, such as stored settings or account details. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'


def view_mail_log(id, id=None, origin=None, mx=None, _from=None, to=None, subject=None, mailid=None, skip=None, limit=None, start_date=None, end_date=None, delivered=None):  # noqa: E501
    """View Mail Log

    Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status. # noqa: E501

    :param id: The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
    :type id: int
    :param id: The ID of your mail order this will be sent through.
    :type id: int
    :param origin: originating ip address sending mail
    :type origin: str
    :param mx: mx record mail was sent to
    :type mx: str
    :param _from: from email address
    :type _from: str
    :param to: to/destination email address
    :type to: str
    :param subject: subject containing this string
    :type subject: str
    :param mailid: mail id
    :type mailid: str
    :param skip: number of records to skip for pagination
    :type skip: int
    :param limit: maximum number of records to return
    :type limit: int
    :param start_date: earliest date to get emails in unix timestamp format
    :type start_date: int
    :param end_date: Latest date to get emails in unix timestamp format.
    :type end_date: int
    :param delivered: Filter emails by whether or not they were delivered.
    :type delivered: str

    :rtype: MailLog
    """
    return 'do some magic!'
