const samples = require('../samples/LicensesApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const IpObject = require('../models/IpObject');
const License = require('../models/License');
const LicenseRow = require('../models/LicenseRow');
const LicensesOrder = require('../models/LicensesOrder');
const ServiceOrderPostResponse = require('../models/ServiceOrderPostResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const licensesCancel_200_response = require('../models/licensesCancel_200_response');
const utils = require('../utils/utils');

module.exports = {
    addLicense: {
        key: 'addLicense',
        noun: 'Licenses',
        display: {
            label: 'Place License Order',
            description: 'Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...ServiceOrderPostResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addLicense', response.json);
                    return results;
                })
            },
            sample: samples['ServiceOrderPostResponseSample']
        }
    },
    getLicenseInfo: {
        key: 'getLicenseInfo',
        noun: 'Licenses',
        display: {
            label: 'Get License',
            description: 'Returns detailed information about a specific license including its type, IP assignment, and status.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...License.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLicenseInfo', response.json);
                    return results;
                })
            },
            sample: samples['LicenseSample']
        }
    },
    getLicenseInvoices: {
        key: 'getLicenseInvoices',
        noun: 'Licenses',
        display: {
            label: 'Get License Invoices',
            description: 'Returns the billing invoices associated with this license service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLicenseInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getLicenseList: {
        key: 'getLicenseList',
        noun: 'Licenses',
        display: {
            label: 'List Licenses',
            description: 'Returns all software license services on the account with their current status and IP assignments.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLicenseList', response.json);
                    return results;
                })
            },
            sample: samples['LicenseRowSample']
        }
    },
    getLicenseOrderCatTagInfo: {
        key: 'getLicenseOrderCatTagInfo',
        noun: 'Licenses',
        display: {
            label: 'Get License Order Information for Category',
            description: 'Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'catTag',
                    label: 'The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/order/{catTag}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLicenseOrderCatTagInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getLicensesWelcomeEmail: {
        key: 'getLicensesWelcomeEmail',
        noun: 'Licenses',
        display: {
            label: 'Resend License Welcome Email',
            description: 'Resends the welcome email for the license service. The email contains the license key and activation instructions.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getLicensesWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getNewLicense: {
        key: 'getNewLicense',
        noun: 'Licenses',
        display: {
            label: 'Get License Order Information',
            description: 'Retrieves available license types, categories, and pricing for ordering a new license.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...LicensesOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewLicense', response.json);
                    return results;
                })
            },
            sample: samples['LicensesOrderSample']
        }
    },
    licensesCancel: {
        key: 'licensesCancel',
        noun: 'Licenses',
        display: {
            label: 'Cancel License',
            description: 'Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...licensesCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'licensesCancel', response.json);
                    return results;
                })
            },
            sample: samples['licensesCancel_200_responseSample']
        }
    },
    postLicenseChangeIp: {
        key: 'postLicenseChangeIp',
        noun: 'Licenses',
        display: {
            label: 'Change License IP',
            description: 'Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...IpObject.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}/change_ip'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...IpObject.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postLicenseChangeIp', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    putLicenses: {
        key: 'putLicenses',
        noun: 'Licenses',
        display: {
            label: 'Validate License Order',
            description: 'Validates a license order before placing it. Use this to check for errors before committing to a purchase.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putLicenses', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateLicenseInfo: {
        key: 'updateLicenseInfo',
        noun: 'Licenses',
        display: {
            label: 'Update License',
            description: 'Updates settings on a license service such as its assigned IP.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/licenses/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateLicenseInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
