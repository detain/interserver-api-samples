# coding: utf-8

from __future__ import absolute_import

from flask import json
from six import BytesIO

from myadmin-client-python-flask.models.charge_invoice_rows import ChargeInvoiceRows  # noqa: E501
from myadmin-client-python-flask.models.deny_rule_new import DenyRuleNew  # noqa: E501
from myadmin-client-python-flask.models.deny_rule_record import DenyRuleRecord  # noqa: E501
from myadmin-client-python-flask.models.email_address import EmailAddress  # noqa: E501
from myadmin-client-python-flask.models.email_address_name import EmailAddressName  # noqa: E501
from myadmin-client-python-flask.models.generic_response import GenericResponse  # noqa: E501
from myadmin-client-python-flask.models.inline_response2008 import InlineResponse2008  # noqa: E501
from myadmin-client-python-flask.models.inline_response401 import InlineResponse401  # noqa: E501
from myadmin-client-python-flask.models.mail_alert_request import MailAlertRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_alert_update_request import MailAlertUpdateRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_alerts_response import MailAlertsResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_attachment import MailAttachment  # noqa: E501
from myadmin-client-python-flask.models.mail_blocks import MailBlocks  # noqa: E501
from myadmin-client-python-flask.models.mail_delist_request import MailDelistRequest  # noqa: E501
from myadmin-client-python-flask.models.mail_delist_response import MailDelistResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_deliverability_response import MailDeliverabilityResponse  # noqa: E501
from myadmin-client-python-flask.models.mail_log import MailLog  # noqa: E501
from myadmin-client-python-flask.models.mail_order import MailOrder  # noqa: E501
from myadmin-client-python-flask.models.mail_row import MailRow  # noqa: E501
from myadmin-client-python-flask.models.mail_schema import MailSchema  # noqa: E501
from myadmin-client-python-flask.models.mail_stats_type import MailStatsType  # noqa: E501
from myadmin-client-python-flask.models.send_mail import SendMail  # noqa: E501
from myadmin-client-python-flask.models.send_mail_adv import SendMailAdv  # noqa: E501
from myadmin-client-python-flask.models.success_text_response import SuccessTextResponse  # noqa: E501
from myadmin-client-python-flask.test import BaseTestCase


class TestMailController(BaseTestCase):
    """MailController integration test stubs"""

    def test_add_mail(self):
        """Test case for add_mail

        Place Mail Order
        """
        response = self.client.open(
            '/apiv2/mail/order',
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_add_rule(self):
        """Test case for add_rule

        Create Deny Rule
        """
        body = DenyRuleNew()
        data = dict(user='user_example',
                    type='type_example',
                    data='data_example')
        response = self.client.open(
            '/apiv2/mail/{id}/rules'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_create_mail_alert(self):
        """Test case for create_mail_alert

        Create Mail Alert
        """
        body = MailAlertRequest()
        data = dict(type='type_example',
                    value='value_example',
                    to='to_example',
                    enabled='enabled_example')
        response = self.client.open(
            '/apiv2/mail/{id}/alerts'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_mail_alert(self):
        """Test case for delete_mail_alert

        Delete Mail Alert
        """
        query_string = [('alert_id', 56)]
        response = self.client.open(
            '/apiv2/mail/{id}/alerts'.format(id=56),
            method='DELETE',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delete_rule(self):
        """Test case for delete_rule

        Delete Deny Rule
        """
        response = self.client.open(
            '/apiv2/mail/{id}/rules/{rule}'.format(id=56, rule='rule_example'),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_delist_block(self):
        """Test case for delist_block

        Remove Email Address from Block List
        """
        body = EmailAddress()
        data = dict(email='email_example')
        response = self.client.open(
            '/apiv2/mail/{id}/blocks/delete'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='multipart/form-data')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_alerts(self):
        """Test case for get_mail_alerts

        List Mail Alerts
        """
        response = self.client.open(
            '/apiv2/mail/{id}/alerts'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_blocks(self):
        """Test case for get_mail_blocks

        List Blocked Email Addresses
        """
        response = self.client.open(
            '/apiv2/mail/{id}/blocks'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_delist(self):
        """Test case for get_mail_delist

        Get Delist Status
        """
        response = self.client.open(
            '/apiv2/mail/{id}/delist'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_deliverability(self):
        """Test case for get_mail_deliverability

        Get Deliverability Metrics
        """
        response = self.client.open(
            '/apiv2/mail/{id}/deliverability'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_info(self):
        """Test case for get_mail_info

        Get Mail Order
        """
        response = self.client.open(
            '/apiv2/mail/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_invoices(self):
        """Test case for get_mail_invoices

        Get Mail Invoices
        """
        response = self.client.open(
            '/apiv2/mail/{id}/invoices'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_list(self):
        """Test case for get_mail_list

        List Mail Orders
        """
        response = self.client.open(
            '/apiv2/mail',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_mail_welcome_email(self):
        """Test case for get_mail_welcome_email

        Resend Mail Welcome Email
        """
        response = self.client.open(
            '/apiv2/mail/{id}/welcome_email'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_new_mail(self):
        """Test case for get_new_mail

        Get Mail Ordering Information
        """
        response = self.client.open(
            '/apiv2/mail/order',
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_rules(self):
        """Test case for get_rules

        List Deny Rules
        """
        response = self.client.open(
            '/apiv2/mail/{id}/rules'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_get_stats(self):
        """Test case for get_stats

        Get Mail Usage Statistics
        """
        query_string = [('time', 'time_example')]
        response = self.client.open(
            '/apiv2/mail/{id}/stats'.format(id=56),
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_mail_cancel(self):
        """Test case for mail_cancel

        Cancel Mail
        """
        response = self.client.open(
            '/apiv2/mail/{id}'.format(id=56),
            method='DELETE')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_post_mail_delist(self):
        """Test case for post_mail_delist

        Delist a Blocked Sender
        """
        body = MailDelistRequest()
        data = dict(unblock='unblock_example')
        response = self.client.open(
            '/apiv2/mail/{id}/delist'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_put_mail(self):
        """Test case for put_mail

        Validate Mail Order
        """
        response = self.client.open(
            '/apiv2/mail/order',
            method='PUT')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_reset_mail_password(self):
        """Test case for reset_mail_password

        Reset Mail Password
        """
        response = self.client.open(
            '/apiv2/mail/{id}/reset_password'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_send_adv_mail(self):
        """Test case for send_adv_mail

        Send Email with Advanced Options
        """
        body = SendMailAdv()
        data = dict(subject='subject_example',
                    body='body_example',
                    _from=EmailAddressName(),
                    to=EmailAddressName(),
                    replyto=EmailAddressName(),
                    cc=EmailAddressName(),
                    bcc=EmailAddressName(),
                    attachments=MailAttachment(),
                    id=789)
        response = self.client.open(
            '/apiv2/mail/{id}/advsend'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_send_mail(self):
        """Test case for send_mail

        Send Email
        """
        body = SendMail()
        data = dict(to='to_example',
                    _from='_from_example',
                    subject='subject_example',
                    body='body_example')
        response = self.client.open(
            '/apiv2/mail/{id}/send'.format(id=56),
            method='POST',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_mail_alert(self):
        """Test case for update_mail_alert

        Update Mail Alert
        """
        body = MailAlertUpdateRequest()
        data = dict(alert_id=56,
                    type='type_example',
                    value='value_example',
                    to='to_example',
                    enabled='enabled_example')
        response = self.client.open(
            '/apiv2/mail/{id}/alerts'.format(id=56),
            method='PUT',
            data=json.dumps(body),
            data=data,
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_update_mail_info(self):
        """Test case for update_mail_info

        Update Mail Order
        """
        response = self.client.open(
            '/apiv2/mail/{id}'.format(id='id_example'),
            method='POST')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_view_mail_log(self):
        """Test case for view_mail_log

        View Mail Log
        """
        query_string = [('id', 789),
                        ('origin', 'origin_example'),
                        ('mx', 'mx_example'),
                        ('_from', '_from_example'),
                        ('to', 'to_example'),
                        ('subject', 'subject_example'),
                        ('mailid', 'mailid_example'),
                        ('skip', 1),
                        ('limit', 10000),
                        ('start_date', 9999999999),
                        ('end_date', 9999999999),
                        ('delivered', 'delivered_example')]
        response = self.client.open(
            '/apiv2/mail/{id}/log'.format(id=56),
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
