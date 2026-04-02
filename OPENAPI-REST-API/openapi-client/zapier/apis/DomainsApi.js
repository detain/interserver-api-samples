const samples = require('../samples/DomainsApi');
const CancelDomain_200_response = require('../models/CancelDomain_200_response');
const ChargeInvoiceRows = require('../models/ChargeInvoiceRows');
const Domain = require('../models/Domain');
const DomainContactDetails = require('../models/DomainContactDetails');
const DomainDnssecRecords = require('../models/DomainDnssecRecords');
const DomainDnssecRequest = require('../models/DomainDnssecRequest');
const DomainLookupResponse = require('../models/DomainLookupResponse');
const DomainNameserverGetResponse = require('../models/DomainNameserverGetResponse');
const DomainNameserverPostRequest = require('../models/DomainNameserverPostRequest');
const DomainNameserverPutRequest = require('../models/DomainNameserverPutRequest');
const DomainOrder = require('../models/DomainOrder');
const DomainRow = require('../models/DomainRow');
const DomainSearchResponse = require('../models/DomainSearchResponse');
const DomainWhoisPrivacyRequest = require('../models/DomainWhoisPrivacyRequest');
const ServiceOrderPostResponse = require('../models/ServiceOrderPostResponse');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const TextResponse = require('../models/TextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');

module.exports = {
    addDomain: {
        key: 'addDomain',
        noun: 'Domains',
        display: {
            label: 'Place Domain Order',
            description: 'Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.',
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
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addDomain', response.json);
                    return results;
                })
            },
            sample: samples['ServiceOrderPostResponseSample']
        }
    },
    addDomainDnssec: {
        key: 'addDomainDnssec',
        noun: 'Domains',
        display: {
            label: 'Add Domain DNSSEC Records',
            description: 'Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DomainDnssecRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/dnssec'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DomainDnssecRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addDomainDnssec', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    addDomainNameserver: {
        key: 'addDomainNameserver',
        noun: 'Domains',
        display: {
            label: 'Add Registered Nameserver',
            description: 'Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DomainNameserverPostRequest.fields(),
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/nameservers'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DomainNameserverPostRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addDomainNameserver', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    cancelDomain: {
        key: 'cancelDomain',
        noun: 'Domains',
        display: {
            label: 'Cancel Domain Order',
            description: 'Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...CancelDomain_200_response.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'cancelDomain', response.json);
                    return results;
                })
            },
            sample: samples['CancelDomain_200_responseSample']
        }
    },
    deleteDomainDnssec: {
        key: 'deleteDomainDnssec',
        noun: 'Domains',
        display: {
            label: 'Remove Domain DNSSEC Records',
            description: 'Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'action',
                    label: 'Set to &#x60;delete&#x60; to remove all DNSSEC records.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/dnssec'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'action': bundle.inputData?.['action'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteDomainDnssec', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteDomainNameserver: {
        key: 'deleteDomainNameserver',
        noun: 'Domains',
        display: {
            label: 'Delete Registered Nameserver',
            description: 'Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'index',
                    label: 'The index of the registered nameserver from the registered nameservers list to delete.  ',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/nameservers'),
                    method: 'DELETE',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': '',
                        'Accept': 'application/json',
                    },
                    params: {
                        'index': bundle.inputData?.['index'],
                    },
                    body: {
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteDomainNameserver', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    getDomainContact: {
        key: 'getDomainContact',
        noun: 'Domains',
        display: {
            label: 'Get Domain Contact Details',
            description: 'Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...DomainContactDetails.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/contact'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainContact', response.json);
                    return results;
                })
            },
            sample: samples['DomainContactDetailsSample']
        }
    },
    getDomainDnssec: {
        key: 'getDomainDnssec',
        noun: 'Domains',
        display: {
            label: 'Get Domain DNSSEC Records',
            description: 'Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...DomainDnssecRecords.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/dnssec'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainDnssec', response.json);
                    return results;
                })
            },
            sample: samples['DomainDnssecRecordsSample']
        }
    },
    getDomainInfo: {
        key: 'getDomainInfo',
        noun: 'Domains',
        display: {
            label: 'Get Domain Order',
            description: 'Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...Domain.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainInfo', response.json);
                    return results;
                })
            },
            sample: samples['DomainSample']
        }
    },
    getDomainInvoices: {
        key: 'getDomainInvoices',
        noun: 'Domains',
        display: {
            label: 'Get Domain Invoices',
            description: 'Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...ChargeInvoiceRows.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/invoices'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainInvoices', response.json);
                    return results;
                })
            },
            sample: samples['ChargeInvoiceRowsSample']
        }
    },
    getDomainLookup: {
        key: 'getDomainLookup',
        noun: 'Domains',
        display: {
            label: 'Lookup Domain Availability and Pricing',
            description: 'Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: 'The full domain name to look up (for example &#x60;example.com&#x60;).',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...DomainLookupResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/lookup/{name}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainLookup', response.json);
                    return results;
                })
            },
            sample: samples['DomainLookupResponseSample']
        }
    },
    getDomainNameservers: {
        key: 'getDomainNameservers',
        noun: 'Domains',
        display: {
            label: 'List Registered Nameservers',
            description: 'Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...DomainNameserverGetResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/nameservers'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainNameservers', response.json);
                    return results;
                })
            },
            sample: samples['DomainNameserverGetResponseSample']
        }
    },
    getDomainOrderFields: {
        key: 'getDomainOrderFields',
        noun: 'Domains',
        display: {
            label: 'Get Domain Order Fields',
            description: 'Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'domain',
                    label: 'The fully qualified domain name (e.g. &#x60;example.com&#x60;).',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'regType',
                    label: 'The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order/{domain}/{regType}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainOrderFields', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getDomainOrderSearchResults: {
        key: 'getDomainOrderSearchResults',
        noun: 'Domains',
        display: {
            label: 'Get Domain Order Search Results',
            description: 'Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'domain',
                    label: 'The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order/{domain}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainOrderSearchResults', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    getDomainRenewal: {
        key: 'getDomainRenewal',
        noun: 'Domains',
        display: {
            label: 'Start Domain Renewal Flow',
            description: 'Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/renew'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainRenewal', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getDomainSearch: {
        key: 'getDomainSearch',
        noun: 'Domains',
        display: {
            label: 'Search Domain Suggestions',
            description: 'Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'name',
                    label: 'The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...DomainSearchResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/search/{name}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainSearch', response.json);
                    return results;
                })
            },
            sample: samples['DomainSearchResponseSample']
        }
    },
    getDomainTransfer: {
        key: 'getDomainTransfer',
        noun: 'Domains',
        display: {
            label: 'Start Domain Transfer Flow',
            description: 'Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/transfer'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainTransfer', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getDomainWhoisPrivacy: {
        key: 'getDomainWhoisPrivacy',
        noun: 'Domains',
        display: {
            label: 'Get Whois Privacy Status',
            description: 'Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/whois'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainWhoisPrivacy', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getDomainsList: {
        key: 'getDomainsList',
        noun: 'Domains',
        display: {
            label: 'List Domain Orders',
            description: 'Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainsList', response.json);
                    return results;
                })
            },
            sample: samples['DomainRowSample']
        }
    },
    getDomainsWelcomeEmail: {
        key: 'getDomainsWelcomeEmail',
        noun: 'Domains',
        display: {
            label: 'Resend Domain Welcome Email',
            description: 'Resends the welcome email for the domain service. The email contains registration details and management instructions.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/welcome_email'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDomainsWelcomeEmail', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getNewDomain: {
        key: 'getNewDomain',
        noun: 'Domains',
        display: {
            label: 'Get Domain Ordering Information',
            description: 'Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
                ...DomainOrder.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getNewDomain', response.json);
                    return results;
                })
            },
            sample: samples['DomainOrderSample']
        }
    },
    patchDomains: {
        key: 'patchDomains',
        noun: 'Domains',
        display: {
            label: 'Validate Domain Order',
            description: 'Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order'),
                    method: 'PATCH',
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'patchDomains', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    postDomainRenewal: {
        key: 'postDomainRenewal',
        noun: 'Domains',
        display: {
            label: 'Request Domain Renewal',
            description: 'Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/renew'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postDomainRenewal', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    postDomainTransfer: {
        key: 'postDomainTransfer',
        noun: 'Domains',
        display: {
            label: 'Request Domain Transfer',
            description: 'Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/transfer'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'postDomainTransfer', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    putDomains: {
        key: 'putDomains',
        noun: 'Domains',
        display: {
            label: 'Domain Order Search',
            description: 'Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/order'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'putDomains', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    updateDomainContact: {
        key: 'updateDomainContact',
        noun: 'Domains',
        display: {
            label: 'Update Domain Contact Details',
            description: 'Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DomainContactDetails.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/contact'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DomainContactDetails.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateDomainContact', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateDomainInfo: {
        key: 'updateDomainInfo',
        noun: 'Domains',
        display: {
            label: 'Update Domain Order',
            description: 'Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateDomainInfo', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    updateDomainNameservers: {
        key: 'updateDomainNameservers',
        noun: 'Domains',
        display: {
            label: 'Replace Nameserver Set',
            description: 'Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DomainNameserverPutRequest.fields(),
            ],
            outputFields: [
                ...TextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/nameservers'),
                    method: 'PUT',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DomainNameserverPutRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateDomainNameservers', response.json);
                    return results;
                })
            },
            sample: samples['TextResponseSample']
        }
    },
    updateDomainWhoisPrivacy: {
        key: 'updateDomainWhoisPrivacy',
        noun: 'Domains',
        display: {
            label: 'Update Whois Privacy',
            description: 'Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.',
                    type: 'integer',
                    required: true,
                },
                ...DomainWhoisPrivacyRequest.fields(),
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/domains/{id}/whois'),
                    method: 'POST',
                    removeMissingValuesFrom: { params: true, body: true },
                    headers: {
                        'Content-Type': 'application/json, multipart/form-data',
                        'Accept': 'application/json',
                    },
                    params: {
                    },
                    body: {
                        ...DomainWhoisPrivacyRequest.mapping(bundle),
                    },
                }
                return z.request(utils.requestOptionsMiddleware(z, bundle, options)).then((response) => {
                    response.throwForStatus();
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateDomainWhoisPrivacy', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
