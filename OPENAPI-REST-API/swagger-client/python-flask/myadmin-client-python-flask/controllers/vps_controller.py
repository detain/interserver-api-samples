import connexion
import six

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.hostname_object import HostnameObject  # noqa: E501
from myadmin-client-python-flask.models.id_backups_body2 import IdBackupsBody2  # noqa: E501
from myadmin-client-python-flask.models.inline_response20011 import InlineResponse20011  # noqa: E501
from myadmin-client-python-flask.models.inline_response20021 import InlineResponse20021  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.password_request import PasswordRequest  # noqa: E501
from myadmin-client-python-flask.models.queue_response import QueueResponse  # noqa: E501
from myadmin-client-python-flask.models.restore_request import RestoreRequest  # noqa: E501
from myadmin-client-python-flask.models.reverse_dns_entries import ReverseDnsEntries  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.template_request import TemplateRequest  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.models.timezone_update import TimezoneUpdate  # noqa: E501
from myadmin-client-python-flask.models.url_request import UrlRequest  # noqa: E501
from myadmin-client-python-flask.models.vps import Vps  # noqa: E501
from myadmin-client-python-flask.models.vps_backup_rows import VpsBackupRows  # noqa: E501
from myadmin-client-python-flask.models.vps_order import VpsOrder  # noqa: E501
from myadmin-client-python-flask.models.vps_order_post_request import VpsOrderPostRequest  # noqa: E501
from myadmin-client-python-flask.models.vps_order_put_request import VpsOrderPutRequest  # noqa: E501
from myadmin-client-python-flask.models.vps_order_put_response import VpsOrderPutResponse  # noqa: E501
from myadmin-client-python-flask.models.vps_row import VpsRow  # noqa: E501
from myadmin-client-python-flask.models.vps_templates_list import VpsTemplatesList  # noqa: E501
from myadmin-client-python-flask.models.vps_traffic_response import VpsTrafficResponse  # noqa: E501
from myadmin-client-python-flask import util


def add_vps(body=None):  # noqa: E501
    """Place VPS Order

    Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: None
    """
    if connexion.request.is_json:
        body = VpsOrderPostRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_vps(os_distro=None, slices=None, vps_platform=None, controlpanel=None, period=None, location=None, os_version=None, hostname=None, coupon=None, rootpass=None, comment=None):  # noqa: E501
    """Place VPS Order

    Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first. # noqa: E501

    :param os_distro: 
    :type os_distro: str
    :param slices: 
    :type slices: int
    :param vps_platform: 
    :type vps_platform: str
    :param controlpanel: 
    :type controlpanel: str
    :param period: 
    :type period: int
    :param location: 
    :type location: int
    :param os_version: 
    :type os_version: str
    :param hostname: 
    :type hostname: str
    :param coupon: 
    :type coupon: str
    :param rootpass: 
    :type rootpass: str
    :param comment: 
    :type comment: str

    :rtype: None
    """
    return 'do some magic!'


def delete_vps_backup(id, file, all=None):  # noqa: E501
    """Delete VPS Backup

    Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting. # noqa: E501

    :param id: VPS ID number
    :type id: int
    :param file: The backup filename to delete.
    :type file: str
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
    :type all: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def do_vps_block_smtp(id):  # noqa: E501
    """Blocks SMTP

    Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_disable_cd(id):  # noqa: E501
    """Disable CD Drive

    Disables the virtual CD drive on the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_disable_quota(id):  # noqa: E501
    """Disable Quotas

    Disables disk quota enforcement on the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_eject_cd(id):  # noqa: E501
    """Eject CD Drive

    Ejects the virtual CD from the VPS CD drive. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_enable_quota(id):  # noqa: E501
    """Enable Quotas

    Enables disk quota enforcement on the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_restart(id):  # noqa: E501
    """Restart VPS

    Restarts the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_start(id):  # noqa: E501
    """Start VPS

    Powers on the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def do_vps_stop(id):  # noqa: E501
    """Stop VPS

    Powers off the VPS. # noqa: E501

    :param id: VPS ID number.
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def download_vps_backup(body, id, all=None):  # noqa: E501
    """Download VPS Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
    :type all: str

    :rtype: InlineResponse20011
    """
    if connexion.request.is_json:
        body = IdBackupsBody2.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def download_vps_backup(file, id, all=None):  # noqa: E501
    """Download VPS Backup

    Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames. # noqa: E501

    :param file: 
    :type file: str
    :param id: VPS ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
    :type all: str

    :rtype: InlineResponse20011
    """
    return 'do some magic!'


def get_new_vps():  # noqa: E501
    """VPS Ordering Information

    Retrieves available VPS configurations, OS templates, and pricing for ordering. # noqa: E501


    :rtype: VpsOrder
    """
    return 'do some magic!'


def get_vps_backups(id, all=None):  # noqa: E501
    """Get VPS Backups List

    Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup. # noqa: E501

    :param id: VPS ID number
    :type id: int
    :param all: Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.
    :type all: str

    :rtype: VpsBackupRows
    """
    return 'do some magic!'


def get_vps_buy_hd_space(id):  # noqa: E501
    """HD Space Addon Info

    Returns available hard drive space addon options and pricing for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_vps_buy_ip(id):  # noqa: E501
    """Additional IP Addon Info

    Returns available additional IP address options and pricing for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_vps_change_timezone(id):  # noqa: E501
    """Get Timezone Info

    Returns the list of available timezones that can be set on the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: List[str]
    """
    return 'do some magic!'


def get_vps_info(id):  # noqa: E501
    """Get VPS Order

    Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: Vps
    """
    return 'do some magic!'


def get_vps_invoices(id):  # noqa: E501
    """Get VPS Invoices

    Returns the billing invoices associated with this VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: ChargeInvoiceRows
    """
    return 'do some magic!'


def get_vps_list():  # noqa: E501
    """List VPS Orders

    Returns all VPS services on the account with their current status and configuration. # noqa: E501


    :rtype: List[VpsRow]
    """
    return 'do some magic!'


def get_vps_reinstall_os(id):  # noqa: E501
    """VPS Reinstall OS Options

    Returns the list of available OS templates for reinstalling the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: VpsTemplatesList
    """
    return 'do some magic!'


def get_vps_reverse_dns(id):  # noqa: E501
    """Reverse DNS Info

    Returns the current reverse DNS (PTR record) entries for the VPS IP addresses. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: ReverseDnsEntries
    """
    return 'do some magic!'


def get_vps_setup_vnc(id):  # noqa: E501
    """VNC Setup Info

    Returns the current VNC connection information for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_vps_slices(id):  # noqa: E501
    """Slice Upgrade Info

    Returns available slice upgrade options and pricing for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_vps_traffic_usage(id):  # noqa: E501
    """Get Traffic Usage

    Returns bandwidth traffic usage data for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: VpsTrafficResponse
    """
    return 'do some magic!'


def get_vps_view_desktop(id):  # noqa: E501
    """Get View Desktop Info

    Returns remote desktop connection information for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def get_vps_welcome_email(id):  # noqa: E501
    """Resend VPS Welcome Email

    Resends the welcome email containing connection details and credentials for the VPS order. # noqa: E501

    :param id: VPS ID
    :type id: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def post_vps_backup(id):  # noqa: E501
    """Start a VPS Backup

    Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_buy_hd_space(id):  # noqa: E501
    """Purchase HD Space Addon

    Purchases additional hard drive space for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def post_vps_buy_ip(id):  # noqa: E501
    """Purchase Additional IP

    Purchases an additional IP address for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def post_vps_change_hostname(hostname, id):  # noqa: E501
    """Update VPS Hostname

    Changes the hostname of the VPS. This queues a background task to update the server. # noqa: E501

    :param hostname: 
    :type hostname: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_change_hostname(body, id):  # noqa: E501
    """Update VPS Hostname

    Changes the hostname of the VPS. This queues a background task to update the server. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = HostnameObject.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_change_root_password(password, id):  # noqa: E501
    """Change VPS Root Password

    Changes the root password of the VPS. # noqa: E501

    :param password: 
    :type password: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_change_root_password(body, id):  # noqa: E501
    """Change VPS Root Password

    Changes the root password of the VPS. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = PasswordRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_change_timezone(timezone, id):  # noqa: E501
    """Change VPS Timezone

    Changes the system timezone on the VPS. # noqa: E501

    :param timezone: 
    :type timezone: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_change_timezone(body, id):  # noqa: E501
    """Change VPS Timezone

    Changes the system timezone on the VPS. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = TimezoneUpdate.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_change_webuzo_password(password, id):  # noqa: E501
    """Change Webuzo Password

    Changes the Webuzo control panel password on the VPS. # noqa: E501

    :param password: 
    :type password: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_change_webuzo_password(body, id):  # noqa: E501
    """Change Webuzo Password

    Changes the Webuzo control panel password on the VPS. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = PasswordRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_insert_cd(url, id):  # noqa: E501
    """Insert CD in VPS

    Mounts an ISO image in the VPS virtual CD drive from the given URL. # noqa: E501

    :param url: 
    :type url: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_insert_cd(body, id):  # noqa: E501
    """Insert CD in VPS

    Mounts an ISO image in the VPS virtual CD drive from the given URL. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = UrlRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_reinstall_os(template, password, local_password, id):  # noqa: E501
    """Reinstall VPS OS

    Reinstalls the operating system on the VPS. Warning - all data will be erased. # noqa: E501

    :param template: 
    :type template: str
    :param password: 
    :type password: dict | bytes
    :param local_password: 
    :type local_password: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        password = str.from_dict(connexion.request.get_json())  # noqa: E501
    if connexion.request.is_json:
        local_password = str.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_reinstall_os(body, id):  # noqa: E501
    """Reinstall VPS OS

    Reinstalls the operating system on the VPS. Warning - all data will be erased. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = TemplateRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_reset_password(id):  # noqa: E501
    """Reset VPS Password

    Resets the root password on the VPS to a new randomly generated password. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_restore(body, id):  # noqa: E501
    """Restore VPS from Backup

    Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names. # noqa: E501

    :param body: VPS Restore request
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    if connexion.request.is_json:
        body = RestoreRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_restore(backup, password, id):  # noqa: E501
    """Restore VPS from Backup

    Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names. # noqa: E501

    :param backup: 
    :type backup: str
    :param password: 
    :type password: str
    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_reverse_dns(body, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the VPS IP addresses. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: VPS ID number
    :type id: int

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = ReverseDnsEntries.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_vps_reverse_dns(ips, id):  # noqa: E501
    """Update Reverse DNS

    Updates the reverse DNS (PTR record) entries for the VPS IP addresses. # noqa: E501

    :param ips: 
    :type ips: Dict[str, ]
    :param id: VPS ID number
    :type id: int

    :rtype: TextResponse
    """
    return 'do some magic!'


def post_vps_setup_vnc(id):  # noqa: E501
    """Setup VNC

    Sets up or refreshes the VNC console connection for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: QueueResponse
    """
    return 'do some magic!'


def post_vps_slices(id):  # noqa: E501
    """Purchase Slice Upgrade

    Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def post_vps_view_desktop(id):  # noqa: E501
    """Update View Desktop

    Updates or refreshes the remote desktop session for the VPS. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: None
    """
    return 'do some magic!'


def put_vps(body=None):  # noqa: E501
    """Validate VPS Order

    Validates a VPS order before placing it. Returns cost breakdown and any validation errors. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: VpsOrderPutResponse
    """
    if connexion.request.is_json:
        body = VpsOrderPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def put_vps(os_distro=None, slices=None, vps_platform=None, controlpanel=None, period=None, location=None, os_version=None, hostname=None, coupon=None, rootpass=None, comment=None):  # noqa: E501
    """Validate VPS Order

    Validates a VPS order before placing it. Returns cost breakdown and any validation errors. # noqa: E501

    :param os_distro: 
    :type os_distro: str
    :param slices: 
    :type slices: int
    :param vps_platform: 
    :type vps_platform: str
    :param controlpanel: 
    :type controlpanel: str
    :param period: 
    :type period: int
    :param location: 
    :type location: int
    :param os_version: 
    :type os_version: str
    :param hostname: 
    :type hostname: str
    :param coupon: 
    :type coupon: str
    :param rootpass: 
    :type rootpass: str
    :param comment: 
    :type comment: str

    :rtype: VpsOrderPutResponse
    """
    return 'do some magic!'


def update_vps_info(id):  # noqa: E501
    """Update VPS Order

    Updates settings on a VPS order. # noqa: E501

    :param id: VPS ID number.
    :type id: str

    :rtype: None
    """
    return 'do some magic!'


def vps_cancel(id):  # noqa: E501
    """Cancel VPS Service

    Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle. # noqa: E501

    :param id: VPS ID number
    :type id: int

    :rtype: InlineResponse20021
    """
    return 'do some magic!'
