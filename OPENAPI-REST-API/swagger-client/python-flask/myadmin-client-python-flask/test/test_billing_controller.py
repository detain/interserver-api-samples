# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.affiliate_banner_row import AffiliateBannerRow  # noqa: E501
from myadmin-client-python-flask.models.affiliate_dock_setup import AffiliateDockSetup  # noqa: E501
from myadmin-client-python-flask.models.affiliate_payment_setup import AffiliatePaymentSetup  # noqa: E501
from myadmin-client-python-flask.models.affiliate_traffic_row import AffiliateTrafficRow  # noqa: E501
from myadmin-client-python-flask.models.billing_add_cc_request import BillingAddCcRequest  # noqa: E501
from myadmin-client-python-flask.models.billing_invoice_detail import BillingInvoiceDetail  # noqa: E501
from myadmin-client-python-flask.models.billing_invoice_list import BillingInvoiceList  # noqa: E501
from myadmin-client-python-flask.models.billing_payment_method_request import BillingPaymentMethodRequest  # noqa: E501
from myadmin-client-python-flask.models.billing_prepay_request import BillingPrepayRequest  # noqa: E501
from myadmin-client-python-flask.models.billing_verify_cc_request import BillingVerifyCcRequest  # noqa: E501
from myadmin-client-python-flask.models.inline_response2009 import InlineResponse2009  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.invoice import Invoice  # noqa: E501
from myadmin-client-python-flask.models.monthly_counts import MonthlyCounts  # noqa: E501
from myadmin-client-python-flask.models.status_monthly_breakdown import StatusMonthlyBreakdown  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestBillingController(BaseTestCase):
    """BillingController integration test stubs"""

    def test_add_account_credit_card(self):
        """Test case for add_account_credit_card

        Add Credit Card to Account
        """
        body = BillingAddCcRequest()
        data = dict(name='name_example',
                    address='address_example',
                    city='city_example',
                    state='state_example',
                    country='country_example',
                    zip='zip_example',
                    cc='cc_example',
                    cc_exp='cc_exp_example',
                    cc_ccv2='cc_ccv2_example')
        response = self.client.open(
            '/apiv2/account/creditcards',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_billing_credit_card(self):
        """Test case for add_billing_credit_card

        Add Credit Card for Billing
        """
        body = BillingAddCcRequest()
        data = dict(name='name_example',
                    address='address_example',
                    city='city_example',
                    state='state_example',
                    country='country_example',
                    zip='zip_example',
                    cc='cc_example',
                    cc_exp='cc_exp_example',
                    cc_ccv2='cc_ccv2_example')
        response = self.client.open(
            '/apiv2/billing/creditcards',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_billing_prepay(self):
        """Test case for add_billing_prepay

        Create Prepay Deposit
        """
        body = BillingPrepayRequest()
        data = dict(module='module_example',
                    amount=1.2,
                    automatic_use='automatic_use_example')
        response = self.client.open(
            '/apiv2/billing/prepays',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_account_credit_card(self):
        """Test case for delete_account_credit_card

        Remove Credit Card
        """
        response = self.client.open(
            '/apiv2/account/creditcards/{id}'.format(id='id_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_billing_credit_card(self):
        """Test case for delete_billing_credit_card

        Delete Credit Card
        """
        response = self.client.open(
            '/apiv2/billing/creditcards/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_billing_invoice(self):
        """Test case for delete_billing_invoice

        Delete Invoice
        """
        response = self.client.open(
            '/apiv2/billing/invoices/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_billing_prepay(self):
        """Test case for delete_billing_prepay

        Delete Prepay Balance
        """
        response = self.client.open(
            '/apiv2/billing/prepays/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_banners(self):
        """Test case for get_affiliate_banners

        List Affiliate Banner Assets
        """
        response = self.client.open(
            '/apiv2/affiliate/banners',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_rich_report(self):
        """Test case for get_affiliate_rich_report

        Get Affiliate Performance Report
        """
        response = self.client.open(
            '/apiv2/affiliate/rich_report',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_sales_graph(self):
        """Test case for get_affiliate_sales_graph

        Get Affiliate Sales Graph Data
        """
        query_string = [('days', 56)]
        response = self.client.open(
            '/apiv2/affiliate/sales_graph',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_sales_report(self):
        """Test case for get_affiliate_sales_report

        Get Affiliate Sales Report
        """
        response = self.client.open(
            '/apiv2/affiliate/sales_report',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_traffic_graph(self):
        """Test case for get_affiliate_traffic_graph

        Get Affiliate Traffic Graph Data
        """
        query_string = [('days', 56)]
        response = self.client.open(
            '/apiv2/affiliate/traffic_graph',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_affiliate_web_traffic(self):
        """Test case for get_affiliate_web_traffic

        List Affiliate Web Traffic Entries
        """
        response = self.client.open(
            '/apiv2/affiliate/web_traffic',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_billing_cart(self):
        """Test case for get_billing_cart

        Get Shopping Cart Contents
        """
        response = self.client.open(
            '/apiv2/billing/cart',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_billing_credit_card_verify(self):
        """Test case for get_billing_credit_card_verify

        Get Credit Card Verification Requirements
        """
        response = self.client.open(
            '/apiv2/billing/creditcards/{id}/verify'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_billing_invoice(self):
        """Test case for get_billing_invoice

        Get Invoice Details
        """
        response = self.client.open(
            '/apiv2/billing/invoices/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_billing_invoices(self):
        """Test case for get_billing_invoices

        List Account Invoices
        """
        response = self.client.open(
            '/apiv2/billing/invoices',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_billing_pre_pays(self):
        """Test case for get_billing_pre_pays

        List Prepay Balances
        """
        response = self.client.open(
            '/apiv2/billing/prepays',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_invoices(self):
        """Test case for get_invoices

        Get Invoices
        """
        query_string = [('search_string', 'search_string_example'),
                        ('skip', 1),
                        ('limit', 50)]
        response = self.client.open(
            '/apiv2/invoices',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_initiate_payment(self):
        """Test case for initiate_payment

        Initiate Payment
        """
        response = self.client.open(
            '/apiv2/pay/{method}/{invoices}'.format(method='method_example', invoices='invoices_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_billing_credit_card_verify(self):
        """Test case for post_billing_credit_card_verify

        Submit Credit Card Verification
        """
        body = BillingVerifyCcRequest()
        data = dict(idx=56,
                    cc_ccv2='cc_ccv2_example',
                    cc_amount1='cc_amount1_example',
                    cc_amount2='cc_amount2_example',
                    terms=true)
        response = self.client.open(
            '/apiv2/billing/creditcards/{id}/verify'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_credit_card(self):
        """Test case for update_account_credit_card

        Update Credit Card
        """
        response = self.client.open(
            '/apiv2/account/creditcards/{id}'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_affiliate_dock_setup(self):
        """Test case for update_affiliate_dock_setup

        Configure Affiliate Dock Settings
        """
        body = AffiliateDockSetup()
        data = dict(affiliate_dock_title='affiliate_dock_title_example',
                    affiliate_dock_description='affiliate_dock_description_example',
                    referrer_coupon='referrer_coupon_example')
        response = self.client.open(
            '/apiv2/affiliate/dock_setup',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_affiliate_landing_page(self):
        """Test case for update_affiliate_landing_page

        Configure Affiliate Landing Page
        """
        body = AffiliateDockSetup()
        data = dict(affiliate_dock_title='affiliate_dock_title_example',
                    affiliate_dock_description='affiliate_dock_description_example',
                    referrer_coupon='referrer_coupon_example')
        response = self.client.open(
            '/apiv2/affiliate/landing_pg',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_affiliate_payment_setup(self):
        """Test case for update_affiliate_payment_setup

        Configure Affiliate Payout Preferences
        """
        body = AffiliatePaymentSetup()
        data = dict(affiliate_paypal='affiliate_paypal_example',
                    affiliate_payment_method='affiliate_payment_method_example')
        response = self.client.open(
            '/apiv2/affiliate/payment_setup',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_billing_credit_card(self):
        """Test case for update_billing_credit_card

        Update Credit Card Details
        """
        response = self.client.open(
            '/apiv2/billing/creditcards/{id}'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_billing_payment_method(self):
        """Test case for update_billing_payment_method

        Update Default Payment Method
        """
        body = BillingPaymentMethodRequest()
        data = dict(payment_method='payment_method_example',
                    cc_auto='cc_auto_example')
        response = self.client.open(
            '/apiv2/billing/payment_method',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
