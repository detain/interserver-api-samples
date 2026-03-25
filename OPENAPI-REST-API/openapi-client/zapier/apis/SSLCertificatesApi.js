const samples = require('../samples/SSLCertificatesApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const sslCancel_200_response = require('../models/sslCancel_200_response');
const utils = require('../utils/utils');

module.exports = {
    addSsl: {
        key: 'addSsl',
        noun: 'SSL-Certificates',
        display: {
            label: 'Place SSL Cert Order',
            description: 'Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addSsl', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getNewSsl: {
        key: 'getNewSsl',
        noun: 'SSL-Certificates',
        display: {
            label: 'SSL Cert Ordering Information',
            description: 'Retrieves available SSL certificate types and pricing for ordering.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewSsl', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getSslInfo: {
        key: 'getSslInfo',
        noun: 'SSL-Certificates',
        display: {
            label: 'Get SSL Cert Info',
            description: 'Returns detailed information about a specific SSL certificate including its domain and expiration.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'SSL certificate ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getSslInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getSslInvoices: {
        key: 'getSslInvoices',
        noun: 'SSL-Certificates',
        display: {
            label: 'Get SSL Cert Invoices',
            description: 'Returns the billing invoices associated with this SSL certificate.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'SSL Cert ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getSslInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getSslList: {
        key: 'getSslList',
        noun: 'SSL-Certificates',
        display: {
            label: 'List SSL Certs',
            description: 'Returns all SSL certificate services on the account with their current status.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getSslList', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getSslWelcomeEmail: {
        key: 'getSslWelcomeEmail',
        noun: 'SSL-Certificates',
        display: {
            label: 'Resend SSL Welcome Email',
            description: 'Resends the welcome email for the order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'SSL Cert ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getSslWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    putSsl: {
        key: 'putSsl',
        noun: 'SSL-Certificates',
        display: {
            label: 'Validate SSL Cert Order',
            description: 'Validates an SSL certificate order before placing it.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/order'),
                    method: 'PUT',
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putSsl', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    sslCancel: {
        key: 'sslCancel',
        noun: 'SSL-Certificates',
        display: {
            label: 'Cancel SSL Certificate Service',
            description: 'Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'SSL Cert ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...sslCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'sslCancel', response.json);
                    return results;
                })
            },
            sample: samples['sslCancel_200_responseSample']
        }
    },
    updateSslInfo: {
        key: 'updateSslInfo',
        noun: 'SSL-Certificates',
        display: {
            label: 'Update SSL Cert Order',
            description: 'Updates settings on an SSL certificate order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'SSL certificate ID number.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/ssl/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateSslInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
}
