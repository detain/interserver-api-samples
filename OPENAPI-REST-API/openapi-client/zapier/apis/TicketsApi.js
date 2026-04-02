const samples = require('../samples/TicketsApi');
const CloseTicketResponseSchema = require('../models/CloseTicketResponseSchema');
const ReplyTicketRequest = require('../models/ReplyTicketRequest');
const ReplyTicketResponseSchema = require('../models/ReplyTicketResponseSchema');
const TicketNew = require('../models/TicketNew');
const TicketNewResponse = require('../models/TicketNewResponse');
const Tickets = require('../models/Tickets');
const UpdateTicket = require('../models/UpdateTicket');
const UpdateTicketResponseSchema = require('../models/UpdateTicketResponseSchema');
const ViewTicketResponse = require('../models/ViewTicketResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');

module.exports = {
    addNewTicket: {
        key: 'addNewTicket',
        noun: 'Tickets',
        display: {
            label: 'Create New Ticket',
            description: 'Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.',
            hidden: false,
        },
        operation: {
            inputFields: [
                ...TicketNew.fields(),
            ],
            outputFields: [
                ...TicketNewResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/new'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...TicketNew.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addNewTicket', response.json);
                    return results;
                })
            },
            sample: samples['TicketNewResponseSample']
        }
    },
    closeTicket: {
        key: 'closeTicket',
        noun: 'Tickets',
        display: {
            label: 'Close Ticket',
            description: 'Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Ticket ID',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...CloseTicketResponseSchema.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}/close'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'closeTicket', response.json);
                    return results;
                })
            },
            sample: samples['CloseTicketResponseSchemaSample']
        }
    },
    deleteTicketInfo: {
        key: 'deleteTicketInfo',
        noun: 'Tickets',
        display: {
            label: 'Close Ticket',
            description: 'Closes the support ticket.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Ticket ID number.',
                    type: 'number',
                    required: true,
                },
            ],
            outputFields: [
                ...ViewTicketResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteTicketInfo', response.json);
                    return results;
                })
            },
            sample: samples['ViewTicketResponseSample']
        }
    },
    getNewTicket: {
        key: 'getNewTicket',
        noun: 'Tickets',
        display: {
            label: 'Gets Information for creating a new ticket.',
            description: 'Returns the form data needed to create a new support ticket, such as available departments and service categories.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/new'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewTicket', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getTicketInfo: {
        key: 'getTicketInfo',
        noun: 'Tickets',
        display: {
            label: 'Get Ticket Information',
            description: 'Returns the full details of a support ticket including its history of replies.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Ticket ID number.',
                    type: 'number',
                    required: true,
                },
            ],
            outputFields: [
                ...ViewTicketResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getTicketInfo', response.json);
                    return results;
                })
            },
            sample: samples['ViewTicketResponseSample']
        }
    },
    getTicketsList: {
        key: 'getTicketsList',
        noun: 'Tickets',
        display: {
            label: 'List Support Tickets',
            description: 'Returns a paginated list of support tickets on the account. Filter by status and time period.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'page',
                    label: 'Page number for paginated results.',
                    type: 'integer',
                },
                {
                    key: 'period',
                    label: 'How far back to show tickets from. Value is in days.',
                    type: 'string',
                    choices: [
                        '30',
                        '90',
                        '365',
                        '1825',
                        'all',
                    ],
                },
                {
                    key: 'view',
                    label: 'The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.',
                    type: 'string',
                    choices: [
                        'Open',
                        'Closed',
                        'On Hold',
                        'In Progress',
                    ],
                },
            ],
            outputFields: [
                ...Tickets.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets'),
                    method: 'GET',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'page': bundle.inputData?.['page'],
                        'period': bundle.inputData?.['period'],
                        'view': bundle.inputData?.['view'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getTicketsList', response.json);
                    return results;
                })
            },
            sample: samples['TicketsSample']
        }
    },
    postTicketInfo: {
        key: 'postTicketInfo',
        noun: 'Tickets',
        display: {
            label: 'Reply To Ticket',
            description: 'Adds a reply to an existing support ticket.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Ticket ID number.',
                    type: 'number',
                    required: true,
                },
            ],
            outputFields: [
                ...ViewTicketResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postTicketInfo', response.json);
                    return results;
                })
            },
            sample: samples['ViewTicketResponseSample']
        }
    },
    postTicketsList: {
        key: 'postTicketsList',
        noun: 'Tickets',
        display: {
            label: 'Search Support Tickets',
            description: 'Searches support tickets by email, subject, or ticket mask ID.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...Tickets.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postTicketsList', response.json);
                    return results;
                })
            },
            sample: samples['TicketsSample']
        }
    },
    putTicketInfo: {
        key: 'putTicketInfo',
        noun: 'Tickets',
        display: {
            label: 'Update Ticket',
            description: 'Updates a support ticket&#39;s properties such as subject or status.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'Ticket ID number.',
                    type: 'number',
                    required: true,
                },
            ],
            outputFields: [
                ...ViewTicketResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putTicketInfo', response.json);
                    return results;
                })
            },
            sample: samples['ViewTicketResponseSample']
        }
    },
    replyTicket: {
        key: 'replyTicket',
        noun: 'Tickets',
        display: {
            label: 'Reply Ticket',
            description: 'Posts a reply to an existing support ticket thread.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The ticket ID number.',
                    type: 'number',
                    required: true,
                },
                ...ReplyTicketRequest.fields(),
            ],
            outputFields: [
                ...ReplyTicketResponseSchema.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}/reply'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...ReplyTicketRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'replyTicket', response.json);
                    return results;
                })
            },
            sample: samples['ReplyTicketResponseSchemaSample']
        }
    },
    updateTicketInfo: {
        key: 'updateTicketInfo',
        noun: 'Tickets',
        display: {
            label: 'Update Ticket',
            description: 'Updates a support ticket&#39;s subject or body content.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The ticket ID number.',
                    type: 'number',
                    required: true,
                },
                ...UpdateTicket.fields(),
            ],
            outputFields: [
                ...UpdateTicketResponseSchema.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/tickets/{id}/update'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...UpdateTicket.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateTicketInfo', response.json);
                    return results;
                })
            },
            sample: samples['UpdateTicketResponseSchemaSample']
        }
    },
}
