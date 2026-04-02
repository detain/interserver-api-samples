const samples = require('../samples/VPSApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const QueueResponse = require('../models/QueueResponse');
const RestoreRequest = require('../models/RestoreRequest');
const ReverseDnsEntries = require('../models/ReverseDnsEntries');
const ServiceOrderPostResponse = require('../models/ServiceOrderPostResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const VPSCancel_200_response = require('../models/VPSCancel_200_response');
const Vps = require('../models/Vps');
const VpsBackupRows = require('../models/VpsBackupRows');
const VpsOrder = require('../models/VpsOrder');
const VpsOrderPostRequest = require('../models/VpsOrderPostRequest');
const VpsOrderPutRequest = require('../models/VpsOrderPutRequest');
const VpsOrderPutResponse = require('../models/VpsOrderPutResponse');
const VpsRow = require('../models/VpsRow');
const VpsTemplatesList = require('../models/VpsTemplatesList');
const VpsTrafficResponse = require('../models/VpsTrafficResponse');
const downloadQsBackup_200_response = require('../models/downloadQsBackup_200_response');
const downloadQsBackup_request = require('../models/downloadQsBackup_request');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    addVps: {
        key: 'addVps',
        noun: 'VPS',
        display: {
            label: 'Place VPS Order',
            description: 'Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...VpsOrderPostRequest.fields(),
            ],
            outputFields: [
                ...ServiceOrderPostResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/order'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...VpsOrderPostRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addVps', response.json);
                    return results;
                })
            },
            sample: samples['ServiceOrderPostResponseSample']
        }
    },
    deleteVpsBackup: {
        key: 'deleteVpsBackup',
        noun: 'VPS',
        display: {
            label: 'Delete VPS Backup',
            description: 'Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'file',
                    label: 'The backup filename to delete.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'all',
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.',
                    type: 'string',
                    choices: [
                        '0',
                        '1',
                    ],
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/backups'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'file': bundle.inputData?.['file'],
                        'all': bundle.inputData?.['all'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteVpsBackup', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    doVpsBlockSmtp: {
        key: 'doVpsBlockSmtp',
        noun: 'VPS',
        display: {
            label: 'Blocks SMTP',
            description: 'Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/block_smtp'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsBlockSmtp', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsDisableCd: {
        key: 'doVpsDisableCd',
        noun: 'VPS',
        display: {
            label: 'Disable CD Drive',
            description: 'Disables the virtual CD drive on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/disable_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsDisableCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsDisableQuota: {
        key: 'doVpsDisableQuota',
        noun: 'VPS',
        display: {
            label: 'Disable Quotas',
            description: 'Disables disk quota enforcement on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/disable_quota'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsDisableQuota', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsEjectCd: {
        key: 'doVpsEjectCd',
        noun: 'VPS',
        display: {
            label: 'Eject CD Drive',
            description: 'Ejects the virtual CD from the VPS CD drive.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/eject_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsEjectCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsEnableQuota: {
        key: 'doVpsEnableQuota',
        noun: 'VPS',
        display: {
            label: 'Enable Quotas',
            description: 'Enables disk quota enforcement on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/enable_quota'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsEnableQuota', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsRestart: {
        key: 'doVpsRestart',
        noun: 'VPS',
        display: {
            label: 'Restart VPS',
            description: 'Restarts the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/restart'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsRestart', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsStart: {
        key: 'doVpsStart',
        noun: 'VPS',
        display: {
            label: 'Start VPS',
            description: 'Powers on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/start'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsStart', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doVpsStop: {
        key: 'doVpsStop',
        noun: 'VPS',
        display: {
            label: 'Stop VPS',
            description: 'Powers off the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/stop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doVpsStop', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    downloadVpsBackup: {
        key: 'downloadVpsBackup',
        noun: 'VPS',
        display: {
            label: 'Download VPS Backup',
            description: 'Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                ...downloadQsBackup_request.fields(),
                {
                    key: 'all',
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.',
                    type: 'string',
                    choices: [
                        '0',
                        '1',
                    ],
                },
            ],
            outputFields: [
                ...downloadQsBackup_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/backups'),
                    method: 'PATCH',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                        'all': bundle.inputData?.['all'],
                    },
                    body: {
                        ...downloadQsBackup_request.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'downloadVpsBackup', response.json);
                    return results;
                })
            },
            sample: samples['downloadQsBackup_200_responseSample']
        }
    },
    getNewVps: {
        key: 'getNewVps',
        noun: 'VPS',
        display: {
            label: 'VPS Ordering Information',
            description: 'Retrieves available VPS configurations, OS templates, and pricing for ordering.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...VpsOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewVps', response.json);
                    return results;
                })
            },
            sample: samples['VpsOrderSample']
        }
    },
    getVpsBackups: {
        key: 'getVpsBackups',
        noun: 'VPS',
        display: {
            label: 'Get VPS Backups List',
            description: 'Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'all',
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.',
                    type: 'string',
                    choices: [
                        '0',
                        '1',
                    ],
                },
            ],
            outputFields: [
                ...VpsBackupRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/backups'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'all': bundle.inputData?.['all'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsBackups', response.json);
                    return results;
                })
            },
            sample: samples['VpsBackupRowsSample']
        }
    },
    getVpsBuyHdSpace: {
        key: 'getVpsBuyHdSpace',
        noun: 'VPS',
        display: {
            label: 'HD Space Addon Info',
            description: 'Returns available hard drive space addon options and pricing for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/buy_hd_space'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsBuyHdSpace', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getVpsBuyIp: {
        key: 'getVpsBuyIp',
        noun: 'VPS',
        display: {
            label: 'Additional IP Addon Info',
            description: 'Returns available additional IP address options and pricing for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/buy_ip'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsBuyIp', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getVpsChangeTimezone: {
        key: 'getVpsChangeTimezone',
        noun: 'VPS',
        display: {
            label: 'Get Timezone Info',
            description: 'Returns the list of available timezones that can be set on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/change_timezone'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsChangeTimezone', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    getVpsInfo: {
        key: 'getVpsInfo',
        noun: 'VPS',
        display: {
            label: 'Get VPS Order',
            description: 'Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Vps.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsInfo', response.json);
                    return results;
                })
            },
            sample: samples['VpsSample']
        }
    },
    getVpsInvoices: {
        key: 'getVpsInvoices',
        noun: 'VPS',
        display: {
            label: 'Get VPS Invoices',
            description: 'Returns the billing invoices associated with this VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getVpsList: {
        key: 'getVpsList',
        noun: 'VPS',
        display: {
            label: 'List VPS Orders',
            description: 'Returns all VPS services on the account with their current status and configuration.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsList', response.json);
                    return results;
                })
            },
            sample: samples['VpsRowSample']
        }
    },
    getVpsReinstallOs: {
        key: 'getVpsReinstallOs',
        noun: 'VPS',
        display: {
            label: 'VPS Reinstall OS Options',
            description: 'Returns the list of available OS templates for reinstalling the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...VpsTemplatesList.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/reinstall_os'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsReinstallOs', response.json);
                    return results;
                })
            },
            sample: samples['VpsTemplatesListSample']
        }
    },
    getVpsReverseDns: {
        key: 'getVpsReverseDns',
        noun: 'VPS',
        display: {
            label: 'Reverse DNS Info',
            description: 'Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ReverseDnsEntries.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['ReverseDnsEntriesSample']
        }
    },
    getVpsSetupVnc: {
        key: 'getVpsSetupVnc',
        noun: 'VPS',
        display: {
            label: 'VNC Setup Info',
            description: 'Returns the current VNC connection information for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/setup_vnc'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsSetupVnc', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getVpsSlices: {
        key: 'getVpsSlices',
        noun: 'VPS',
        display: {
            label: 'Slice Upgrade Info',
            description: 'Returns available slice upgrade options and pricing for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/slices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsSlices', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getVpsTrafficUsage: {
        key: 'getVpsTrafficUsage',
        noun: 'VPS',
        display: {
            label: 'Get Traffic Usage',
            description: 'Returns bandwidth traffic usage data for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...VpsTrafficResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/traffic_usage'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsTrafficUsage', response.json);
                    return results;
                })
            },
            sample: samples['VpsTrafficResponseSample']
        }
    },
    getVpsViewDesktop: {
        key: 'getVpsViewDesktop',
        noun: 'VPS',
        display: {
            label: 'Get View Desktop Info',
            description: 'Returns remote desktop connection information for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/view_desktop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsViewDesktop', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getVpsWelcomeEmail: {
        key: 'getVpsWelcomeEmail',
        noun: 'VPS',
        display: {
            label: 'Resend VPS Welcome Email',
            description: 'Resends the welcome email containing connection details and credentials for the VPS order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getVpsWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    postVpsBackup: {
        key: 'postVpsBackup',
        noun: 'VPS',
        display: {
            label: 'Start a VPS Backup',
            description: 'Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/backup'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsBackup', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsBuyHdSpace: {
        key: 'postVpsBuyHdSpace',
        noun: 'VPS',
        display: {
            label: 'Purchase HD Space Addon',
            description: 'Purchases additional hard drive space for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/buy_hd_space'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsBuyHdSpace', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postVpsBuyIp: {
        key: 'postVpsBuyIp',
        noun: 'VPS',
        display: {
            label: 'Purchase Additional IP',
            description: 'Purchases an additional IP address for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/buy_ip'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsBuyIp', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postVpsChangeHostname: {
        key: 'postVpsChangeHostname',
        noun: 'VPS',
        display: {
            label: 'Update VPS Hostname',
            description: 'Changes the hostname of the VPS. This queues a background task to update the server.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'hostname',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('hostname', bundle.inputData?.['hostname'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/change_hostname'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsChangeHostname', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsChangeRootPassword: {
        key: 'postVpsChangeRootPassword',
        noun: 'VPS',
        display: {
            label: 'Change VPS Root Password',
            description: 'Changes the root password of the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'password',
                    label: '',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('password', bundle.inputData?.['password'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/change_root_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsChangeRootPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsChangeTimezone: {
        key: 'postVpsChangeTimezone',
        noun: 'VPS',
        display: {
            label: 'Change VPS Timezone',
            description: 'Changes the system timezone on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'timezone',
                    label: 'The time zone',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('timezone', bundle.inputData?.['timezone'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/change_timezone'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsChangeTimezone', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsChangeWebuzoPassword: {
        key: 'postVpsChangeWebuzoPassword',
        noun: 'VPS',
        display: {
            label: 'Change Webuzo Password',
            description: 'Changes the Webuzo control panel password on the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'password',
                    label: '',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('password', bundle.inputData?.['password'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/change_webuzo_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsChangeWebuzoPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsInsertCd: {
        key: 'postVpsInsertCd',
        noun: 'VPS',
        display: {
            label: 'Insert CD in VPS',
            description: 'Mounts an ISO image in the VPS virtual CD drive from the given URL.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'url',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('url', bundle.inputData?.['url'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/insert_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsInsertCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsReinstallOs: {
        key: 'postVpsReinstallOs',
        noun: 'VPS',
        display: {
            label: 'Reinstall VPS OS',
            description: 'Reinstalls the operating system on the VPS. Warning - all data will be erased.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'template',
                    label: 'OS Template Filename',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'localPassword',
                    label: 'Password for this account.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'password',
                    label: 'Password for Root / Administrator Account.',
                    type: 'string',
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('template', bundle.inputData?.['template'])
                formData.append('localPassword', bundle.inputData?.['localPassword'])
                formData.append('password', bundle.inputData?.['password'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/reinstall_os'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsReinstallOs', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsResetPassword: {
        key: 'postVpsResetPassword',
        noun: 'VPS',
        display: {
            label: 'Reset VPS Password',
            description: 'Resets the root password on the VPS to a new randomly generated password.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/reset_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsResetPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsRestore: {
        key: 'postVpsRestore',
        noun: 'VPS',
        display: {
            label: 'Restore VPS from Backup',
            description: 'Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
                ...RestoreRequest.fields(),
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/restore'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...RestoreRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsRestore', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsReverseDns: {
        key: 'postVpsReverseDns',
        noun: 'VPS',
        display: {
            label: 'Update Reverse DNS',
            description: 'Updates the reverse DNS (PTR record) entries for the VPS IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    postVpsSetupVnc: {
        key: 'postVpsSetupVnc',
        noun: 'VPS',
        display: {
            label: 'Setup VNC',
            description: 'Sets up or refreshes the VNC console connection for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/setup_vnc'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsSetupVnc', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postVpsSlices: {
        key: 'postVpsSlices',
        noun: 'VPS',
        display: {
            label: 'Purchase Slice Upgrade',
            description: 'Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/slices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsSlices', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postVpsViewDesktop: {
        key: 'postVpsViewDesktop',
        noun: 'VPS',
        display: {
            label: 'Update View Desktop',
            description: 'Updates or refreshes the remote desktop session for the VPS.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}/view_desktop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postVpsViewDesktop', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    putVps: {
        key: 'putVps',
        noun: 'VPS',
        display: {
            label: 'Validate VPS Order',
            description: 'Validates a VPS order before placing it. Returns cost breakdown and any validation errors.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...VpsOrderPutRequest.fields(),
            ],
            outputFields: [
                ...VpsOrderPutResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/order'),
                    method: 'PUT',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...VpsOrderPutRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putVps', response.json);
                    return results;
                })
            },
            sample: samples['VpsOrderPutResponseSample']
        }
    },
    updateVpsInfo: {
        key: 'updateVpsInfo',
        noun: 'VPS',
        display: {
            label: 'Update VPS Order',
            description: 'Updates settings on a VPS order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateVpsInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    vPSCancel: {
        key: 'vPSCancel',
        noun: 'VPS',
        display: {
            label: 'Cancel VPS Service',
            description: 'Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'VPS ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...VPSCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/vps/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'vPSCancel', response.json);
                    return results;
                })
            },
            sample: samples['VPSCancel_200_responseSample']
        }
    },
}
