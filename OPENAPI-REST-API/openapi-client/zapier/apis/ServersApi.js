const samples = require('../samples/ServersApi');
const BuyItNowList = require('../models/BuyItNowList');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const ReverseDnsEntries = require('../models/ReverseDnsEntries');
const Server = require('../models/Server');
const ServerIpmiLiveInfo = require('../models/ServerIpmiLiveInfo');
const ServerOrder = require('../models/ServerOrder');
const ServerRow = require('../models/ServerRow');
const ServersBuyNowError = require('../models/ServersBuyNowError');
const ServersBuyNowResponse = require('../models/ServersBuyNowResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const addServer_200_response = require('../models/addServer_200_response');
const buyItNowServerOrder_200_response = require('../models/buyItNowServerOrder_200_response');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const placeBuyNowServer_request = require('../models/placeBuyNowServer_request');
const serversCancel_200_response = require('../models/serversCancel_200_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    addServer: {
        key: 'addServer',
        noun: 'Servers',
        display: {
            label: 'Place Server Order',
            description: 'Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...addServer_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addServer', response.json);
                    return results;
                })
            },
            sample: samples['addServer_200_responseSample']
        }
    },
    buyItNowServerOrder: {
        key: 'buyItNowServerOrder',
        noun: 'Servers',
        display: {
            label: 'Get Buy Now Server Options',
            description: 'Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...buyItNowServerOrder_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/order/buy_now_server'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'buyItNowServerOrder', response.json);
                    return results;
                })
            },
            sample: samples['buyItNowServerOrder_200_responseSample']
        }
    },
    getMPServers: {
        key: 'getMPServers',
        noun: 'ServersPublic',
        display: {
            label: 'List Marketplace Servers',
            description: 'Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...BuyItNowList.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/buy_now_servers_list'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMPServers', response.json);
                    return results;
                })
            },
            sample: samples['BuyItNowListSample']
        }
    },
    getNewServer: {
        key: 'getNewServer',
        noun: 'Servers',
        display: {
            label: 'Server Ordering Information',
            description: 'Retrieves available server configurations and pricing for ordering a new dedicated server.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...ServerOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewServer', response.json);
                    return results;
                })
            },
            sample: samples['ServerOrderSample']
        }
    },
    getServerInfo: {
        key: 'getServerInfo',
        noun: 'Servers',
        display: {
            label: 'Get Server Order',
            description: 'Returns detailed information about a specific server including its hardware configuration, IPs, and status.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Server.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getServerInfo', response.json);
                    return results;
                })
            },
            sample: samples['ServerSample']
        }
    },
    getServerInvoices: {
        key: 'getServerInvoices',
        noun: 'Servers',
        display: {
            label: 'Get Server Invoices',
            description: 'Returns the billing invoices associated with this dedicated server.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getServerInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getServerList: {
        key: 'getServerList',
        noun: 'Servers',
        display: {
            label: 'List Servers',
            description: 'Returns all dedicated server services on the account with their current status and configuration.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getServerList', response.json);
                    return results;
                })
            },
            sample: samples['ServerRowSample']
        }
    },
    getServerReverseDns: {
        key: 'getServerReverseDns',
        noun: 'Servers',
        display: {
            label: 'Reverse DNS Info',
            description: 'Returns the current reverse DNS (PTR record) entries for the server&#39;s IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ReverseDnsEntries.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getServerReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['ReverseDnsEntriesSample']
        }
    },
    getServersWelcomeEmail: {
        key: 'getServersWelcomeEmail',
        noun: 'Servers',
        display: {
            label: 'Resend Server Welcome Email',
            description: 'Resends the welcome email for the order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getServersWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    placeBuyNowServer: {
        key: 'placeBuyNowServer',
        noun: 'Servers',
        display: {
            label: 'Place Buy Now Server Order',
            description: 'Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...placeBuyNowServer_request.fields(),
            ],
            outputFields: [
                ...ServersBuyNowResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/order/buy_now_server'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...placeBuyNowServer_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'placeBuyNowServer', response.json);
                    return results;
                })
            },
            sample: samples['ServersBuyNowResponseSample']
        }
    },
    postServerReverseDns: {
        key: 'postServerReverseDns',
        noun: 'Servers',
        display: {
            label: 'Update Reverse DNS',
            description: 'Updates the reverse DNS (PTR record) entries for the server&#39;s IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postServerReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    putServers: {
        key: 'putServers',
        noun: 'Servers',
        display: {
            label: 'Validate Server Order',
            description: 'Validates a server order before placing it. Use this to check for errors before committing to a purchase.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putServers', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    serverIpmiLiveGet: {
        key: 'serverIpmiLiveGet',
        noun: 'Servers',
        display: {
            label: 'Server IPMI Live Information',
            description: 'Returns the current IPMI live connection information for the server.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ServerIpmiLiveInfo.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/ipmi_live'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'serverIpmiLiveGet', response.json);
                    return results;
                })
            },
            sample: samples['ServerIpmiLiveInfoSample']
        }
    },
    serverIpmiLivePost: {
        key: 'serverIpmiLivePost',
        noun: 'Servers',
        display: {
            label: 'Server IPMI Live Setup',
            description: 'Configures IPMI live access by whitelisting your current IP address for connections to the server&#39;s IPMI management interface.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'ip',
                    label: 'Your IP Address you wish to connect to the IPMI system from.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'asset',
                    label: 'Asset ID',
                    type: 'integer',
                },
            ],
            outputFields: [
                ...ServerIpmiLiveInfo.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('ip', bundle.inputData?.['ip'])
                formData.append('asset', bundle.inputData?.['asset'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/ipmi_live'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'serverIpmiLivePost', response.json);
                    return results;
                })
            },
            sample: samples['ServerIpmiLiveInfoSample']
        }
    },
    serverIpmiPowerGet: {
        key: 'serverIpmiPowerGet',
        noun: 'Servers',
        display: {
            label: 'Get IPMI Power Status',
            description: 'Returns the chassis power status from ipmi.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/ipmi_power'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'serverIpmiPowerGet', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    serverIpmiPowerPost: {
        key: 'serverIpmiPowerPost',
        noun: 'Servers',
        display: {
            label: 'Server IPMI Power',
            description: 'Uses the IPMI interface to set the Power status on the server.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'action',
                    label: 'The power action to send to the ipmi controller.',
                    type: 'string',
                    required: true,
                    choices: [
                        'cycle',
                        'reset',
                        'on',
                        'off',
                        'soft',
                    ],
                },
                {
                    key: 'asset',
                    label: 'The Asset ID',
                    type: 'integer',
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('action', bundle.inputData?.['action'])
                formData.append('asset', bundle.inputData?.['asset'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}/ipmi_power'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'serverIpmiPowerPost', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    serversCancel: {
        key: 'serversCancel',
        noun: 'Servers',
        display: {
            label: 'Cancel Server Service',
            description: 'Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...serversCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'serversCancel', response.json);
                    return results;
                })
            },
            sample: samples['serversCancel_200_responseSample']
        }
    },
    updateServerInfo: {
        key: 'updateServerInfo',
        noun: 'Servers',
        display: {
            label: 'Update Server Order',
            description: 'Updates settings on a dedicated server order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Server ID number.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/servers/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateServerInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
