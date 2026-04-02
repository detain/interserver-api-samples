const samples = require('../samples/BillingApi');
const AffiliateBannerRow = require('../models/AffiliateBannerRow');
const AffiliateTrafficRow = require('../models/AffiliateTrafficRow');
const BillingAddCcRequest = require('../models/BillingAddCcRequest');
const BillingInvoiceDetail = require('../models/BillingInvoiceDetail');
const BillingInvoiceList = require('../models/BillingInvoiceList');
const BillingPaymentMethodRequest = require('../models/BillingPaymentMethodRequest');
const BillingPrepayRequest = require('../models/BillingPrepayRequest');
const BillingVerifyCcRequest = require('../models/BillingVerifyCcRequest');
const Invoice = require('../models/Invoice');
const MonthlyCounts = require('../models/MonthlyCounts');
const StatusMonthlyBreakdown = require('../models/StatusMonthlyBreakdown');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const initiatePayment_200_response = require('../models/initiatePayment_200_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    addAccountCreditCard: {
        key: 'addAccountCreditCard',
        noun: 'Billing',
        display: {
            label: 'Add Credit Card to Account',
            description: 'Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'address',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'city',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'state',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'country',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'zip',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'cc',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'cc_exp',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'cc_ccv2',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('name', bundle.inputData?.['name'])
                formData.append('address', bundle.inputData?.['address'])
                formData.append('city', bundle.inputData?.['city'])
                formData.append('state', bundle.inputData?.['state'])
                formData.append('country', bundle.inputData?.['country'])
                formData.append('zip', bundle.inputData?.['zip'])
                formData.append('cc', bundle.inputData?.['cc'])
                formData.append('cc_exp', bundle.inputData?.['cc_exp'])
                formData.append('cc_ccv2', bundle.inputData?.['cc_ccv2'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/creditcards'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addAccountCreditCard', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    addBillingCreditCard: {
        key: 'addBillingCreditCard',
        noun: 'Billing',
        display: {
            label: 'Add Credit Card for Billing',
            description: 'Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...BillingAddCcRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/creditcards'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...BillingAddCcRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addBillingCreditCard', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    addBillingPrepay: {
        key: 'addBillingPrepay',
        noun: 'Billing',
        display: {
            label: 'Create Prepay Deposit',
            description: 'Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...BillingPrepayRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/prepays'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...BillingPrepayRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addBillingPrepay', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteAccountCreditCard: {
        key: 'deleteAccountCreditCard',
        noun: 'Billing',
        display: {
            label: 'Remove Credit Card',
            description: 'Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/creditcards/{id}'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteAccountCreditCard', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    deleteBillingCreditCard: {
        key: 'deleteBillingCreditCard',
        noun: 'Billing',
        display: {
            label: 'Delete Credit Card',
            description: 'Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/creditcards/{id}'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteBillingCreditCard', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteBillingInvoice: {
        key: 'deleteBillingInvoice',
        noun: 'Billing',
        display: {
            label: 'Delete Invoice',
            description: 'Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The invoice ID to delete. Only unpaid invoices can be deleted.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/invoices/{id}'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteBillingInvoice', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteBillingPrepay: {
        key: 'deleteBillingPrepay',
        noun: 'Billing',
        display: {
            label: 'Delete Prepay Balance',
            description: 'Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The prepay balance ID to delete.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/prepays/{id}'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteBillingPrepay', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getAffiliateBanners: {
        key: 'getAffiliateBanners',
        noun: 'Billing',
        display: {
            label: 'List Affiliate Banner Assets',
            description: 'Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/banners'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateBanners', response.json);
                    return results;
                })
            },
            sample: samples['AffiliateBannerRowSample']
        }
    },
    getAffiliateRichReport: {
        key: 'getAffiliateRichReport',
        noun: 'Billing',
        display: {
            label: 'Get Affiliate Performance Report',
            description: 'Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/rich_report'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateRichReport', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    getAffiliateSalesGraph: {
        key: 'getAffiliateSalesGraph',
        noun: 'Billing',
        display: {
            label: 'Get Affiliate Sales Graph Data',
            description: 'Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'days',
                    label: 'Number of days of sales history to include in the graph data. Determines the time window for the returned data points.',
                    type: 'integer',
                },
            ],
            outputFields: [
                ...StatusMonthlyBreakdown.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/sales_graph'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'days': bundle.inputData?.['days'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateSalesGraph', response.json);
                    return results;
                })
            },
            sample: samples['StatusMonthlyBreakdownSample']
        }
    },
    getAffiliateSalesReport: {
        key: 'getAffiliateSalesReport',
        noun: 'Billing',
        display: {
            label: 'Get Affiliate Sales Report',
            description: 'Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/sales_report'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateSalesReport', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    getAffiliateTrafficGraph: {
        key: 'getAffiliateTrafficGraph',
        noun: 'Billing',
        display: {
            label: 'Get Affiliate Traffic Graph Data',
            description: 'Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'days',
                    label: 'Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.',
                    type: 'integer',
                },
            ],
            outputFields: [
                ...MonthlyCounts.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/traffic_graph'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'days': bundle.inputData?.['days'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateTrafficGraph', response.json);
                    return results;
                })
            },
            sample: samples['MonthlyCountsSample']
        }
    },
    getAffiliateWebTraffic: {
        key: 'getAffiliateWebTraffic',
        noun: 'Billing',
        display: {
            label: 'List Affiliate Web Traffic Entries',
            description: 'Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/web_traffic'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getAffiliateWebTraffic', response.json);
                    return results;
                })
            },
            sample: samples['AffiliateTrafficRowSample']
        }
    },
    getBillingCart: {
        key: 'getBillingCart',
        noun: 'Billing',
        display: {
            label: 'Get Shopping Cart Contents',
            description: 'Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/cart'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBillingCart', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    getBillingCreditCardVerify: {
        key: 'getBillingCreditCardVerify',
        noun: 'Billing',
        display: {
            label: 'Get Credit Card Verification Requirements',
            description: 'Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/creditcards/{id}/verify'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBillingCreditCardVerify', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getBillingInvoice: {
        key: 'getBillingInvoice',
        noun: 'Billing',
        display: {
            label: 'Get Invoice Details',
            description: 'Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...BillingInvoiceDetail.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/invoices/{id}'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBillingInvoice', response.json);
                    return results;
                })
            },
            sample: samples['BillingInvoiceDetailSample']
        }
    },
    getBillingInvoices: {
        key: 'getBillingInvoices',
        noun: 'Billing',
        display: {
            label: 'List Account Invoices',
            description: 'Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...BillingInvoiceList.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/invoices'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBillingInvoices', response.json);
                    return results;
                })
            },
            sample: samples['BillingInvoiceListSample']
        }
    },
    getBillingPrePays: {
        key: 'getBillingPrePays',
        noun: 'Billing',
        display: {
            label: 'List Prepay Balances',
            description: 'Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/prepays'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBillingPrePays', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    getInvoices: {
        key: 'getInvoices',
        noun: 'Billing',
        display: {
            label: 'Get Invoices',
            description: 'Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'searchString',
                    label: 'pass an optional search string for looking up inventory',
                    type: 'string',
                },
                {
                    key: 'skip',
                    label: 'number of records to skip for pagination',
                    type: 'integer',
                },
                {
                    key: 'limit',
                    label: 'maximum number of records to return',
                    type: 'integer',
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/invoices'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'searchString': bundle.inputData?.['searchString'],
                        'skip': bundle.inputData?.['skip'],
                        'limit': bundle.inputData?.['limit'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getInvoices', response.json);
                    return results;
                })
            },
            sample: samples['InvoiceSample']
        }
    },
    initiatePayment: {
        key: 'initiatePayment',
        noun: 'Billing',
        display: {
            label: 'Initiate Payment',
            description: 'Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'method',
                    label: 'The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.',
                    type: 'string',
                    required: true,
                    choices: [
                        'cc',
                        'paypal',
                        'prepay',
                        'payssion',
                        'payu',
                        'ccavenue',
                        'cashfree',
                        'coinbase',
                        'btcpay',
                    ],
                },
                {
                    key: 'invoices',
                    label: 'A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...initiatePayment_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/pay/{method}/{invoices}'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'initiatePayment', response.json);
                    return results;
                })
            },
            sample: samples['initiatePayment_200_responseSample']
        }
    },
    postBillingCreditCardVerify: {
        key: 'postBillingCreditCardVerify',
        noun: 'Billing',
        display: {
            label: 'Submit Credit Card Verification',
            description: 'Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...BillingVerifyCcRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/creditcards/{id}/verify'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...BillingVerifyCcRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postBillingCreditCardVerify', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateAccountCreditCard: {
        key: 'updateAccountCreditCard',
        noun: 'Billing',
        display: {
            label: 'Update Credit Card',
            description: 'Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/account/creditcards/{id}'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAccountCreditCard', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    updateAffiliateDockSetup: {
        key: 'updateAffiliateDockSetup',
        noun: 'Billing',
        display: {
            label: 'Configure Affiliate Dock Settings',
            description: 'Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'affiliate_dock_title',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'affiliate_dock_description',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'referrer_coupon',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('affiliate_dock_title', bundle.inputData?.['affiliate_dock_title'])
                formData.append('affiliate_dock_description', bundle.inputData?.['affiliate_dock_description'])
                formData.append('referrer_coupon', bundle.inputData?.['referrer_coupon'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/dock_setup'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAffiliateDockSetup', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    updateAffiliateLandingPage: {
        key: 'updateAffiliateLandingPage',
        noun: 'Billing',
        display: {
            label: 'Configure Affiliate Landing Page',
            description: 'Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'affiliate_dock_title',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'affiliate_dock_description',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'referrer_coupon',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('affiliate_dock_title', bundle.inputData?.['affiliate_dock_title'])
                formData.append('affiliate_dock_description', bundle.inputData?.['affiliate_dock_description'])
                formData.append('referrer_coupon', bundle.inputData?.['referrer_coupon'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/landing_pg'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAffiliateLandingPage', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    updateAffiliatePaymentSetup: {
        key: 'updateAffiliatePaymentSetup',
        noun: 'Billing',
        display: {
            label: 'Configure Affiliate Payout Preferences',
            description: 'Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'affiliate_paypal',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'affiliate_payment_method',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('affiliate_paypal', bundle.inputData?.['affiliate_paypal'])
                formData.append('affiliate_payment_method', bundle.inputData?.['affiliate_payment_method'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/affiliate/payment_setup'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: formData,
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateAffiliatePaymentSetup', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    updateBillingCreditCard: {
        key: 'updateBillingCreditCard',
        noun: 'Billing',
        display: {
            label: 'Update Credit Card Details',
            description: 'Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/creditcards/{id}'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateBillingCreditCard', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateBillingPaymentMethod: {
        key: 'updateBillingPaymentMethod',
        noun: 'Billing',
        display: {
            label: 'Update Default Payment Method',
            description: 'Updates the account&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...BillingPaymentMethodRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/billing/payment_method'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...BillingPaymentMethodRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateBillingPaymentMethod', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
