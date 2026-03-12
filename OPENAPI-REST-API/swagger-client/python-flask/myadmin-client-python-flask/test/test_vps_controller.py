# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

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
from myadmin-client-python-flask.test import BaseTestCase


class TestVPSController(BaseTestCase):
    """VPSController integration test stubs"""

    def test_add_vps(self):
        """Test case for add_vps

        Place VPS Order
        """
        body = VpsOrderPostRequest()
        data = dict(os_distro='os_distro_example',
                    slices=32,
                    vps_platform='vps_platform_example',
                    controlpanel='controlpanel_example',
                    period=12,
                    location=3,
                    os_version='os_version_example',
                    hostname='hostname_example',
                    coupon='coupon_example',
                    rootpass='rootpass_example',
                    comment='comment_example')
        response = self.client.open(
            '/apiv2/vps/order',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_vps_backup(self):
        """Test case for delete_vps_backup

        Delete VPS Backup
        """
        query_string = [('all', 'all_example'),
                        ('file', 'file_example')]
        response = self.client.open(
            '/apiv2/vps/{id}/backups'.format(id=56),
            method='DELETE',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_block_smtp(self):
        """Test case for do_vps_block_smtp

        Blocks SMTP
        """
        response = self.client.open(
            '/apiv2/vps/{id}/block_smtp'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_disable_cd(self):
        """Test case for do_vps_disable_cd

        Disable CD Drive
        """
        response = self.client.open(
            '/apiv2/vps/{id}/disable_cd'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_disable_quota(self):
        """Test case for do_vps_disable_quota

        Disable Quotas
        """
        response = self.client.open(
            '/apiv2/vps/{id}/disable_quota'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_eject_cd(self):
        """Test case for do_vps_eject_cd

        Eject CD Drive
        """
        response = self.client.open(
            '/apiv2/vps/{id}/eject_cd'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_enable_quota(self):
        """Test case for do_vps_enable_quota

        Enable Quotas
        """
        response = self.client.open(
            '/apiv2/vps/{id}/enable_quota'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_restart(self):
        """Test case for do_vps_restart

        Restart VPS
        """
        response = self.client.open(
            '/apiv2/vps/{id}/restart'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_start(self):
        """Test case for do_vps_start

        Start VPS
        """
        response = self.client.open(
            '/apiv2/vps/{id}/start'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_vps_stop(self):
        """Test case for do_vps_stop

        Stop VPS
        """
        response = self.client.open(
            '/apiv2/vps/{id}/stop'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_download_vps_backup(self):
        """Test case for download_vps_backup

        Download VPS Backup
        """
        body = IdBackupsBody2()
        query_string = [('all', 'all_example')]
        data = dict(file='file_example')
        response = self.client.open(
            '/apiv2/vps/{id}/backups'.format(id=56),
            method='PATCH',
            data=json.dumps(body),
            data=data,
            content_type='application/json',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_vps(self):
        """Test case for get_new_vps

        VPS Ordering Information
        """
        response = self.client.open(
            '/apiv2/vps/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_backups(self):
        """Test case for get_vps_backups

        Get VPS Backups List
        """
        query_string = [('all', 'all_example')]
        response = self.client.open(
            '/apiv2/vps/{id}/backups'.format(id=56),
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_buy_hd_space(self):
        """Test case for get_vps_buy_hd_space

        HD Space Addon Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/buy_hd_space'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_buy_ip(self):
        """Test case for get_vps_buy_ip

        Additional IP Addon Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/buy_ip'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_change_timezone(self):
        """Test case for get_vps_change_timezone

        Get Timezone Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/change_timezone'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_info(self):
        """Test case for get_vps_info

        Get VPS Order
        """
        response = self.client.open(
            '/apiv2/vps/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_invoices(self):
        """Test case for get_vps_invoices

        Get VPS Invoices
        """
        response = self.client.open(
            '/apiv2/vps/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_list(self):
        """Test case for get_vps_list

        List VPS Orders
        """
        response = self.client.open(
            '/apiv2/vps',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_reinstall_os(self):
        """Test case for get_vps_reinstall_os

        VPS Reinstall OS Options
        """
        response = self.client.open(
            '/apiv2/vps/{id}/reinstall_os'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_reverse_dns(self):
        """Test case for get_vps_reverse_dns

        Reverse DNS Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/reverse_dns'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_setup_vnc(self):
        """Test case for get_vps_setup_vnc

        VNC Setup Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/setup_vnc'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_slices(self):
        """Test case for get_vps_slices

        Slice Upgrade Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/slices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_traffic_usage(self):
        """Test case for get_vps_traffic_usage

        Get Traffic Usage
        """
        response = self.client.open(
            '/apiv2/vps/{id}/traffic_usage'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_view_desktop(self):
        """Test case for get_vps_view_desktop

        Get View Desktop Info
        """
        response = self.client.open(
            '/apiv2/vps/{id}/view_desktop'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_vps_welcome_email(self):
        """Test case for get_vps_welcome_email

        Resend VPS Welcome Email
        """
        response = self.client.open(
            '/apiv2/vps/{id}/welcome_email'.format(id='id_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_backup(self):
        """Test case for post_vps_backup

        Start a VPS Backup
        """
        response = self.client.open(
            '/apiv2/vps/{id}/backup'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_buy_hd_space(self):
        """Test case for post_vps_buy_hd_space

        Purchase HD Space Addon
        """
        response = self.client.open(
            '/apiv2/vps/{id}/buy_hd_space'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_buy_ip(self):
        """Test case for post_vps_buy_ip

        Purchase Additional IP
        """
        response = self.client.open(
            '/apiv2/vps/{id}/buy_ip'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_change_hostname(self):
        """Test case for post_vps_change_hostname

        Update VPS Hostname
        """
        body = HostnameObject()
        data = dict(hostname='hostname_example')
        response = self.client.open(
            '/apiv2/vps/{id}/change_hostname'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_change_root_password(self):
        """Test case for post_vps_change_root_password

        Change VPS Root Password
        """
        body = PasswordRequest()
        data = dict(password='password_example')
        response = self.client.open(
            '/apiv2/vps/{id}/change_root_password'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_change_timezone(self):
        """Test case for post_vps_change_timezone

        Change VPS Timezone
        """
        body = TimezoneUpdate()
        data = dict(timezone='timezone_example')
        response = self.client.open(
            '/apiv2/vps/{id}/change_timezone'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_change_webuzo_password(self):
        """Test case for post_vps_change_webuzo_password

        Change Webuzo Password
        """
        body = PasswordRequest()
        data = dict(password='password_example')
        response = self.client.open(
            '/apiv2/vps/{id}/change_webuzo_password'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_insert_cd(self):
        """Test case for post_vps_insert_cd

        Insert CD in VPS
        """
        body = UrlRequest()
        data = dict(url='url_example')
        response = self.client.open(
            '/apiv2/vps/{id}/insert_cd'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_reinstall_os(self):
        """Test case for post_vps_reinstall_os

        Reinstall VPS OS
        """
        body = TemplateRequest()
        data = dict(template='template_example',
                    password='password_example',
                    local_password='local_password_example')
        response = self.client.open(
            '/apiv2/vps/{id}/reinstall_os'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_reset_password(self):
        """Test case for post_vps_reset_password

        Reset VPS Password
        """
        response = self.client.open(
            '/apiv2/vps/{id}/reset_password'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_restore(self):
        """Test case for post_vps_restore

        Restore VPS from Backup
        """
        body = RestoreRequest()
        data = dict(backup='backup_example',
                    password='password_example')
        response = self.client.open(
            '/apiv2/vps/{id}/restore'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_reverse_dns(self):
        """Test case for post_vps_reverse_dns

        Update Reverse DNS
        """
        body = ReverseDnsEntries()
        data = dict(ips=None)
        response = self.client.open(
            '/apiv2/vps/{id}/reverse_dns'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_setup_vnc(self):
        """Test case for post_vps_setup_vnc

        Setup VNC
        """
        response = self.client.open(
            '/apiv2/vps/{id}/setup_vnc'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_slices(self):
        """Test case for post_vps_slices

        Purchase Slice Upgrade
        """
        response = self.client.open(
            '/apiv2/vps/{id}/slices'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_vps_view_desktop(self):
        """Test case for post_vps_view_desktop

        Update View Desktop
        """
        response = self.client.open(
            '/apiv2/vps/{id}/view_desktop'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_vps(self):
        """Test case for put_vps

        Validate VPS Order
        """
        body = VpsOrderPutRequest()
        data = dict(os_distro='os_distro_example',
                    slices=32,
                    vps_platform='vps_platform_example',
                    controlpanel='controlpanel_example',
                    period=12,
                    location=3,
                    os_version='os_version_example',
                    hostname='hostname_example',
                    coupon='coupon_example',
                    rootpass='rootpass_example',
                    comment='comment_example')
        response = self.client.open(
            '/apiv2/vps/order',
            method='PUT',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_vps_info(self):
        """Test case for update_vps_info

        Update VPS Order
        """
        response = self.client.open(
            '/apiv2/vps/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_vps_cancel(self):
        """Test case for vps_cancel

        Cancel VPS Service
        """
        response = self.client.open(
            '/apiv2/vps/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
