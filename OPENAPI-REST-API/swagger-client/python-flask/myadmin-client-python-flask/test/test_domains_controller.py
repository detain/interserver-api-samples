# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.domain import Domain  # noqa: E501
from myadmin-client-python-flask.models.domain_contact_details import DomainContactDetails  # noqa: E501
from myadmin-client-python-flask.models.domain_dnssec_records import DomainDnssecRecords  # noqa: E501
from myadmin-client-python-flask.models.domain_dnssec_request import DomainDnssecRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_lookup_response import DomainLookupResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_get_response import DomainNameserverGetResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_post_request import DomainNameserverPostRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_nameserver_put_request import DomainNameserverPutRequest  # noqa: E501
from myadmin-client-python-flask.models.domain_order import DomainOrder  # noqa: E501
from myadmin-client-python-flask.models.domain_row import DomainRow  # noqa: E501
from myadmin-client-python-flask.models.domain_search_response import DomainSearchResponse  # noqa: E501
from myadmin-client-python-flask.models.domain_whois_privacy_request import DomainWhoisPrivacyRequest  # noqa: E501
from myadmin-client-python-flask.models.inline_response2002 import InlineResponse2002  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestDomainsController(BaseTestCase):
    """DomainsController integration test stubs"""

    def test_add_domain(self):
        """Test case for add_domain

        Place Domain Order
        """
        response = self.client.open(
            '/apiv2/domains/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_domain_dnssec(self):
        """Test case for add_domain_dnssec

        Add Domain DNSSEC Records
        """
        body = DomainDnssecRequest()
        data = dict(algorithm=56,
                    digest_type=56,
                    digest='digest_example',
                    key_tag=56)
        response = self.client.open(
            '/apiv2/domains/{id}/dnssec'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_domain_nameserver(self):
        """Test case for add_domain_nameserver

        Add Registered Nameserver
        """
        body = DomainNameserverPostRequest()
        data = dict(name='name_example',
                    ip_address='ip_address_example')
        response = self.client.open(
            '/apiv2/domains/{id}/nameservers'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_cancel_domain(self):
        """Test case for cancel_domain

        Cancel Domain Order
        """
        response = self.client.open(
            '/apiv2/domains/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_domain_dnssec(self):
        """Test case for delete_domain_dnssec

        Remove Domain DNSSEC Records
        """
        query_string = [('action', 'action_example')]
        response = self.client.open(
            '/apiv2/domains/{id}/dnssec'.format(id=56),
            method='DELETE',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_domain_nameserver(self):
        """Test case for delete_domain_nameserver

        Delete Registered Nameserver
        """
        query_string = [('index', 56)]
        response = self.client.open(
            '/apiv2/domains/{id}/nameservers'.format(id=56),
            method='DELETE',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_contact(self):
        """Test case for get_domain_contact

        Get Domain Contact Details
        """
        response = self.client.open(
            '/apiv2/domains/{id}/contact'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_dnssec(self):
        """Test case for get_domain_dnssec

        Get Domain DNSSEC Records
        """
        response = self.client.open(
            '/apiv2/domains/{id}/dnssec'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_info(self):
        """Test case for get_domain_info

        Get Domain Order
        """
        response = self.client.open(
            '/apiv2/domains/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_invoices(self):
        """Test case for get_domain_invoices

        Get Domain Invoices
        """
        response = self.client.open(
            '/apiv2/domains/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_lookup(self):
        """Test case for get_domain_lookup

        Lookup Domain Availability and Pricing
        """
        response = self.client.open(
            '/apiv2/domains/lookup/{name}'.format(name='name_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_nameservers(self):
        """Test case for get_domain_nameservers

        List Registered Nameservers
        """
        response = self.client.open(
            '/apiv2/domains/{id}/nameservers'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_order_fields(self):
        """Test case for get_domain_order_fields

        Get Domain Order Fields
        """
        response = self.client.open(
            '/apiv2/domains/order/{domain}/{regType}'.format(domain='domain_example', reg_type='reg_type_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_order_search_results(self):
        """Test case for get_domain_order_search_results

        Get Domain Order Search Results
        """
        response = self.client.open(
            '/apiv2/domains/order/{domain}'.format(domain='domain_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_renewal(self):
        """Test case for get_domain_renewal

        Start Domain Renewal Flow
        """
        response = self.client.open(
            '/apiv2/domains/{id}/renew'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_search(self):
        """Test case for get_domain_search

        Search Domain Suggestions
        """
        response = self.client.open(
            '/apiv2/domains/search/{name}'.format(name='name_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_transfer(self):
        """Test case for get_domain_transfer

        Start Domain Transfer Flow
        """
        response = self.client.open(
            '/apiv2/domains/{id}/transfer'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domain_whois_privacy(self):
        """Test case for get_domain_whois_privacy

        Get Whois Privacy Status
        """
        response = self.client.open(
            '/apiv2/domains/{id}/whois'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domains_list(self):
        """Test case for get_domains_list

        List Domain Orders
        """
        response = self.client.open(
            '/apiv2/domains',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_domains_welcome_email(self):
        """Test case for get_domains_welcome_email

        Resend Domain Welcome Email
        """
        response = self.client.open(
            '/apiv2/domains/{id}/welcome_email'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_domain(self):
        """Test case for get_new_domain

        Get Domain Ordering Information
        """
        response = self.client.open(
            '/apiv2/domains/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_patch_domains(self):
        """Test case for patch_domains

        Validate Domain Order
        """
        response = self.client.open(
            '/apiv2/domains/order',
            method='PATCH')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_domain_renewal(self):
        """Test case for post_domain_renewal

        Request Domain Renewal
        """
        response = self.client.open(
            '/apiv2/domains/{id}/renew'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_domain_transfer(self):
        """Test case for post_domain_transfer

        Request Domain Transfer
        """
        response = self.client.open(
            '/apiv2/domains/{id}/transfer'.format(id=56),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_domains(self):
        """Test case for put_domains

        Domain Order Search
        """
        response = self.client.open(
            '/apiv2/domains/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_domain_contact(self):
        """Test case for update_domain_contact

        Update Domain Contact Details
        """
        body = DomainContactDetails()
        data = dict(status='status_example',
                    state='state_example',
                    org_name='org_name_example',
                    country='country_example',
                    postal_code='postal_code_example',
                    email='email_example',
                    fax='fax_example',
                    address2='address2_example',
                    address3='address3_example',
                    address1='address1_example',
                    city='city_example',
                    phone='phone_example',
                    first_name='first_name_example',
                    last_name='last_name_example')
        response = self.client.open(
            '/apiv2/domains/{id}/contact'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_domain_info(self):
        """Test case for update_domain_info

        Update Domain Order
        """
        response = self.client.open(
            '/apiv2/domains/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_domain_nameservers(self):
        """Test case for update_domain_nameservers

        Replace Nameserver Set
        """
        body = DomainNameserverPutRequest()
        data = dict(nameserver='nameserver_example')
        response = self.client.open(
            '/apiv2/domains/{id}/nameservers'.format(id=56),
            method='PUT',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_domain_whois_privacy(self):
        """Test case for update_domain_whois_privacy

        Update Whois Privacy
        """
        body = DomainWhoisPrivacyRequest()
        data = dict(func='func_example',
                    csrf_token='csrf_token_example',
                    domain_firstname='domain_firstname_example',
                    domain_lastname='domain_lastname_example',
                    domain_email='domain_email_example',
                    domain_address='domain_address_example',
                    domain_address2='domain_address2_example',
                    domain_address3='domain_address3_example',
                    domain_city='domain_city_example',
                    domain_state='domain_state_example',
                    domain_zip='domain_zip_example',
                    domain_country='domain_country_example',
                    domain_phone='domain_phone_example',
                    domain_fax='domain_fax_example',
                    domain_company='domain_company_example',
                    domain_extra='domain_extra_example')
        response = self.client.open(
            '/apiv2/domains/{id}/whois'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
