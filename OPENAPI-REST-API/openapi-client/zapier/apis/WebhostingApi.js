const samples = require('../samples/WebhostingApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const ReverseDnsEntries = require('../models/ReverseDnsEntries');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const Website = require('../models/Website');
const WebsiteBackups = require('../models/WebsiteBackups');
const WebsiteLoginResponse = require('../models/WebsiteLoginResponse');
const WebsiteRow = require('../models/WebsiteRow');
const WebsitesOrder = require('../models/WebsitesOrder');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const getWebsiteBuyIp_200_response = require('../models/getWebsiteBuyIp_200_response');
const postWebsiteBuyIp_200_response = require('../models/postWebsiteBuyIp_200_response');
const postWebsiteBuyIp_request = require('../models/postWebsiteBuyIp_request');
const postWebsiteMigration_200_response = require('../models/postWebsiteMigration_200_response');
const postWebsiteMigration_request = require('../models/postWebsiteMigration_request');
const postWebsiteMigration_request_1 = require('../models/postWebsiteMigration_request_1');
const webhostingCancel_200_response = require('../models/webhostingCancel_200_response');
const utils = require('../utils/utils');

module.exports = {
    addWebsite: {
        key: 'addWebsite',
        noun: 'Webhosting',
        display: {
            label: 'Place Website Order',
            description: 'Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addWebsite', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getNewWebsite: {
        key: 'getNewWebsite',
        noun: 'Webhosting',
        display: {
            label: 'Website Ordering Information',
            description: 'Retrieves available webhosting plans and pricing for ordering.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...WebsitesOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewWebsite', response.json);
                    return results;
                })
            },
            sample: samples['WebsitesOrderSample']
        }
    },
    getWebsiteBuyIp: {
        key: 'getWebsiteBuyIp',
        noun: 'Webhosting',
        display: {
            label: 'Get Website IP Information',
            description: 'Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...getWebsiteBuyIp_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/buy_ip'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsiteBuyIp', response.json);
                    return results;
                })
            },
            sample: samples['getWebsiteBuyIp_200_responseSample']
        }
    },
    getWebsiteInfo: {
        key: 'getWebsiteInfo',
        noun: 'Webhosting',
        display: {
            label: 'Get Website Order',
            description: 'Returns detailed information about a specific webhosting order including its domain, plan, and status.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Website.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsiteInfo', response.json);
                    return results;
                })
            },
            sample: samples['WebsiteSample']
        }
    },
    getWebsiteInvoices: {
        key: 'getWebsiteInvoices',
        noun: 'Webhosting',
        display: {
            label: 'Get Website Invoices',
            description: 'Returns the billing invoices associated with this webhosting service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsiteInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getWebsiteList: {
        key: 'getWebsiteList',
        noun: 'Webhosting',
        display: {
            label: 'Get Website Listing',
            description: 'Gets a listing of your webhosting orders and service details.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json, multipart/form-data',
                    },
                    params: {
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsiteList', response.json);
                    return results;
                })
            },
            sample: samples['WebsiteRowSample']
        }
    },
    getWebsitesBackups: {
        key: 'getWebsitesBackups',
        noun: 'Webhosting',
        display: {
            label: 'Get Website Backups',
            description: 'Gets a list of the backups that exist for a website and their sizes.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...WebsiteBackups.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/backups'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsitesBackups', response.json);
                    return results;
                })
            },
            sample: samples['WebsiteBackupsSample']
        }
    },
    getWebsitesLogin: {
        key: 'getWebsitesLogin',
        noun: 'Webhosting',
        display: {
            label: 'Hosting Panel Auto Login',
            description: 'Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...WebsiteLoginResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/login'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsitesLogin', response.json);
                    return results;
                })
            },
            sample: samples['WebsiteLoginResponseSample']
        }
    },
    getWebsitesWelcomeEmail: {
        key: 'getWebsitesWelcomeEmail',
        noun: 'Webhosting',
        display: {
            label: 'Resend Website Welcome Email',
            description: 'Resends the welcome email containing hosting credentials and panel access details for the webhosting order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getWebsitesWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    gettWebsiteReverseDns: {
        key: 'gettWebsiteReverseDns',
        noun: 'Webhosting',
        display: {
            label: 'Get Website Reverse DNS',
            description: 'Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ReverseDnsEntries.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'gettWebsiteReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['ReverseDnsEntriesSample']
        }
    },
    postWebsiteBuyIp: {
        key: 'postWebsiteBuyIp',
        noun: 'Webhosting',
        display: {
            label: 'Update Website IP DNS',
            description: 'Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...postWebsiteBuyIp_request.fields(),
            ],
            outputFields: [
                ...postWebsiteBuyIp_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/buy_ip'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...postWebsiteBuyIp_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postWebsiteBuyIp', response.json);
                    return results;
                })
            },
            sample: samples['postWebsiteBuyIp_200_responseSample']
        }
    },
    postWebsiteMigration: {
        key: 'postWebsiteMigration',
        noun: 'Webhosting',
        display: {
            label: 'Request Website Migration',
            description: 'Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...postWebsiteMigration_request.fields(),
            ],
            outputFields: [
                ...postWebsiteMigration_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/migration'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...postWebsiteMigration_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postWebsiteMigration', response.json);
                    return results;
                })
            },
            sample: samples['postWebsiteMigration_200_responseSample']
        }
    },
    postWebsitesReverseDns: {
        key: 'postWebsitesReverseDns',
        noun: 'Webhosting',
        display: {
            label: 'Update Website Reverse DNS',
            description: 'Updates the reverse DNS entries for each of the IP addresses for the website.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...ReverseDnsEntries.fields(),
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}/reverse_dns'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...ReverseDnsEntries.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postWebsitesReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    putWebsites: {
        key: 'putWebsites',
        noun: 'Webhosting',
        display: {
            label: 'Validate Webhosting Order',
            description: 'Validates a webhosting order before placing it.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putWebsites', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateWebsiteInfo: {
        key: 'updateWebsiteInfo',
        noun: 'Webhosting',
        display: {
            label: 'Update Website Order',
            description: 'Updates settings on a webhosting order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateWebsiteInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    webhostingCancel: {
        key: 'webhostingCancel',
        noun: 'Webhosting',
        display: {
            label: 'Cancel Website',
            description: 'Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...webhostingCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/websites/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'webhostingCancel', response.json);
                    return results;
                })
            },
            sample: samples['webhostingCancel_200_responseSample']
        }
    },
}
