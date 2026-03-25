const samples = require('../samples/ScrubIpsApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const CreateFilter = require('../models/CreateFilter');
const CreateFirewallRule = require('../models/CreateFirewallRule');
const CreateGeoFirewallRule = require('../models/CreateGeoFirewallRule');
const Delete_Firewall_Rule = require('../models/Delete_Firewall_Rule');
const Delete_Geo_Firewall_Rule = require('../models/Delete_Geo_Firewall_Rule');
const ScrubIpFilterTypes = require('../models/ScrubIpFilterTypes');
const ScrubIpPlaceOrder = require('../models/ScrubIpPlaceOrder');
const ScrubIpsLogRowSchema = require('../models/ScrubIpsLogRowSchema');
const ScrubIpsRowSchema = require('../models/ScrubIpsRowSchema');
const cancelScrubIp_200_response = require('../models/cancelScrubIp_200_response');
const createFilter_201_response = require('../models/createFilter_201_response');
const createFilter_400_response = require('../models/createFilter_400_response');
const createFilter_500_response = require('../models/createFilter_500_response');
const createGeoRule_400_response = require('../models/createGeoRule_400_response');
const createRule_201_response = require('../models/createRule_201_response');
const createRule_400_response = require('../models/createRule_400_response');
const createRule_500_response = require('../models/createRule_500_response');
const deleteFilter_200_response = require('../models/deleteFilter_200_response');
const deleteFilter_400_response = require('../models/deleteFilter_400_response');
const deleteFilter_500_response = require('../models/deleteFilter_500_response');
const disableScrub_200_response = require('../models/disableScrub_200_response');
const disableScrub_400_response = require('../models/disableScrub_400_response');
const disableScrub_500_response = require('../models/disableScrub_500_response');
const enableScrub_200_response = require('../models/enableScrub_200_response');
const enableScrub_500_response = require('../models/enableScrub_500_response');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const getOrderDetail_200_response = require('../models/getOrderDetail_200_response');
const getScrubIpDetails_200_response = require('../models/getScrubIpDetails_200_response');
const placeScrubOrder_201_response = require('../models/placeScrubOrder_201_response');
const scrubIpsDeleteRule_200_response = require('../models/scrubIpsDeleteRule_200_response');
const scrubIpsDeleteRule_400_response = require('../models/scrubIpsDeleteRule_400_response');
const scrubIpsDeleteRule_500_response = require('../models/scrubIpsDeleteRule_500_response');
const utils = require('../utils/utils');

module.exports = {
    cancelScrubIp: {
        key: 'cancelScrubIp',
        noun: 'Scrub Ips',
        display: {
            label: 'Cancel Scrub IP Service',
            description: 'Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...cancelScrubIp_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'cancelScrubIp', response.json);
                    return results;
                })
            },
            sample: samples['cancelScrubIp_200_responseSample']
        }
    },
    createFilter: {
        key: 'createFilter',
        noun: 'Scrub Ips',
        display: {
            label: 'Create Traffic Filter',
            description: 'Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...CreateFilter.fields(),
            ],
            outputFields: [
                ...createFilter_201_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/create_filter'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...CreateFilter.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'createFilter', response.json);
                    return results;
                })
            },
            sample: samples['createFilter_201_responseSample']
        }
    },
    createGeoRule: {
        key: 'createGeoRule',
        noun: 'Scrub Ips',
        display: {
            label: 'Create Geo Firewall Rule',
            description: 'Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...CreateGeoFirewallRule.fields(),
            ],
            outputFields: [
                ...createRule_201_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/create_geo_rule'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...CreateGeoFirewallRule.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'createGeoRule', response.json);
                    return results;
                })
            },
            sample: samples['createRule_201_responseSample']
        }
    },
    createRule: {
        key: 'createRule',
        noun: 'Scrub Ips',
        display: {
            label: 'Create Firewall Rule',
            description: 'Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...CreateFirewallRule.fields(),
            ],
            outputFields: [
                ...createRule_201_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/create_rule'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...CreateFirewallRule.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'createRule', response.json);
                    return results;
                })
            },
            sample: samples['createRule_201_responseSample']
        }
    },
    deleteFilter: {
        key: 'deleteFilter',
        noun: 'Scrub Ips',
        display: {
            label: 'Delete Traffic Filter',
            description: 'Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...CreateFilter.fields(),
            ],
            outputFields: [
                ...deleteFilter_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/delete_filter'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...CreateFilter.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteFilter', response.json);
                    return results;
                })
            },
            sample: samples['deleteFilter_200_responseSample']
        }
    },
    disableScrub: {
        key: 'disableScrub',
        noun: 'Scrub Ips',
        display: {
            label: 'Disable Scrub Protection',
            description: 'Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...disableScrub_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/disable'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'disableScrub', response.json);
                    return results;
                })
            },
            sample: samples['disableScrub_200_responseSample']
        }
    },
    enableScrub: {
        key: 'enableScrub',
        noun: 'Scrub Ips',
        display: {
            label: 'Enable Scrub Protection',
            description: 'Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...enableScrub_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/enable'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'enableScrub', response.json);
                    return results;
                })
            },
            sample: samples['enableScrub_200_responseSample']
        }
    },
    getOrderDetail: {
        key: 'getOrderDetail',
        noun: 'Scrub Ips',
        display: {
            label: 'Get Scrub IP Ordering Information',
            description: 'Returns the available Scrub IP service plans and pricing information needed to build an order form.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...getOrderDetail_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getOrderDetail', response.json);
                    return results;
                })
            },
            sample: samples['getOrderDetail_200_responseSample']
        }
    },
    getScrubIpDetails: {
        key: 'getScrubIpDetails',
        noun: 'Scrub Ips',
        display: {
            label: 'Get Scrub IP Details',
            description: 'Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...getScrubIpDetails_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getScrubIpDetails', response.json);
                    return results;
                })
            },
            sample: samples['getScrubIpDetails_200_responseSample']
        }
    },
    getScrubIpFilterTypes: {
        key: 'getScrubIpFilterTypes',
        noun: 'Scrub Ips',
        display: {
            label: 'List Scrub Filter Types',
            description: 'Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...ScrubIpFilterTypes.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/filter_types'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getScrubIpFilterTypes', response.json);
                    return results;
                })
            },
            sample: samples['ScrubIpFilterTypesSample']
        }
    },
    getScrubIpInvoices: {
        key: 'getScrubIpInvoices',
        noun: 'Scrub Ips',
        display: {
            label: 'Get ScrubIp Invoices',
            description: 'Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getScrubIpInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getScrubIpLogs: {
        key: 'getScrubIpLogs',
        noun: 'Scrub Ips',
        display: {
            label: 'Get Scrub IP Logs',
            description: 'Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Scrub Order ID',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/logs'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getScrubIpLogs', response.json);
                    return results;
                })
            },
            sample: samples['ScrubIpsLogRowSchemaSample']
        }
    },
    getScrubIpsList: {
        key: 'getScrubIpsList',
        noun: 'Scrub Ips',
        display: {
            label: 'List Scrub IP Services',
            description: 'Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getScrubIpsList', response.json);
                    return results;
                })
            },
            sample: samples['ScrubIpsRowSchemaSample']
        }
    },
    placeScrubOrder: {
        key: 'placeScrubOrder',
        noun: 'Scrub Ips',
        display: {
            label: 'Place Scrub IP Order',
            description: 'Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...ScrubIpPlaceOrder.fields(),
            ],
            outputFields: [
                ...placeScrubOrder_201_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/order'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...ScrubIpPlaceOrder.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'placeScrubOrder', response.json);
                    return results;
                })
            },
            sample: samples['placeScrubOrder_201_responseSample']
        }
    },
    scrubIpsDeleteGeoRule: {
        key: 'scrubIpsDeleteGeoRule',
        noun: 'Scrub Ips',
        display: {
            label: 'Delete Geo Firewall Rule',
            description: 'Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...Delete_Geo_Firewall_Rule.fields(),
            ],
            outputFields: [
                ...scrubIpsDeleteRule_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/delete_geo_rule'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...Delete_Geo_Firewall_Rule.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'scrubIpsDeleteGeoRule', response.json);
                    return results;
                })
            },
            sample: samples['scrubIpsDeleteRule_200_responseSample']
        }
    },
    scrubIpsDeleteRule: {
        key: 'scrubIpsDeleteRule',
        noun: 'Scrub Ips',
        display: {
            label: 'Delete Firewall Rule',
            description: 'Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'ScrubIp ID number',
                    type: 'integer',
                    required: true,
                },
                ...Delete_Firewall_Rule.fields(),
            ],
            outputFields: [
                ...scrubIpsDeleteRule_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/scrub_ips/{id}/delete_rule'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...Delete_Firewall_Rule.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'scrubIpsDeleteRule', response.json);
                    return results;
                })
            },
            sample: samples['scrubIpsDeleteRule_200_responseSample']
        }
    },
}
