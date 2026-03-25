const samples = require('../samples/FloatingIPsApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const floating_ipsCancel_200_response = require('../models/floating_ipsCancel_200_response');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');
const FormData = require('form-data');

module.exports = {
    addFloatingIp: {
        key: 'addFloatingIp',
        noun: 'Floating_IPs',
        display: {
            label: 'Place Floating IP Order',
            description: 'Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addFloatingIp', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    floatingIpsCancel: {
        key: 'floatingIpsCancel',
        noun: 'Floating_IPs',
        display: {
            label: 'Cancel Floating IP',
            description: 'Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...floating_ipsCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'floatingIpsCancel', response.json);
                    return results;
                })
            },
            sample: samples['floating_ipsCancel_200_responseSample']
        }
    },
    getFloatingIpInfo: {
        key: 'getFloatingIpInfo',
        noun: 'Floating_IPs',
        display: {
            label: 'View Floating IP',
            description: 'Returns detailed information about a specific Floating IP service including its current target IP assignment.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getFloatingIpInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getFloatingIpInvoices: {
        key: 'getFloatingIpInvoices',
        noun: 'Floating_IPs',
        display: {
            label: 'Get Floating IP Invoices',
            description: 'Returns the billing invoices associated with this Floating IP service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getFloatingIpInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getFloatingIpsList: {
        key: 'getFloatingIpsList',
        noun: 'Floating_IPs',
        display: {
            label: 'List Floating IPs',
            description: 'Returns all Floating IP services on the account with their current status and assignment details.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getFloatingIpsList', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getFloatingIpsWelcomeEmail: {
        key: 'getFloatingIpsWelcomeEmail',
        noun: 'Floating_IPs',
        display: {
            label: 'Resend Floating IPs Welcome Email',
            description: 'Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getFloatingIpsWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getNewFloatingIp: {
        key: 'getNewFloatingIp',
        noun: 'Floating_IPs',
        display: {
            label: 'Get Floating IP Ordering Information',
            description: 'Retrieves available options and pricing for ordering a new Floating IP.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewFloatingIp', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postFloatingIpsChangeIp: {
        key: 'postFloatingIpsChangeIp',
        noun: 'Floating_IPs',
        display: {
            label: 'Change Floating IP Target',
            description: 'Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'ip',
                    label: 'IP Address',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('ip', bundle.inputData?.['ip'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}/change_ip'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postFloatingIpsChangeIp', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    putFloatingIps: {
        key: 'putFloatingIps',
        noun: 'Floating_IPs',
        display: {
            label: 'Validate Floating IP Order',
            description: 'Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putFloatingIps', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateFloatingIpInfo: {
        key: 'updateFloatingIpInfo',
        noun: 'Floating_IPs',
        display: {
            label: 'Update Floating IP',
            description: 'Updates settings on a Floating IP service, such as its label or configuration metadata.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/floating_ips/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateFloatingIpInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
}
