import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.id_backups_body import IdBackupsBody  # noqa: E501
from myadmin-client-python-flask.models.inline_response20010 import InlineResponse20010  # noqa: E501
from myadmin-client-python-flask.models.inline_response20011 import InlineResponse20011  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.queue_response import QueueResponse  # noqa: E501
from myadmin-client-python-flask.models.quickserver import Quickserver  # noqa: E501
from myadmin-client-python-flask.models.quickserver_order import QuickserverOrder  # noqa: E501
from myadmin-client-python-flask.models.quickserver_row import QuickserverRow  # noqa: E501
from myadmin-client-python-flask.models.restore_request import RestoreRequest  # noqa: E501
from myadmin-client-python-flask.models.reverse_dns_entries import ReverseDnsEntries  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.models.timezone_update import TimezoneUpdate  # noqa: E501
from myadmin-client-python-flask.models.vps_backup_rows import VpsBackupRows  # noqa: E501
from myadmin-client-python-flask.models.vps_templates_list import VpsTemplatesList  # noqa: E501
from myadmin-client-python-flask import util


def add_qs():  # noqa: E501
    """Place QuickServer Order

    Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def delete_qs_backup(id, file, all=None):  # noqa: E501
    """Delete QuickServer Backup

    Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting. # noqa: E501

    :param id: QuickServer ID number
    :type id: int
    :param file: The backup filename to delete.
    :type file: str
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
    :type all: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def do_qs_block_smtp(id):  # noqa: E501
    """Block QuickServer SMTP

    Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_disable_cd(id):  # noqa: E501
    """Disable CD Drive

    Disables the virtual CD drive for the QuickServer. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_disable_quota(id):  # noqa: E501
    """Disable Quotas

    Disables disk quota enforcement for the QuickServer. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_eject_cd(id):  # noqa: E501
    """Eject CD Drive

    Ejects the virtual CD from the QuickServer&#x27;s CD drive. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_enable_quota(id):  # noqa: E501
    """Enable Quotas

    Enables disk quota enforcement for the QuickServer. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_restart(id):  # noqa: E501
    """Restart QuickServer

    Restarts the QuickServer. The server will be shut down and started again. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_start(id):  # noqa: E501
    """Start QuickServer

    Powers on the QuickServer. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_qs_stop(id):  # noqa: E501
    """Stop QuickServer

    Powers off the QuickServer. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def download_qs_backup(body, id, all=None):  # noqa: E501
    """Download QuickServer Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: QuickServer ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
    :type all: str

    :rtype: InlineResponse20011
    """
    if connexion.request.is_json:
        body = IdBackupsBody.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def download_qs_backup(file, id, all=None):  # noqa: E501
    """Download QuickServer Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames. # noqa: E501

    :param file: 
    :type file: str
    :param id: QuickServer ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
    :type all: str

    :rtype: InlineResponse20011
    """
    return 'do some magic!'


def get_new_qs():  # noqa: E501
    """Get QuickServer Ordering Information

    Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection. # noqa: E501


    :rtype: QuickserverOrder
    """
    return 'do some magic!'


def get_qs_backups(id, all=None):  # noqa: E501
    """List QuickServer Backups

    Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup. # noqa: E501

    :param id: QuickServer ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
    :type all: str

    :rtype: VpsBackupRows
    """
    return 'do some magic!'


def get_qs_change_hostname(id):  # noqa: E501
    """Get QuickServer Hostname

    Retrieves the current hostname and any validation requirements for changing it. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_change_root_password(id):  # noqa: E501
    """Get Change Root Password Info

    Retrieves instructions or metadata needed to reset the root password. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_change_timezone(id):  # noqa: E501
    """Get Timezone Info

    Returns the list of available timezones that can be set on the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: List[str]
    """
    return 'do some magic!'


def get_qs_change_webuzo_password(id):  # noqa: E501
    """Webuzo Change Pass Info

    Retrieves instructions or metadata for changing the Webuzo control panel password. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_info(id):  # noqa: E501
    """Get QuickServer Order

    Returns detailed QuickServer information, including credentials, IPs, and available client actions. # noqa: E501

    :param id: QuickServer ID number.
    :type id: int

    :rtype: Quickserver
    """
    return 'do some magic!'


def get_qs_insert_cd(id):  # noqa: E501
    """Insert CD Information

    Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_invoices(id):  # noqa: E501
    """Get QuickServer Invoices

    Returns the billing invoices associated with this QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_qs_list():  # noqa: E501
    """List QuickServers

    Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server. # noqa: E501


    :rtype: List[QuickserverRow]
    """
    return 'do some magic!'


def get_qs_reinstall_os(id):  # noqa: E501
    """QuickServer Reinstall OS Options

    Returns the list of available operating system templates for reinstalling the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: VpsTemplatesList
    """
    return 'do some magic!'


def get_qs_reset_password(id):  # noqa: E501
    """Reset QuickServer Password Info

    Returns information needed before resetting the QuickServer&#x27;s root password. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_reverse_dns(id):  # noqa: E501
    """Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: ReverseDnsEntries
    """
    return 'do some magic!'


def get_qs_setup_vnc(id):  # noqa: E501
    """VNC Setup Info

    Returns the current VNC connection information for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_traffic_usage(id):  # noqa: E501
    """Get Traffic Usage

    Returns bandwidth traffic usage data for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_view_desktop(id):  # noqa: E501
    """Get View Desktop Info

    Returns remote desktop connection information for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_qs_welcome_email(id):  # noqa: E501
    """Resend QuickServer Welcome Email

    Resends the welcome email containing connection details and credentials for the QuickServer order. # noqa: E501

    :param id: Quickserver ID
    :type id: str

    :rtype: TextResponse
    """
    return 'do some magic!'


def post_qs_backup(id):  # noqa: E501
    """Create QuickServer Backup

    Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_change_hostname(id):  # noqa: E501
    """Update QuickServer Hostname

    Submits a hostname change request for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_change_root_password(id):  # noqa: E501
    """Change Root Password

    Triggers a root password reset for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_change_timezone(timezone, id):  # noqa: E501
    """Change QuickServer Timezone

    Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first. # noqa: E501

    :param timezone: 
    :type timezone: str
    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_change_timezone(body, id):  # noqa: E501
    """Change QuickServer Timezone

    Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = TimezoneUpdate.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_qs_change_webuzo_password(id):  # noqa: E501
    """Change Webuzo Password

    Resets the Webuzo control panel password for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_insert_cd(id):  # noqa: E501
    """Insert CD in QuickServer

    Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_reinstall_os(id):  # noqa: E501
    """Reinstall QuickServer OS

    Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_reset_password(id):  # noqa: E501
    """Reset QuickServer Password

    Resets the root password on the QuickServer to a new randomly generated password. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_reverse_dns(body, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: QuickServer ID number
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = ReverseDnsEntries.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_qs_reverse_dns(ips, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses. # noqa: E501

    :param ips: 
    :type ips: Dict[str, ]
    :param id: QuickServer ID number
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def post_qs_setup_vnc(id):  # noqa: E501
    """Setup VNC

    Sets up or refreshes the VNC console connection for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_qs_traffic_usage(id):  # noqa: E501
    """Search Traffic Usage

    Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def post_qs_view_desktop(id):  # noqa: E501
    """Update View Desktop

    Updates or refreshes the remote desktop session for the QuickServer. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def post_quick_server_restore(body, id):  # noqa: E501
    """Restore QuickServer from Backup

    Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names. # noqa: E501

    :param body: QuickServer Restore request
    :type body: dict | bytes
    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = RestoreRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_quick_server_restore(backup, password, id):  # noqa: E501
    """Restore QuickServer from Backup

    Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names. # noqa: E501

    :param backup: 
    :type backup: str
    :param password: 
    :type password: str
    :param id: QuickServer ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def put_qs():  # noqa: E501
    """Validate QuickServer Order

    Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order. # noqa: E501


    :rtype: None
    """
    return 'do some magic!'


def quickservers_cancel(id):  # noqa: E501
    """Cancel QuickServer Order

    Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle. # noqa: E501

    :param id: QuickServer ID number
    :type id: int

    :rtype: InlineResponse20010
    """
    return 'do some magic!'


def update_qs_info(id):  # noqa: E501
    """Update QuickServer Order

    Updates QuickServer metadata or stored settings associated with the order. # noqa: E501

    :param id: QuickServer ID number.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'
