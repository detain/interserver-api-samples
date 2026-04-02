import connexion
import six

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
from myadmin-client-python-flask import util


def add_account_credit_card(name, address, city, state, country, zip, cc, cc_exp, cc_ccv2):  # noqa: E501
    """Add Credit Card to Account

    Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method. # noqa: E501

    :param name: 
    :type name: str
    :param address: 
    :type address: str
    :param city: 
    :type city: str
    :param state: 
    :type state: str
    :param country: 
    :type country: str
    :param zip: 
    :type zip: str
    :param cc: 
    :type cc: str
    :param cc_exp: 
    :type cc_exp: str
    :param cc_ccv2: 
    :type cc_ccv2: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def add_account_credit_card(body):  # noqa: E501
    """Add Credit Card to Account

    Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = BillingAddCcRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_billing_credit_card(body):  # noqa: E501
    """Add Credit Card for Billing

    Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = BillingAddCcRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_billing_credit_card(name, address, city, state, country, zip, cc, cc_exp, cc_ccv2):  # noqa: E501
    """Add Credit Card for Billing

    Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments. # noqa: E501

    :param name: 
    :type name: str
    :param address: 
    :type address: str
    :param city: 
    :type city: str
    :param state: 
    :type state: str
    :param country: 
    :type country: str
    :param zip: 
    :type zip: str
    :param cc: 
    :type cc: str
    :param cc_exp: 
    :type cc_exp: str
    :param cc_ccv2: 
    :type cc_ccv2: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def add_billing_prepay(body):  # noqa: E501
    """Create Prepay Deposit

    Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = BillingPrepayRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def add_billing_prepay(module, amount, automatic_use):  # noqa: E501
    """Create Prepay Deposit

    Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details. # noqa: E501

    :param module: 
    :type module: str
    :param amount: 
    :type amount: float
    :param automatic_use: 
    :type automatic_use: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_account_credit_card(id):  # noqa: E501
    """Remove Credit Card

    Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward. # noqa: E501

    :param id: The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
    :type id: str

    :rtype: str
    """
    return 'do some magic!'


def delete_billing_credit_card(id):  # noqa: E501
    """Delete Credit Card

    Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card. # noqa: E501

    :param id: The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_billing_invoice(id):  # noqa: E501
    """Delete Invoice

    Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up. # noqa: E501

    :param id: The invoice ID to delete. Only unpaid invoices can be deleted.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def delete_billing_prepay(id):  # noqa: E501
    """Delete Prepay Balance

    Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs. # noqa: E501

    :param id: The prepay balance ID to delete.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_affiliate_banners():  # noqa: E501
    """List Affiliate Banner Assets

    Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes. # noqa: E501


    :rtype: List[AffiliateBannerRow]
    """
    return 'do some magic!'


def get_affiliate_rich_report():  # noqa: E501
    """Get Affiliate Performance Report

    Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request. # noqa: E501


    :rtype: TextResponse
    """
    return 'do some magic!'


def get_affiliate_sales_graph(days=None):  # noqa: E501
    """Get Affiliate Sales Graph Data

    Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period. # noqa: E501

    :param days: Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
    :type days: int

    :rtype: StatusMonthlyBreakdown
    """
    return 'do some magic!'


def get_affiliate_sales_report():  # noqa: E501
    """Get Affiliate Sales Report

    Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders. # noqa: E501


    :rtype: TextResponse
    """
    return 'do some magic!'


def get_affiliate_traffic_graph(days=None):  # noqa: E501
    """Get Affiliate Traffic Graph Data

    Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period. # noqa: E501

    :param days: Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
    :type days: int

    :rtype: MonthlyCounts
    """
    return 'do some magic!'


def get_affiliate_web_traffic():  # noqa: E501
    """List Affiliate Web Traffic Entries

    Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns. # noqa: E501


    :rtype: List[AffiliateTrafficRow]
    """
    return 'do some magic!'


def get_billing_cart():  # noqa: E501
    """Get Shopping Cart Contents

    Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;. # noqa: E501


    :rtype: object
    """
    return 'do some magic!'


def get_billing_credit_card_verify(id):  # noqa: E501
    """Get Credit Card Verification Requirements

    Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user. # noqa: E501

    :param id: The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def get_billing_invoice(id):  # noqa: E501
    """Get Invoice Details

    Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid. # noqa: E501

    :param id: The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.
    :type id: int

    :rtype: BillingInvoiceDetail
    """
    return 'do some magic!'


def get_billing_invoices():  # noqa: E501
    """List Account Invoices

    Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment. # noqa: E501


    :rtype: BillingInvoiceList
    """
    return 'do some magic!'


def get_billing_pre_pays():  # noqa: E501
    """List Prepay Balances

    Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method. # noqa: E501


    :rtype: object
    """
    return 'do some magic!'


def get_invoices(search_string=None, skip=None, limit=None):  # noqa: E501
    """Get Invoices

    Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination. # noqa: E501

    :param search_string: pass an optional search string for looking up inventory
    :type search_string: str
    :param skip: number of records to skip for pagination
    :type skip: int
    :param limit: maximum number of records to return
    :type limit: int

    :rtype: List[Invoice]
    """
    return 'do some magic!'


def initiate_payment(method, invoices):  # noqa: E501
    """Initiate Payment

    Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;. # noqa: E501

    :param method: The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.
    :type method: str
    :param invoices: A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.
    :type invoices: str

    :rtype: InlineResponse2009
    """
    return 'do some magic!'


def post_billing_credit_card_verify(body, id):  # noqa: E501
    """Submit Credit Card Verification

    Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;. # noqa: E501

    :param body: 
    :type body: dict | bytes
    :param id: The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = BillingVerifyCcRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def post_billing_credit_card_verify(idx, cc_ccv2, cc_amount1, cc_amount2, terms, id):  # noqa: E501
    """Submit Credit Card Verification

    Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;. # noqa: E501

    :param idx: 
    :type idx: int
    :param cc_ccv2: 
    :type cc_ccv2: str
    :param cc_amount1: 
    :type cc_amount1: str
    :param cc_amount2: 
    :type cc_amount2: str
    :param terms: 
    :type terms: bool
    :param id: The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_account_credit_card(id):  # noqa: E501
    """Update Credit Card

    Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address. # noqa: E501

    :param id: The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.
    :type id: int

    :rtype: str
    """
    return 'do some magic!'


def update_affiliate_dock_setup(affiliate_dock_title, affiliate_dock_description, referrer_coupon):  # noqa: E501
    """Configure Affiliate Dock Settings

    Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text. # noqa: E501

    :param affiliate_dock_title: 
    :type affiliate_dock_title: str
    :param affiliate_dock_description: 
    :type affiliate_dock_description: str
    :param referrer_coupon: 
    :type referrer_coupon: str

    :rtype: TextResponse
    """
    return 'do some magic!'


def update_affiliate_dock_setup(body):  # noqa: E501
    """Configure Affiliate Dock Settings

    Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = AffiliateDockSetup.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_affiliate_landing_page(affiliate_dock_title, affiliate_dock_description, referrer_coupon):  # noqa: E501
    """Configure Affiliate Landing Page

    Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately. # noqa: E501

    :param affiliate_dock_title: 
    :type affiliate_dock_title: str
    :param affiliate_dock_description: 
    :type affiliate_dock_description: str
    :param referrer_coupon: 
    :type referrer_coupon: str

    :rtype: TextResponse
    """
    return 'do some magic!'


def update_affiliate_landing_page(body):  # noqa: E501
    """Configure Affiliate Landing Page

    Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = AffiliateDockSetup.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_affiliate_payment_setup(affiliate_paypal, affiliate_payment_method):  # noqa: E501
    """Configure Affiliate Payout Preferences

    Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account. # noqa: E501

    :param affiliate_paypal: 
    :type affiliate_paypal: str
    :param affiliate_payment_method: 
    :type affiliate_payment_method: str

    :rtype: TextResponse
    """
    return 'do some magic!'


def update_affiliate_payment_setup(body):  # noqa: E501
    """Configure Affiliate Payout Preferences

    Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: TextResponse
    """
    if connexion.request.is_json:
        body = AffiliatePaymentSetup.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_billing_credit_card(id):  # noqa: E501
    """Update Credit Card Details

    Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card. # noqa: E501

    :param id: The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.
    :type id: int

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'


def update_billing_payment_method(body):  # noqa: E501
    """Update Default Payment Method

    Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available. # noqa: E501

    :param body: 
    :type body: dict | bytes

    :rtype: SuccessTextResponse
    """
    if connexion.request.is_json:
        body = BillingPaymentMethodRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def update_billing_payment_method(payment_method, cc_auto):  # noqa: E501
    """Update Default Payment Method

    Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available. # noqa: E501

    :param payment_method: 
    :type payment_method: str
    :param cc_auto: 
    :type cc_auto: str

    :rtype: SuccessTextResponse
    """
    return 'do some magic!'
