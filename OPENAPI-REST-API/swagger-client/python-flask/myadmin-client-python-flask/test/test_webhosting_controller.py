# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.id_buy_ip_body import IdBuyIpBody  # noqa: E501
from myadmin-client-python-flask.models.id_migration_body import IdMigrationBody  # noqa: E501
from myadmin-client-python-flask.models.inline_response20023 import InlineResponse20023  # noqa: E501
from myadmin-client-python-flask.models.inline_response20024 import InlineResponse20024  # noqa: E501
from myadmin-client-python-flask.models.inline_response20025 import InlineResponse20025  # noqa: E501
from myadmin-client-python-flask.models.inline_response20026 import InlineResponse20026  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.reverse_dns_entries import ReverseDnsEntries  # noqa: E501
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.models.website import Website  # noqa: E501
from myadmin-client-python-flask.models.website_backups import WebsiteBackups  # noqa: E501
from myadmin-client-python-flask.models.website_login_response import WebsiteLoginResponse  # noqa: E501
from myadmin-client-python-flask.models.website_row import WebsiteRow  # noqa: E501
from myadmin-client-python-flask.models.websites_order import WebsitesOrder  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestWebhostingController(BaseTestCase):
    """WebhostingController integration test stubs"""

    def test_add_website(self):
        """Test case for add_website

        Place Website Order
        """
        response = self.client.open(
            '/apiv2/websites/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_website(self):
        """Test case for get_new_website

        Website Ordering Information
        """
        response = self.client.open(
            '/apiv2/websites/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_website_buy_ip(self):
        """Test case for get_website_buy_ip

        Get Website IP Information
        """
        response = self.client.open(
            '/apiv2/websites/{id}/buy_ip'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_website_info(self):
        """Test case for get_website_info

        Get Website Order
        """
        response = self.client.open(
            '/apiv2/websites/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_website_invoices(self):
        """Test case for get_website_invoices

        Get Website Invoices
        """
        response = self.client.open(
            '/apiv2/websites/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_website_list(self):
        """Test case for get_website_list

        Get Website Listing
        """
        response = self.client.open(
            '/apiv2/websites',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_websites_backups(self):
        """Test case for get_websites_backups

        Get Website Backups
        """
        response = self.client.open(
            '/apiv2/websites/{id}/backups'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_websites_login(self):
        """Test case for get_websites_login

        Hosting Panel Auto Login
        """
        response = self.client.open(
            '/apiv2/websites/{id}/login'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_websites_welcome_email(self):
        """Test case for get_websites_welcome_email

        Resend Website Welcome Email
        """
        response = self.client.open(
            '/apiv2/websites/{id}/welcome_email'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_gett_website_reverse_dns(self):
        """Test case for gett_website_reverse_dns

        Get Website Reverse DNS
        """
        response = self.client.open(
            '/apiv2/websites/{id}/reverse_dns'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_website_buy_ip(self):
        """Test case for post_website_buy_ip

        Update Website IP DNS
        """
        body = IdBuyIpBody()
        data = dict(ips={'key': 'ips_example'})
        response = self.client.open(
            '/apiv2/websites/{id}/buy_ip'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_website_migration(self):
        """Test case for post_website_migration

        Request Website Migration
        """
        body = IdMigrationBody()
        data = dict(cust_portal='cust_portal_example',
                    reg_email='reg_email_example',
                    password='password_example',
                    ctrl_panel='ctrl_panel_example',
                    ftp_username='ftp_username_example',
                    ftp_password='ftp_password_example',
                    site_busy_mig='site_busy_mig_example',
                    spl_req_mig='spl_req_mig_example',
                    domain_reg='domain_reg_example',
                    data_mig='data_mig_example',
                    domain_reg_portal='domain_reg_portal_example',
                    domain_reg_email='domain_reg_email_example',
                    domain_reg_password='domain_reg_password_example')
        response = self.client.open(
            '/apiv2/websites/{id}/migration'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_websites_reverse_dns(self):
        """Test case for post_websites_reverse_dns

        Update Website Reverse DNS
        """
        body = ReverseDnsEntries()
        data = dict(ips=None)
        response = self.client.open(
            '/apiv2/websites/{id}/reverse_dns'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_websites(self):
        """Test case for put_websites

        Validate Webhosting Order
        """
        response = self.client.open(
            '/apiv2/websites/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_website_info(self):
        """Test case for update_website_info

        Update Website Order
        """
        response = self.client.open(
            '/apiv2/websites/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_webhosting_cancel(self):
        """Test case for webhosting_cancel

        Cancel Website
        """
        response = self.client.open(
            '/apiv2/websites/{id}'.format(id='id_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
