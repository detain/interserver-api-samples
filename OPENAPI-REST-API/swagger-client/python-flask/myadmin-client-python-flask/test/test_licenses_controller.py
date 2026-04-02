# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.inline_response2004 import InlineResponse2004  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.ip_object import IpObject  # noqa: E501
from myadmin-client-python-flask.models.license import License  # noqa: E501
from myadmin-client-python-flask.models.license_row import LicenseRow  # noqa: E501
from myadmin-client-python-flask.models.licenses_order import LicensesOrder  # noqa: E501
from myadmin-client-python-flask.models.service_order_post_response import ServiceOrderPostResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestLicensesController(BaseTestCase):
    """LicensesController integration test stubs"""

    def test_add_license(self):
        """Test case for add_license

        Place License Order
        """
        response = self.client.open(
            '/apiv2/licenses/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_license_info(self):
        """Test case for get_license_info

        Get License
        """
        response = self.client.open(
            '/apiv2/licenses/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_license_invoices(self):
        """Test case for get_license_invoices

        Get License Invoices
        """
        response = self.client.open(
            '/apiv2/licenses/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_license_list(self):
        """Test case for get_license_list

        List Licenses
        """
        response = self.client.open(
            '/apiv2/licenses',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_license_order_cat_tag_info(self):
        """Test case for get_license_order_cat_tag_info

        Get License Order Information for Category
        """
        response = self.client.open(
            '/apiv2/licenses/order/{catTag}'.format(cat_tag='cat_tag_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_licenses_welcome_email(self):
        """Test case for get_licenses_welcome_email

        Resend License Welcome Email
        """
        response = self.client.open(
            '/apiv2/licenses/{id}/welcome_email'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_license(self):
        """Test case for get_new_license

        Get License Order Information
        """
        response = self.client.open(
            '/apiv2/licenses/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_licenses_cancel(self):
        """Test case for licenses_cancel

        Cancel License
        """
        response = self.client.open(
            '/apiv2/licenses/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_license_change_ip(self):
        """Test case for post_license_change_ip

        Change License IP
        """
        body = IpObject()
        data = dict(ip='ip_example')
        response = self.client.open(
            '/apiv2/licenses/{id}/change_ip'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_licenses(self):
        """Test case for put_licenses

        Validate License Order
        """
        response = self.client.open(
            '/apiv2/licenses/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_license_info(self):
        """Test case for update_license_info

        Update License
        """
        response = self.client.open(
            '/apiv2/licenses/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
