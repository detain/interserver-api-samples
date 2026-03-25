const samples = require('../samples/MailApi');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const DenyRuleNew = require('../models/DenyRuleNew');
const DenyRuleRecord = require('../models/DenyRuleRecord');
const GenericResponse = require('../models/GenericResponse');
const MailAlertRequest = require('../models/MailAlertRequest');
const MailAlertUpdateRequest = require('../models/MailAlertUpdateRequest');
const MailAlertsResponse = require('../models/MailAlertsResponse');
const MailBlocks = require('../models/MailBlocks');
const MailDelistRequest = require('../models/MailDelistRequest');
const MailDelistResponse = require('../models/MailDelistResponse');
const MailDeliverabilityResponse = require('../models/MailDeliverabilityResponse');
const MailLog = require('../models/MailLog');
const MailOrder = require('../models/MailOrder');
const MailRow = require('../models/MailRow');
const MailSchema = require('../models/MailSchema');
const MailStatsType = require('../models/MailStatsType');
const SendMail = require('../models/SendMail');
const SendMailAdv = require('../models/SendMailAdv');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const mailCancel_200_response = require('../models/mailCancel_200_response');
const viewMailLog_startDate_parameter = require('../models/viewMailLog_startDate_parameter');
const utils = require('../utils/utils');
const FormData = require('form-data');

module.exports = {
    addMail: {
        key: 'addMail',
        noun: 'Mail',
        display: {
            label: 'Place Mail Order',
            description: 'Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addMail', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    addRule: {
        key: 'addRule',
        noun: 'Mail',
        display: {
            label: 'Create Deny Rule',
            description: 'Adds a new deny rule to automatically block emails that match the specified criteria.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DenyRuleNew.fields(),
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/rules'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, application/x-www-form-urlencoded',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DenyRuleNew.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addRule', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    createMailAlert: {
        key: 'createMailAlert',
        noun: 'Mail',
        display: {
            label: 'Create Mail Alert',
            description: 'Creates a new alert for the mail service, such as delivery or quota notifications.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...MailAlertRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/alerts'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...MailAlertRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'createMailAlert', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteMailAlert: {
        key: 'deleteMailAlert',
        noun: 'Mail',
        display: {
            label: 'Delete Mail Alert',
            description: 'Deletes an existing alert definition for the mail service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'alert_id',
                    label: 'Alert ID to delete.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/alerts'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'alert_id': bundle.inputData?.['alert_id'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteMailAlert', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteRule: {
        key: 'deleteRule',
        noun: 'Mail',
        display: {
            label: 'Delete Deny Rule',
            description: 'Removes a deny rule from the mail service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'rule',
                    label: 'The ID of the Rules entry.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/rules/{rule}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteRule', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    delistBlock: {
        key: 'delistBlock',
        noun: 'Mail',
        display: {
            label: 'Remove Email Address from Block List',
            description: 'Removes an email address from the mail service&#39;s block lists.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'email',
                    label: 'an email address',
                    type: 'string',
                },
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('email', bundle.inputData?.['email'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/blocks/delete'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'delistBlock', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    getMailAlerts: {
        key: 'getMailAlerts',
        noun: 'Mail',
        display: {
            label: 'List Mail Alerts',
            description: 'Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...MailAlertsResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/alerts'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailAlerts', response.json);
                    return results;
                })
            },
            sample: samples['MailAlertsResponseSample']
        }
    },
    getMailBlocks: {
        key: 'getMailBlocks',
        noun: 'Mail',
        display: {
            label: 'List Blocked Email Addresses',
            description: 'Displays a listing of the blocked email addresses',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...MailBlocks.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/blocks'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailBlocks', response.json);
                    return results;
                })
            },
            sample: samples['MailBlocksSample']
        }
    },
    getMailDelist: {
        key: 'getMailDelist',
        noun: 'Mail',
        display: {
            label: 'Get Delist Status',
            description: 'Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...MailDelistResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/delist'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailDelist', response.json);
                    return results;
                })
            },
            sample: samples['MailDelistResponseSample']
        }
    },
    getMailDeliverability: {
        key: 'getMailDeliverability',
        noun: 'Mail',
        display: {
            label: 'Get Deliverability Metrics',
            description: 'Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...MailDeliverabilityResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/deliverability'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailDeliverability', response.json);
                    return results;
                })
            },
            sample: samples['MailDeliverabilityResponseSample']
        }
    },
    getMailInfo: {
        key: 'getMailInfo',
        noun: 'Mail',
        display: {
            label: 'Get Mail Order',
            description: 'Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...MailSchema.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailInfo', response.json);
                    return results;
                })
            },
            sample: samples['MailSchemaSample']
        }
    },
    getMailInvoices: {
        key: 'getMailInvoices',
        noun: 'Mail',
        display: {
            label: 'Get Mail Invoices',
            description: 'Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getMailList: {
        key: 'getMailList',
        noun: 'Mail',
        display: {
            label: 'List Mail Orders',
            description: 'Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailList', response.json);
                    return results;
                })
            },
            sample: samples['MailRowSample']
        }
    },
    getMailWelcomeEmail: {
        key: 'getMailWelcomeEmail',
        noun: 'Mail',
        display: {
            label: 'Resend Mail Welcome Email',
            description: 'Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getMailWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getNewMail: {
        key: 'getNewMail',
        noun: 'Mail',
        display: {
            label: 'Get Mail Ordering Information',
            description: 'Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...MailOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewMail', response.json);
                    return results;
                })
            },
            sample: samples['MailOrderSample']
        }
    },
    getRules: {
        key: 'getRules',
        noun: 'Mail',
        display: {
            label: 'List Deny Rules',
            description: 'Returns a listing of all the deny block rules configured for this mail service.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/rules'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getRules', response.json);
                    return results;
                })
            },
            sample: samples['DenyRuleRecordSample']
        }
    },
    getStats: {
        key: 'getStats',
        noun: 'Mail',
        display: {
            label: 'Get Mail Usage Statistics',
            description: 'Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'time',
                    label: 'The timeframe for the statistics.',
                    type: 'string',
                    choices: [
                        'all',
                        'billing',
                        'month',
                        '7d',
                        '24h',
                        '1d',
                        '1h',
                    ],
                },
            ],
            outputFields: [
                ...MailStatsType.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/stats'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'time': bundle.inputData?.['time'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getStats', response.json);
                    return results;
                })
            },
            sample: samples['MailStatsTypeSample']
        }
    },
    mailCancel: {
        key: 'mailCancel',
        noun: 'Mail',
        display: {
            label: 'Cancel Mail',
            description: 'Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...mailCancel_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'mailCancel', response.json);
                    return results;
                })
            },
            sample: samples['mailCancel_200_responseSample']
        }
    },
    postMailDelist: {
        key: 'postMailDelist',
        noun: 'Mail',
        display: {
            label: 'Delist a Blocked Sender',
            description: 'Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...MailDelistRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/delist'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...MailDelistRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postMailDelist', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    putMail: {
        key: 'putMail',
        noun: 'Mail',
        display: {
            label: 'Validate Mail Order',
            description: 'Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putMail', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    resetMailPassword: {
        key: 'resetMailPassword',
        noun: 'Mail',
        display: {
            label: 'Reset Mail Password',
            description: 'Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/reset_password'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'resetMailPassword', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    sendAdvMail: {
        key: 'sendAdvMail',
        noun: 'Mail',
        display: {
            label: 'Send Email with Advanced Options',
            description: 'Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...SendMailAdv.fields(),
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/advsend'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, application/x-www-form-urlencoded',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...SendMailAdv.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'sendAdvMail', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    sendMail: {
        key: 'sendMail',
        noun: 'Mail',
        display: {
            label: 'Send Email',
            description: 'Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...SendMail.fields(),
            ],
            outputFields: [
                ...GenericResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/send'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, application/x-www-form-urlencoded',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...SendMail.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'sendMail', response.json);
                    return results;
                })
            },
            sample: samples['GenericResponseSample']
        }
    },
    updateMailAlert: {
        key: 'updateMailAlert',
        noun: 'Mail',
        display: {
            label: 'Update Mail Alert',
            description: 'Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...MailAlertUpdateRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/alerts'),
                    method: 'PUT',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...MailAlertUpdateRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateMailAlert', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateMailInfo: {
        key: 'updateMailInfo',
        noun: 'Mail',
        display: {
            label: 'Update Mail Order',
            description: 'Updates mail service metadata for the order, such as stored settings or account details.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateMailInfo', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    viewMailLog: {
        key: 'viewMailLog',
        noun: 'Mail',
        display: {
            label: 'View Mail Log',
            description: 'Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the &#x60;groupby&#x60; parameter.  By default (&#x60;groupby&#x3D;recipient&#x60;), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and &#x60;mxHostname&#x60; values.  Set &#x60;groupby&#x3D;message&#x60; to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by &#x60;skip&#x60; and &#x60;limit&#x60;.  The &#x60;total&#x60; in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60;, &#x60;last monday&#x60;, or &#x60;2024-01-01 00:00:00&#x60;.  Examples: &#x60;startDate&#x3D;1704067200&amp;endDate&#x3D;1706745599&#x60; or &#x60;startDate&#x3D;2024-01-01&amp;endDate&#x3D;2024-01-31&#x60;.  **Sorting** is controlled by &#x60;sort&#x60; and &#x60;dir&#x60;.  Currently the only sort key is &#x60;time&#x60; (default), which orders by internal row ID.  **Delivery status** can be filtered with the &#x60;delivered&#x60; parameter: &#x60;delivered&#x3D;1&#x60; returns only successfully delivered messages; &#x60;delivered&#x3D;0&#x60; returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (&#x60;from&#x60;, &#x60;to&#x60;) and message headers (&#x60;headerfrom&#x60; for the &#x60;From:&#x60; header, &#x60;replyto&#x60; for &#x60;Reply-To:&#x60;). These may differ when a message is sent on behalf of another address.  The &#x60;mailid&#x60; parameter corresponds to the &#x60;id&#x60; field in the returned &#x60;MailLogEntry&#x60; objects, **not** the &#x60;_id&#x60; field.  It also matches the transaction ID returned in the &#x60;text&#x60; field of a successful send response.  The &#x60;messageId&#x60; parameter searches the &#x60;Message-ID&#x60; email header (case-insensitive substring match). ',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'id',
                    label: 'The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;.',
                    type: 'number',
                },
                {
                    key: 'origin',
                    label: 'Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.',
                    type: 'string',
                },
                {
                    key: 'mx',
                    label: 'Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response.',
                    type: 'string',
                },
                {
                    key: 'from',
                    label: 'Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;.',
                    type: 'string',
                },
                {
                    key: 'to',
                    label: 'Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved.',
                    type: 'string',
                },
                {
                    key: 'subject',
                    label: 'Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response.',
                    type: 'string',
                },
                {
                    key: 'mailid',
                    label: 'Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;.',
                    type: 'string',
                },
                {
                    key: 'messageId',
                    label: 'Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match.  The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;.',
                    type: 'string',
                },
                {
                    key: 'replyto',
                    label: 'Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set.',
                    type: 'string',
                },
                {
                    key: 'headerfrom',
                    label: 'Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address.',
                    type: 'string',
                },
                {
                    key: 'delivered',
                    label: 'Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.',
                    type: 'integer',
                    choices: [
                        '0',
                        '1',
                    ],
                },
                {
                    key: 'skip',
                    label: 'Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip).',
                    type: 'integer',
                },
                {
                    key: 'limit',
                    label: 'Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages.',
                    type: 'integer',
                },
                ....fields(),
                ....fields(),
                {
                    key: 'sort',
                    label: 'Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order).',
                    type: 'string',
                    choices: [
                        'time',
                    ],
                },
                {
                    key: 'dir',
                    label: 'Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first.',
                    type: 'string',
                    choices: [
                        'asc',
                        'desc',
                    ],
                },
                {
                    key: 'groupby',
                    label: 'Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode.',
                    type: 'string',
                    choices: [
                        'message',
                        'recipient',
                    ],
                },
            ],
            outputFields: [
                ...MailLog.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/mail/{id}/log'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'id': bundle.inputData?.['id'],
                        'origin': bundle.inputData?.['origin'],
                        'mx': bundle.inputData?.['mx'],
                        'from': bundle.inputData?.['from'],
                        'to': bundle.inputData?.['to'],
                        'subject': bundle.inputData?.['subject'],
                        'mailid': bundle.inputData?.['mailid'],
                        'messageId': bundle.inputData?.['messageId'],
                        'replyto': bundle.inputData?.['replyto'],
                        'headerfrom': bundle.inputData?.['headerfrom'],
                        'delivered': bundle.inputData?.['delivered'],
                        'skip': bundle.inputData?.['skip'],
                        'limit': bundle.inputData?.['limit'],
                        'startDate': bundle.inputData?.['startDate'],
                        'endDate': bundle.inputData?.['endDate'],
                        'sort': bundle.inputData?.['sort'],
                        'dir': bundle.inputData?.['dir'],
                        'groupby': bundle.inputData?.['groupby'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'viewMailLog', response.json);
                    return results;
                })
            },
            sample: samples['MailLogSample']
        }
    },
}
