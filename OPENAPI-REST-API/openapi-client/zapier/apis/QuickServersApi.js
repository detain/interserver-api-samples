const samples = require('../samples/QuickServersApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const QueueResponse = require('../models/QueueResponse');
const Quickserver = require('../models/Quickserver');
const QuickserverOrder = require('../models/QuickserverOrder');
const QuickserverRow = require('../models/QuickserverRow');
const RestoreRequest = require('../models/RestoreRequest');
const ReverseDnsEntries = require('../models/ReverseDnsEntries');
const ServiceOrderPostResponse = require('../models/ServiceOrderPostResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const VpsBackupRows = require('../models/VpsBackupRows');
const VpsTemplatesList = require('../models/VpsTemplatesList');
const downloadQsBackup_200_response = require('../models/downloadQsBackup_200_response');
const downloadQsBackup_request = require('../models/downloadQsBackup_request');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const quickserversCancel_200_response = require('../models/quickserversCancel_200_response');
const utils = require('../utils/utils');
const FormData = require('form-data');

module.exports = {
    addQs: {
        key: 'addQs',
        noun: 'QuickServers',
        display: {
            label: 'Place QuickServer Order',
            description: 'Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addQs', response.json);
                    return results;
                })
            },
            sample: samples['ServiceOrderPostResponseSample']
        }
    },
    deleteQsBackup: {
        key: 'deleteQsBackup',
        noun: 'QuickServers',
        display: {
            label: 'Delete QuickServer Backup',
            description: 'Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
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
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/backups'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteQsBackup', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    doQsBlockSmtp: {
        key: 'doQsBlockSmtp',
        noun: 'QuickServers',
        display: {
            label: 'Block QuickServer SMTP',
            description: 'Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/block_smtp'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsBlockSmtp', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsDisableCd: {
        key: 'doQsDisableCd',
        noun: 'QuickServers',
        display: {
            label: 'Disable CD Drive',
            description: 'Disables the virtual CD drive for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/disable_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsDisableCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsDisableQuota: {
        key: 'doQsDisableQuota',
        noun: 'QuickServers',
        display: {
            label: 'Disable Quotas',
            description: 'Disables disk quota enforcement for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/disable_quota'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsDisableQuota', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsEjectCd: {
        key: 'doQsEjectCd',
        noun: 'QuickServers',
        display: {
            label: 'Eject CD Drive',
            description: 'Ejects the virtual CD from the QuickServer&#39;s CD drive.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/eject_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsEjectCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsEnableQuota: {
        key: 'doQsEnableQuota',
        noun: 'QuickServers',
        display: {
            label: 'Enable Quotas',
            description: 'Enables disk quota enforcement for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/enable_quota'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsEnableQuota', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsRestart: {
        key: 'doQsRestart',
        noun: 'QuickServers',
        display: {
            label: 'Restart QuickServer',
            description: 'Restarts the QuickServer. The server will be shut down and started again.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/restart'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsRestart', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsStart: {
        key: 'doQsStart',
        noun: 'QuickServers',
        display: {
            label: 'Start QuickServer',
            description: 'Powers on the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/start'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsStart', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    doQsStop: {
        key: 'doQsStop',
        noun: 'QuickServers',
        display: {
            label: 'Stop QuickServer',
            description: 'Powers off the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/stop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'doQsStop', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    downloadQsBackup: {
        key: 'downloadQsBackup',
        noun: 'QuickServers',
        display: {
            label: 'Download QuickServer Backup',
            description: 'Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
                ...downloadQsBackup_request.fields(),
                {
                    key: 'all',
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/backups'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'downloadQsBackup', response.json);
                    return results;
                })
            },
            sample: samples['downloadQsBackup_200_responseSample']
        }
    },
    getNewQs: {
        key: 'getNewQs',
        noun: 'QuickServers',
        display: {
            label: 'Get QuickServer Ordering Information',
            description: 'Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...QuickserverOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewQs', response.json);
                    return results;
                })
            },
            sample: samples['QuickserverOrderSample']
        }
    },
    getQsBackups: {
        key: 'getQsBackups',
        noun: 'QuickServers',
        display: {
            label: 'List QuickServer Backups',
            description: 'Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'all',
                    label: 'Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/backups'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsBackups', response.json);
                    return results;
                })
            },
            sample: samples['VpsBackupRowsSample']
        }
    },
    getQsChangeHostname: {
        key: 'getQsChangeHostname',
        noun: 'QuickServers',
        display: {
            label: 'Get QuickServer Hostname',
            description: 'Retrieves the current hostname and any validation requirements for changing it.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_hostname'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsChangeHostname', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsChangeRootPassword: {
        key: 'getQsChangeRootPassword',
        noun: 'QuickServers',
        display: {
            label: 'Get Change Root Password Info',
            description: 'Retrieves instructions or metadata needed to reset the root password.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_root_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsChangeRootPassword', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsChangeTimezone: {
        key: 'getQsChangeTimezone',
        noun: 'QuickServers',
        display: {
            label: 'Get Timezone Info',
            description: 'Returns the list of available timezones that can be set on the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_timezone'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsChangeTimezone', response.json);
                    return { data: results };
                })
            },
            sample: { data: {} }
        }
    },
    getQsChangeWebuzoPassword: {
        key: 'getQsChangeWebuzoPassword',
        noun: 'QuickServers',
        display: {
            label: 'Webuzo Change Pass Info',
            description: 'Retrieves instructions or metadata for changing the Webuzo control panel password.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_webuzo_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsChangeWebuzoPassword', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsInfo: {
        key: 'getQsInfo',
        noun: 'QuickServers',
        display: {
            label: 'Get QuickServer Order',
            description: 'Returns detailed QuickServer information, including credentials, IPs, and available client actions.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Quickserver.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsInfo', response.json);
                    return results;
                })
            },
            sample: samples['QuickserverSample']
        }
    },
    getQsInsertCd: {
        key: 'getQsInsertCd',
        noun: 'QuickServers',
        display: {
            label: 'Insert CD Information',
            description: 'Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/insert_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsInsertCd', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsInvoices: {
        key: 'getQsInvoices',
        noun: 'QuickServers',
        display: {
            label: 'Get QuickServer Invoices',
            description: 'Returns the billing invoices associated with this QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getQsList: {
        key: 'getQsList',
        noun: 'QuickServers',
        display: {
            label: 'List QuickServers',
            description: 'Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsList', response.json);
                    return results;
                })
            },
            sample: samples['QuickserverRowSample']
        }
    },
    getQsReinstallOs: {
        key: 'getQsReinstallOs',
        noun: 'QuickServers',
        display: {
            label: 'QuickServer Reinstall OS Options',
            description: 'Returns the list of available operating system templates for reinstalling the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...VpsTemplatesList.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reinstall_os'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsReinstallOs', response.json);
                    return results;
                })
            },
            sample: samples['VpsTemplatesListSample']
        }
    },
    getQsResetPassword: {
        key: 'getQsResetPassword',
        noun: 'QuickServers',
        display: {
            label: 'Reset QuickServer Password Info',
            description: 'Returns information needed before resetting the QuickServer&#39;s root password.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reset_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsResetPassword', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsReverseDns: {
        key: 'getQsReverseDns',
        noun: 'QuickServers',
        display: {
            label: 'Reverse DNS Info',
            description: 'Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ReverseDnsEntries.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['ReverseDnsEntriesSample']
        }
    },
    getQsSetupVnc: {
        key: 'getQsSetupVnc',
        noun: 'QuickServers',
        display: {
            label: 'VNC Setup Info',
            description: 'Returns the current VNC connection information for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/setup_vnc'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsSetupVnc', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsTrafficUsage: {
        key: 'getQsTrafficUsage',
        noun: 'QuickServers',
        display: {
            label: 'Get Traffic Usage',
            description: 'Returns bandwidth traffic usage data for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/traffic_usage'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsTrafficUsage', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsViewDesktop: {
        key: 'getQsViewDesktop',
        noun: 'QuickServers',
        display: {
            label: 'Get View Desktop Info',
            description: 'Returns remote desktop connection information for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/view_desktop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsViewDesktop', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getQsWelcomeEmail: {
        key: 'getQsWelcomeEmail',
        noun: 'QuickServers',
        display: {
            label: 'Resend QuickServer Welcome Email',
            description: 'Resends the welcome email containing connection details and credentials for the QuickServer order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Quickserver ID',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getQsWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    postQsBackup: {
        key: 'postQsBackup',
        noun: 'QuickServers',
        display: {
            label: 'Create QuickServer Backup',
            description: 'Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/backup'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsBackup', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsChangeHostname: {
        key: 'postQsChangeHostname',
        noun: 'QuickServers',
        display: {
            label: 'Update QuickServer Hostname',
            description: 'Submits a hostname change request for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_hostname'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsChangeHostname', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsChangeRootPassword: {
        key: 'postQsChangeRootPassword',
        noun: 'QuickServers',
        display: {
            label: 'Change Root Password',
            description: 'Triggers a root password reset for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_root_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsChangeRootPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsChangeTimezone: {
        key: 'postQsChangeTimezone',
        noun: 'QuickServers',
        display: {
            label: 'Change QuickServer Timezone',
            description: 'Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_timezone'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsChangeTimezone', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsChangeWebuzoPassword: {
        key: 'postQsChangeWebuzoPassword',
        noun: 'QuickServers',
        display: {
            label: 'Change Webuzo Password',
            description: 'Resets the Webuzo control panel password for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/change_webuzo_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsChangeWebuzoPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsInsertCd: {
        key: 'postQsInsertCd',
        noun: 'QuickServers',
        display: {
            label: 'Insert CD in QuickServer',
            description: 'Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/insert_cd'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsInsertCd', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsReinstallOs: {
        key: 'postQsReinstallOs',
        noun: 'QuickServers',
        display: {
            label: 'Reinstall QuickServer OS',
            description: 'Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reinstall_os'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsReinstallOs', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsResetPassword: {
        key: 'postQsResetPassword',
        noun: 'QuickServers',
        display: {
            label: 'Reset QuickServer Password',
            description: 'Resets the root password on the QuickServer to a new randomly generated password.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reset_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsResetPassword', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsReverseDns: {
        key: 'postQsReverseDns',
        noun: 'QuickServers',
        display: {
            label: 'Update Reverse DNS',
            description: 'Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/reverse_dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsReverseDns', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    postQsSetupVnc: {
        key: 'postQsSetupVnc',
        noun: 'QuickServers',
        display: {
            label: 'Setup VNC',
            description: 'Sets up or refreshes the VNC console connection for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...QueueResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/setup_vnc'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsSetupVnc', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    postQsTrafficUsage: {
        key: 'postQsTrafficUsage',
        noun: 'QuickServers',
        display: {
            label: 'Search Traffic Usage',
            description: 'Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/traffic_usage'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsTrafficUsage', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postQsViewDesktop: {
        key: 'postQsViewDesktop',
        noun: 'QuickServers',
        display: {
            label: 'Update View Desktop',
            description: 'Updates or refreshes the remote desktop session for the QuickServer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/view_desktop'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQsViewDesktop', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postQuickServerRestore: {
        key: 'postQuickServerRestore',
        noun: 'QuickServers',
        display: {
            label: 'Restore QuickServer from Backup',
            description: 'Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}/restore'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postQuickServerRestore', response.json);
                    return results;
                })
            },
            sample: samples['QueueResponseSample']
        }
    },
    putQs: {
        key: 'putQs',
        noun: 'QuickServers',
        display: {
            label: 'Validate QuickServer Order',
            description: 'Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putQs', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    quickserversCancel: {
        key: 'quickserversCancel',
        noun: 'QuickServers',
        display: {
            label: 'Cancel QuickServer Order',
            description: 'Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...quickserversCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'quickserversCancel', response.json);
                    return results;
                })
            },
            sample: samples['quickserversCancel_200_responseSample']
        }
    },
    updateQsInfo: {
        key: 'updateQsInfo',
        noun: 'QuickServers',
        display: {
            label: 'Update QuickServer Order',
            description: 'Updates QuickServer metadata or stored settings associated with the order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'QuickServer ID number.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/qs/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateQsInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
