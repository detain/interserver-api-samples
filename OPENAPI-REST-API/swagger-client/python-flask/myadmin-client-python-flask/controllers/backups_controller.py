import connexion
import six

from myadmin-client-python-flask.models.backup import Backup  # noqa: E501
from myadmin-client-python-flask.models.backup_login_response import BackupLoginResponse  # noqa: E501
from myadmin-client-python-flask.models.backup_order_post_response import BackupOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.backup_order_put_request import BackupOrderPutRequest  # noqa: E501
from myadmin-client-python-flask.models.backup_order_put_response import BackupOrderPutResponse  # noqa: E501
from myadmin-client-python-flask.models.backup_row import BackupRow  # noqa: E501
from myadmin-client-python-flask.models.backups_order import BackupsOrder  # noqa: E501
from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response2001 import InlineResponse2001  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_backup(validate_only, service_type, coupon):  # noqa: E501
    """Place Backup Order

    Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed. # noqa: E501

    :param validate_only: 
    :type validate_only: bool
    :param service_type: 
    :type service_type: int
    :param coupon: 
    :type coupon: str

    :rtype: BackupOrderPostResponse
    """
    return 'do some magic!'


def add_backup(body):  # noqa: E501
    """Place Backup Order

    Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: BackupOrderPostResponse
    """
    if connexion.request.is_json:
        body = BackupOrderPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def cancel_backup(id):  # noqa: E501
    """Cancel Backup Service

    Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: InlineResponse2001
    """
    return 'do some magic!'


def get_backup_info(id):  # noqa: E501
    """Get Backup Service Details

    Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: Backup
    """
    return 'do some magic!'


def get_backup_invoices(id):  # noqa: E501
    """Get Backup Order Invoices

    Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_backup_login(id):  # noqa: E501
    """Get Backup Storage Panel Login

    Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: BackupLoginResponse
    """
    return 'do some magic!'


def get_backups_list():  # noqa: E501
    """List Backup Services

    Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session. # noqa: E501


    :rtype: List[BackupRow]
    """
    return 'do some magic!'


def get_backups_welcome_email(id):  # noqa: E501
    """Resend Backup Welcome Email

    Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_new_backup():  # noqa: E501
    """Get Backup Order Form Data

    Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;. # noqa: E501


    :rtype: BackupsOrder
    """
    return 'do some magic!'


def update_backup_info(id):  # noqa: E501
    """Update Backup Information

    Updates backup storage service metadata, such as stored credentials or settings for the order. # noqa: E501

    :param id: The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def validate_backup_order(validate_only, service_type, coupon):  # noqa: E501
    """Validate Backup Order

    Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;. # noqa: E501

    :param validate_only: 
    :type validate_only: bool
    :param service_type: 
    :type service_type: int
    :param coupon: 
    :type coupon: str

    :rtype: BackupOrderPutResponse
    """
    return 'do some magic!'


def validate_backup_order(body):  # noqa: E501
    """Validate Backup Order

    Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: BackupOrderPutResponse
    """
    if connexion.request.is_json:
        body = BackupOrderPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
