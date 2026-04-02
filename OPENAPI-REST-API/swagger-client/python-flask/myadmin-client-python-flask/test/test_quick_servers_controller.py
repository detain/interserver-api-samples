# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

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
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.models.timezone_update import TimezoneUpdate  # noqa: E501
from myadmin-client-python-flask.models.vps_backup_rows import VpsBackupRows  # noqa: E501
from myadmin-client-python-flask.models.vps_templates_list import VpsTemplatesList  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestQuickServersController(BaseTestCase):
    """QuickServersController integration test stubs"""

    def test_add_qs(self):
        """Test case for add_qs

        Place QuickServer Order
        """
        response = self.client.open(
            '/apiv2/qs/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_qs_backup(self):
        """Test case for delete_qs_backup

        Delete QuickServer Backup
        """
        query_string = [('all', 'all_example'),
                        ('file', 'file_example')]
        response = self.client.open(
            '/apiv2/qs/{id}/backups'.format(id=56),
            method='DELETE',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_block_smtp(self):
        """Test case for do_qs_block_smtp

        Block QuickServer SMTP
        """
        response = self.client.open(
            '/apiv2/qs/{id}/block_smtp'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_disable_cd(self):
        """Test case for do_qs_disable_cd

        Disable CD Drive
        """
        response = self.client.open(
            '/apiv2/qs/{id}/disable_cd'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_disable_quota(self):
        """Test case for do_qs_disable_quota

        Disable Quotas
        """
        response = self.client.open(
            '/apiv2/qs/{id}/disable_quota'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_eject_cd(self):
        """Test case for do_qs_eject_cd

        Eject CD Drive
        """
        response = self.client.open(
            '/apiv2/qs/{id}/eject_cd'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_enable_quota(self):
        """Test case for do_qs_enable_quota

        Enable Quotas
        """
        response = self.client.open(
            '/apiv2/qs/{id}/enable_quota'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_restart(self):
        """Test case for do_qs_restart

        Restart QuickServer
        """
        response = self.client.open(
            '/apiv2/qs/{id}/restart'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_start(self):
        """Test case for do_qs_start

        Start QuickServer
        """
        response = self.client.open(
            '/apiv2/qs/{id}/start'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_do_qs_stop(self):
        """Test case for do_qs_stop

        Stop QuickServer
        """
        response = self.client.open(
            '/apiv2/qs/{id}/stop'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_download_qs_backup(self):
        """Test case for download_qs_backup

        Download QuickServer Backup
        """
        body = IdBackupsBody()
        query_string = [('all', 'all_example')]
        data = dict(file='file_example')
        response = self.client.open(
            '/apiv2/qs/{id}/backups'.format(id=56),
            method='PATCH',
            data=json.dumps(body),
            data=data,
            content_type='application/json',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_qs(self):
        """Test case for get_new_qs

        Get QuickServer Ordering Information
        """
        response = self.client.open(
            '/apiv2/qs/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_backups(self):
        """Test case for get_qs_backups

        List QuickServer Backups
        """
        query_string = [('all', 'all_example')]
        response = self.client.open(
            '/apiv2/qs/{id}/backups'.format(id=56),
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_change_hostname(self):
        """Test case for get_qs_change_hostname

        Get QuickServer Hostname
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_hostname'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_change_root_password(self):
        """Test case for get_qs_change_root_password

        Get Change Root Password Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_root_password'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_change_timezone(self):
        """Test case for get_qs_change_timezone

        Get Timezone Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_timezone'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_change_webuzo_password(self):
        """Test case for get_qs_change_webuzo_password

        Webuzo Change Pass Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_webuzo_password'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_info(self):
        """Test case for get_qs_info

        Get QuickServer Order
        """
        response = self.client.open(
            '/apiv2/qs/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_insert_cd(self):
        """Test case for get_qs_insert_cd

        Insert CD Information
        """
        response = self.client.open(
            '/apiv2/qs/{id}/insert_cd'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_invoices(self):
        """Test case for get_qs_invoices

        Get QuickServer Invoices
        """
        response = self.client.open(
            '/apiv2/qs/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_list(self):
        """Test case for get_qs_list

        List QuickServers
        """
        response = self.client.open(
            '/apiv2/qs',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_reinstall_os(self):
        """Test case for get_qs_reinstall_os

        QuickServer Reinstall OS Options
        """
        response = self.client.open(
            '/apiv2/qs/{id}/reinstall_os'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_reset_password(self):
        """Test case for get_qs_reset_password

        Reset QuickServer Password Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/reset_password'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_reverse_dns(self):
        """Test case for get_qs_reverse_dns

        Reverse DNS Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/reverse_dns'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_setup_vnc(self):
        """Test case for get_qs_setup_vnc

        VNC Setup Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/setup_vnc'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_traffic_usage(self):
        """Test case for get_qs_traffic_usage

        Get Traffic Usage
        """
        response = self.client.open(
            '/apiv2/qs/{id}/traffic_usage'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_view_desktop(self):
        """Test case for get_qs_view_desktop

        Get View Desktop Info
        """
        response = self.client.open(
            '/apiv2/qs/{id}/view_desktop'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_qs_welcome_email(self):
        """Test case for get_qs_welcome_email

        Resend QuickServer Welcome Email
        """
        response = self.client.open(
            '/apiv2/qs/{id}/welcome_email'.format(id='id_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_backup(self):
        """Test case for post_qs_backup

        Create QuickServer Backup
        """
        response = self.client.open(
            '/apiv2/qs/{id}/backup'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_change_hostname(self):
        """Test case for post_qs_change_hostname

        Update QuickServer Hostname
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_hostname'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_change_root_password(self):
        """Test case for post_qs_change_root_password

        Change Root Password
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_root_password'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_change_timezone(self):
        """Test case for post_qs_change_timezone

        Change QuickServer Timezone
        """
        body = TimezoneUpdate()
        data = dict(timezone='timezone_example')
        response = self.client.open(
            '/apiv2/qs/{id}/change_timezone'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_change_webuzo_password(self):
        """Test case for post_qs_change_webuzo_password

        Change Webuzo Password
        """
        response = self.client.open(
            '/apiv2/qs/{id}/change_webuzo_password'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_insert_cd(self):
        """Test case for post_qs_insert_cd

        Insert CD in QuickServer
        """
        response = self.client.open(
            '/apiv2/qs/{id}/insert_cd'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_reinstall_os(self):
        """Test case for post_qs_reinstall_os

        Reinstall QuickServer OS
        """
        response = self.client.open(
            '/apiv2/qs/{id}/reinstall_os'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_reset_password(self):
        """Test case for post_qs_reset_password

        Reset QuickServer Password
        """
        response = self.client.open(
            '/apiv2/qs/{id}/reset_password'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_reverse_dns(self):
        """Test case for post_qs_reverse_dns

        Update Reverse DNS
        """
        body = ReverseDnsEntries()
        data = dict(ips=None)
        response = self.client.open(
            '/apiv2/qs/{id}/reverse_dns'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_setup_vnc(self):
        """Test case for post_qs_setup_vnc

        Setup VNC
        """
        response = self.client.open(
            '/apiv2/qs/{id}/setup_vnc'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_traffic_usage(self):
        """Test case for post_qs_traffic_usage

        Search Traffic Usage
        """
        response = self.client.open(
            '/apiv2/qs/{id}/traffic_usage'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_qs_view_desktop(self):
        """Test case for post_qs_view_desktop

        Update View Desktop
        """
        response = self.client.open(
            '/apiv2/qs/{id}/view_desktop'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_quick_server_restore(self):
        """Test case for post_quick_server_restore

        Restore QuickServer from Backup
        """
        body = RestoreRequest()
        data = dict(backup='backup_example',
                    password='password_example')
        response = self.client.open(
            '/apiv2/qs/{id}/restore'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_qs(self):
        """Test case for put_qs

        Validate QuickServer Order
        """
        response = self.client.open(
            '/apiv2/qs/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_quickservers_cancel(self):
        """Test case for quickservers_cancel

        Cancel QuickServer Order
        """
        response = self.client.open(
            '/apiv2/qs/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_qs_info(self):
        """Test case for update_qs_info

        Update QuickServer Order
        """
        response = self.client.open(
            '/apiv2/qs/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
