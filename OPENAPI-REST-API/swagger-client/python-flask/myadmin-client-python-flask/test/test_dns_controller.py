# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.dns_list_item import DnsListItem  # noqa: E501
from myadmin-client-python-flask.models.dns_new_domain import DnsNewDomain  # noqa: E501
from myadmin-client-python-flask.models.dns_new_record import DnsNewRecord  # noqa: E501
from myadmin-client-python-flask.models.dns_record import DnsRecord  # noqa: E501
from myadmin-client-python-flask.models.dns_record_type import DnsRecordType  # noqa: E501
from myadmin-client-python-flask.models.dns_update_record import DnsUpdateRecord  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestDNSController(BaseTestCase):
    """DNSController integration test stubs"""

    def test_add_dns_domain(self):
        """Test case for add_dns_domain

        Create DNS Domain
        """
        body = DnsNewDomain()
        data = dict(domain='domain_example',
                    ip='ip_example')
        response = self.client.open(
            '/apiv2/dns',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_dns_record(self):
        """Test case for add_dns_record

        Add DNS Record to Domain
        """
        body = DnsNewRecord()
        data = dict(name='name_example',
                    type=DnsRecordType(),
                    content='content_example',
                    ttl=56,
                    prio=56)
        response = self.client.open(
            '/apiv2/dns/{id}'.format(id='id_example'),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_dns_domain(self):
        """Test case for delete_dns_domain

        Delete DNS Domain
        """
        response = self.client.open(
            '/apiv2/dns/{id}'.format(id='id_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_dns_record(self):
        """Test case for delete_dns_record

        Delete DNS Record
        """
        response = self.client.open(
            '/apiv2/dns/{domainId}/{recordId}'.format(domain_id=56, record_id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_dns_domain(self):
        """Test case for get_dns_domain

        List Domain DNS Records
        """
        response = self.client.open(
            '/apiv2/dns/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_dns_list(self):
        """Test case for get_dns_list

        List DNS Domains
        """
        response = self.client.open(
            '/apiv2/dns',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_dns_record(self):
        """Test case for update_dns_record

        Update DNS Record
        """
        body = DnsUpdateRecord()
        data = dict(name='name_example',
                    type=DnsRecordType(),
                    content='content_example',
                    ttl='ttl_example',
                    prio='prio_example',
                    disabled='disabled_example',
                    ordername='ordername_example',
                    auth='auth_example')
        response = self.client.open(
            '/apiv2/dns/{domainId}/{recordId}'.format(domain_id=56, record_id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
