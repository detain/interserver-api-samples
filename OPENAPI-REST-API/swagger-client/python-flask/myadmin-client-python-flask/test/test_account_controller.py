# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.account2fa_body1 import Account2faBody1  # noqa: E501
from myadmin-client-python-flask.models.account_features import AccountFeatures  # noqa: E501
from myadmin-client-python-flask.models.account_info import AccountInfo  # noqa: E501
from myadmin-client-python-flask.models.account_info_post import AccountInfoPost  # noqa: E501
from myadmin-client-python-flask.models.account_ssh_key import AccountSshKey  # noqa: E501
from myadmin-client-python-flask.models.generic_response import GenericResponse  # noqa: E501
from myadmin-client-python-flask.models.home import Home  # noqa: E501
from myadmin-client-python-flask.models.inline_response200 import InlineResponse200  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.ip_limit_range import IpLimitRange  # noqa: E501
from myadmin-client-python-flask.models.password_request import PasswordRequest  # noqa: E501
from myadmin-client-python-flask.models.search_autocomplete_response import SearchAutocompleteResponse  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.models.text_response import TextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestAccountController(BaseTestCase):
    """AccountController integration test stubs"""

    def test_change_account_username(self):
        """Test case for change_account_username

        Change Account Username
        """
        response = self.client.open(
            '/apiv2/account/username',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_account_oauth_name(self):
        """Test case for delete_account_oauth_name

        Unlink OAuth Account
        """
        response = self.client.open(
            '/apiv2/account/oauth/{name}'.format(name='name_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_account_tfa(self):
        """Test case for delete_account_tfa

        Disable Two-Factor Authentication
        """
        response = self.client.open(
            '/apiv2/account/2fa',
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_ip_limit(self):
        """Test case for delete_ip_limit

        Remove IP Access Restriction
        """
        response = self.client.open(
            '/apiv2/account/iplimits',
            method='PATCH',
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_account_info(self):
        """Test case for get_account_info

        Retrieve Account Details
        """
        response = self.client.open(
            '/apiv2/account',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_account_tfa_setup(self):
        """Test case for get_account_tfa_setup

        Get Two-Factor Setup Data
        """
        response = self.client.open(
            '/apiv2/account/2fa',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_home(self):
        """Test case for get_home

        Get Home Data
        """
        response = self.client.open(
            '/apiv2/home',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_search(self):
        """Test case for get_search

        Search Autocomplete
        """
        response = self.client.open(
            '/apiv2/search',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_logout(self):
        """Test case for logout

        Log Out
        """
        response = self.client.open(
            '/apiv2/logout',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_logout_account_oauth(self):
        """Test case for logout_account_oauth

        Logout of OAuth
        """
        response = self.client.open(
            '/apiv2/account/oauth/{name}/logout'.format(name='name_example'),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_api_key(self):
        """Test case for update_account_api_key

        Generate New API Key
        """
        response = self.client.open(
            '/apiv2/account/apikey',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_features(self):
        """Test case for update_account_features

        Update Account Feature Flags
        """
        body = AccountFeatures()
        data = dict(disable_reset=56,
                    disable_reinstall=56)
        response = self.client.open(
            '/apiv2/account/features',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_info(self):
        """Test case for update_account_info

        Update Account Information
        """
        body = AccountInfoPost()
        data = dict(name='name_example',
                    company='company_example',
                    address='address_example',
                    address2='address2_example',
                    city='city_example',
                    state='state_example',
                    zip='zip_example',
                    country='country_example',
                    phone='phone_example',
                    locale='locale_example',
                    email_invoices='email_invoices_example',
                    email_abuse='email_abuse_example',
                    disable_reset=true,
                    disable_reinstall=true,
                    disable_server_notifications=true,
                    disable_email_notifications=true,
                    gstin='gstin_example')
        response = self.client.open(
            '/apiv2/account',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_ip_limits(self):
        """Test case for update_account_ip_limits

        Add IP Access Restriction
        """
        body = IpLimitRange()
        data = dict(start='start_example',
                    end='end_example')
        response = self.client.open(
            '/apiv2/account/iplimits',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_password(self):
        """Test case for update_account_password

        Change Account Password
        """
        body = PasswordRequest()
        data = dict(password='password_example')
        response = self.client.open(
            '/apiv2/account/password',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_ssh_key(self):
        """Test case for update_account_ssh_key

        Update SSH Keys
        """
        body = AccountSshKey()
        data = dict(ssh_key='ssh_key_example')
        response = self.client.open(
            '/apiv2/account/sshkey',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_account_tfa(self):
        """Test case for update_account_tfa

        Enable Two-Factor Authentication
        """
        body = Account2faBody1()
        data = dict(_2fa_google_code='_2fa_google_code_example')
        response = self.client.open(
            '/apiv2/account/2fa',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
