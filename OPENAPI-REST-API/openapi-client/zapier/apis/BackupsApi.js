const samples = require('../samples/BackupsApi');
const Backup = require('../models/Backup');
const BackupLoginResponse = require('../models/BackupLoginResponse');
const BackupOrderPostResponse = require('../models/BackupOrderPostResponse');
const BackupOrderPutResponse = require('../models/BackupOrderPutResponse');
const BackupRow = require('../models/BackupRow');
const BackupsOrder = require('../models/BackupsOrder');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const cancelBackup_200_response = require('../models/cancelBackup_200_response');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    addBackup: {
        key: 'addBackup',
        noun: 'Backups',
        display: {
            label: 'Place Backup Order',
            description: 'Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'validateOnly',
                    label: '',
                    type: 'boolean',
                },
                {
                    key: 'serviceType',
                    label: '',
                    type: 'integer',
                },
                {
                    key: 'coupon',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...BackupOrderPostResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('validateOnly', bundle.inputData?.['validateOnly'])
                formData.append('serviceType', bundle.inputData?.['serviceType'])
                formData.append('coupon', bundle.inputData?.['coupon'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addBackup', response.json);
                    return results;
                })
            },
            sample: samples['BackupOrderPostResponseSample']
        }
    },
    cancelBackup: {
        key: 'cancelBackup',
        noun: 'Backups',
        display: {
            label: 'Cancel Backup Service',
            description: 'Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...cancelBackup_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'cancelBackup', response.json);
                    return results;
                })
            },
            sample: samples['cancelBackup_200_responseSample']
        }
    },
    getBackupInfo: {
        key: 'getBackupInfo',
        noun: 'Backups',
        display: {
            label: 'Get Backup Service Details',
            description: 'Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Backup.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBackupInfo', response.json);
                    return results;
                })
            },
            sample: samples['BackupSample']
        }
    },
    getBackupInvoices: {
        key: 'getBackupInvoices',
        noun: 'Backups',
        display: {
            label: 'Get Backup Order Invoices',
            description: 'Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBackupInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getBackupLogin: {
        key: 'getBackupLogin',
        noun: 'Backups',
        display: {
            label: 'Get Backup Storage Panel Login',
            description: 'Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...BackupLoginResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}/login'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBackupLogin', response.json);
                    return results;
                })
            },
            sample: samples['BackupLoginResponseSample']
        }
    },
    getBackupsList: {
        key: 'getBackupsList',
        noun: 'Backups',
        display: {
            label: 'List Backup Services',
            description: 'Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBackupsList', response.json);
                    return results;
                })
            },
            sample: samples['BackupRowSample']
        }
    },
    getBackupsWelcomeEmail: {
        key: 'getBackupsWelcomeEmail',
        noun: 'Backups',
        display: {
            label: 'Resend Backup Welcome Email',
            description: 'Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getBackupsWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getNewBackup: {
        key: 'getNewBackup',
        noun: 'Backups',
        display: {
            label: 'Get Backup Order Form Data',
            description: 'Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...BackupsOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewBackup', response.json);
                    return results;
                })
            },
            sample: samples['BackupsOrderSample']
        }
    },
    updateBackupInfo: {
        key: 'updateBackupInfo',
        noun: 'Backups',
        display: {
            label: 'Update Backup Information',
            description: 'Updates backup storage service metadata, such as stored credentials or settings for the order.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateBackupInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    validateBackupOrder: {
        key: 'validateBackupOrder',
        noun: 'Backups',
        display: {
            label: 'Validate Backup Order',
            description: 'Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'validateOnly',
                    label: '',
                    type: 'boolean',
                },
                {
                    key: 'serviceType',
                    label: '',
                    type: 'integer',
                },
                {
                    key: 'coupon',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...BackupOrderPutResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('validateOnly', bundle.inputData?.['validateOnly'])
                formData.append('serviceType', bundle.inputData?.['serviceType'])
                formData.append('coupon', bundle.inputData?.['coupon'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/backups/order'),
                    method: 'PUT',
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'validateBackupOrder', response.json);
                    return results;
                })
            },
            sample: samples['BackupOrderPutResponseSample']
        }
    },
}
