# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.buy_it_now_list import BuyItNowList  # noqa: E501
from myadmin-client-python-flask.models.captcha_response import CaptchaResponse  # noqa: E501
from myadmin-client-python-flask.models.inline_response2005 import InlineResponse2005  # noqa: E501
from myadmin-client-python-flask.models.inline_response2006 import InlineResponse2006  # noqa: E501
from myadmin-client-python-flask.models.inline_response2007 import InlineResponse2007  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.login_error_response import LoginErrorResponse  # noqa: E501
from myadmin-client-python-flask.models.login_info import LoginInfo  # noqa: E501
from myadmin-client-python-flask.models.login_submission_example import LoginSubmissionExample  # noqa: E501
from myadmin-client-python-flask.models.login_submission_example_grecaptcharesponse import LoginSubmissionExampleGrecaptcharesponse  # noqa: E501
from myadmin-client-python-flask.models.login_success_response import LoginSuccessResponse  # noqa: E501
from myadmin-client-python-flask.models.oauth_body import OauthBody  # noqa: E501
from myadmin-client-python-flask.models.oauth_body2 import OauthBody2  # noqa: E501
from myadmin-client-python-flask.models.services_info import ServicesInfo  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestPublicController(BaseTestCase):
    """PublicController integration test stubs"""

    def test_get_captcha(self):
        """Test case for get_captcha

        Get Captcha Challenge
        """
        response = self.client.open(
            '/apiv2/captcha',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_countries(self):
        """Test case for get_countries

        Get Countries
        """
        query_string = [('fetch_by', 'fetch_by_example')]
        response = self.client.open(
            '/apiv2/account/countries',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_info(self):
        """Test case for get_info

        Get Server Info
        """
        response = self.client.open(
            '/apiv2/info',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_login_info(self):
        """Test case for get_login_info

        Get Login Info
        """
        response = self.client.open(
            '/apiv2/login',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mp_servers(self):
        """Test case for get_mp_servers

        List Marketplace Servers
        """
        response = self.client.open(
            '/apiv2/buy_now_servers_list',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_oauth_redirect(self):
        """Test case for get_oauth_redirect

        Get OAuth Redirect URL
        """
        query_string = [('provider', 'provider_example')]
        response = self.client.open(
            '/apiv2/oauth',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_timezones(self):
        """Test case for get_timezones

        Get Available Timezones
        """
        response = self.client.open(
            '/apiv2/account/timezones',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_patch_oauth_two_factor(self):
        """Test case for patch_oauth_two_factor

        Complete OAuth Two-Factor Verification
        """
        body = OauthBody2()
        data = dict(account_id=56,
                    code='code_example')
        response = self.client.open(
            '/apiv2/oauth',
            method='PATCH',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_ping_server(self):
        """Test case for ping_server

        Ping Server
        """
        response = self.client.open(
            '/apiv2/ping',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_oauth_callback(self):
        """Test case for post_oauth_callback

        OAuth Callback
        """
        body = OauthBody()
        query_string = [('provider', 'provider_example')]
        data = dict(provider='provider_example')
        response = self.client.open(
            '/apiv2/oauth',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_submit_login(self):
        """Test case for submit_login

        Submit Login Information
        """
        body = LoginSubmissionExample()
        data = dict(login='login_example',
                    passwd='passwd_example',
                    remember='remember_example',
                    g_recaptcha_response=LoginSubmissionExampleGrecaptcharesponse(),
                    tfa='tfa_example')
        response = self.client.open(
            '/apiv2/login',
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_submit_signup(self):
        """Test case for submit_signup

        Submit Signup Information
        """
        body = LoginSubmissionExample()
        response = self.client.open(
            '/apiv2/signup',
            method='POST',
            data=json.dumps(body),
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
