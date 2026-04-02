# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response20021 import InlineResponse20021  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestSSLCertificatesController(BaseTestCase):
    """SSLCertificatesController integration test stubs"""

    def test_add_ssl(self):
        """Test case for add_ssl

        Place SSL Cert Order
        """
        response = self.client.open(
            '/apiv2/ssl/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_ssl(self):
        """Test case for get_new_ssl

        SSL Cert Ordering Information
        """
        response = self.client.open(
            '/apiv2/ssl/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_ssl_info(self):
        """Test case for get_ssl_info

        Get SSL Cert Info
        """
        response = self.client.open(
            '/apiv2/ssl/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_ssl_invoices(self):
        """Test case for get_ssl_invoices

        Get SSL Cert Invoices
        """
        response = self.client.open(
            '/apiv2/ssl/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_ssl_list(self):
        """Test case for get_ssl_list

        List SSL Certs
        """
        response = self.client.open(
            '/apiv2/ssl',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_ssl_welcome_email(self):
        """Test case for get_ssl_welcome_email

        Resend SSL Welcome Email
        """
        response = self.client.open(
            '/apiv2/ssl/{id}/welcome_email'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_ssl(self):
        """Test case for put_ssl

        Validate SSL Cert Order
        """
        response = self.client.open(
            '/apiv2/ssl/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_ssl_cancel(self):
        """Test case for ssl_cancel

        Cancel SSL Certificate Service
        """
        response = self.client.open(
            '/apiv2/ssl/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_ssl_info(self):
        """Test case for update_ssl_info

        Update SSL Cert Order
        """
        response = self.client.open(
            '/apiv2/ssl/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
