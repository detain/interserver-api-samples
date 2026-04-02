const samples = require('../samples/DNSApi');
const DnsListItem = require('../models/DnsListItem');
const DnsRecord = require('../models/DnsRecord');
const DnsRecordType = require('../models/DnsRecordType');
const SuccessTextResponse = require('../models/SuccessTextResponse');
const getAccountInfo_401_response = require('../models/getAccountInfo_401_response');
const utils = require('../utils/utils');
const FormData = require('form-data');
const FormData = require('form-data');
const FormData = require('form-data');

module.exports = {
    addDnsDomain: {
        key: 'addDnsDomain',
        noun: 'DNS',
        display: {
            label: 'Create DNS Domain',
            description: 'Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#39;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'domain',
                    label: 'The domain name.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'ip',
                    label: 'IP Address to point the domain to.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('domain', bundle.inputData?.['domain'])
                formData.append('ip', bundle.inputData?.['ip'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addDnsDomain', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    addDnsRecord: {
        key: 'addDnsRecord',
        noun: 'DNS',
        display: {
            label: 'Add DNS Record to Domain',
            description: 'Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The DNS Domain ID.',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'name',
                    label: 'Name part of record',
                    type: 'string',
                    required: true,
                },
                ...DnsRecordType.fields(),
                {
                    key: 'content',
                    label: 'Content of record',
                    type: 'string',
                    required: true,
                },
                {
                    key: 'ttl',
                    label: 'Time-to-live',
                    type: 'integer',
                },
                {
                    key: 'prio',
                    label: 'Priority',
                    type: 'integer',
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('name', bundle.inputData?.['name'])
                formData.append('type', bundle.inputData?.['type'])
                formData.append('content', bundle.inputData?.['content'])
                formData.append('ttl', bundle.inputData?.['ttl'])
                formData.append('prio', bundle.inputData?.['prio'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'addDnsRecord', response.json);
                    return results;
                })
            },
            sample: { data: {} }
        }
    },
    deleteDnsDomain: {
        key: 'deleteDnsDomain',
        noun: 'DNS',
        display: {
            label: 'Delete DNS Domain',
            description: 'Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.',
                    type: 'string',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteDnsDomain', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    deleteDnsRecord: {
        key: 'deleteDnsRecord',
        noun: 'DNS',
        display: {
            label: 'Delete DNS Record',
            description: 'Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'domainId',
                    label: 'The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'recordId',
                    label: 'The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns/{domainId}/{recordId}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'deleteDnsRecord', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
    getDnsDomain: {
        key: 'getDnsDomain',
        noun: 'DNS',
        display: {
            label: 'List Domain DNS Records',
            description: 'Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'id',
                    label: 'The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.',
                    type: 'integer',
                    required: true,
                },
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns/{id}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDnsDomain', response.json);
                    return results;
                })
            },
            sample: samples['DnsRecordSample']
        }
    },
    getDnsList: {
        key: 'getDnsList',
        noun: 'DNS',
        display: {
            label: 'List DNS Domains',
            description: 'Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.',
            hidden: false,
        },
        operation: {
            inputFields: [
            ],
            outputFields: [
            ],
            perform: async (z, bundle) => {
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'getDnsList', response.json);
                    return results;
                })
            },
            sample: samples['DnsListItemSample']
        }
    },
    updateDnsRecord: {
        key: 'updateDnsRecord',
        noun: 'DNS',
        display: {
            label: 'Update DNS Record',
            description: 'Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.',
            hidden: false,
        },
        operation: {
            inputFields: [
                {
                    key: 'domainId',
                    label: 'The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'recordId',
                    label: 'The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.',
                    type: 'integer',
                    required: true,
                },
                {
                    key: 'name',
                    label: '',
                    type: 'string',
                },
                ...DnsRecordType.fields(),
                {
                    key: 'content',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'ttl',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'prio',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'disabled',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'ordername',
                    label: '',
                    type: 'string',
                },
                {
                    key: 'auth',
                    label: '',
                    type: 'string',
                },
            ],
            outputFields: [
                ...SuccessTextResponse.fields('', false),
            ],
            perform: async (z, bundle) => {
                const formData = new FormData()
                formData.append('name', bundle.inputData?.['name'])
                formData.append('type', bundle.inputData?.['type'])
                formData.append('content', bundle.inputData?.['content'])
                formData.append('ttl', bundle.inputData?.['ttl'])
                formData.append('prio', bundle.inputData?.['prio'])
                formData.append('disabled', bundle.inputData?.['disabled'])
                formData.append('ordername', bundle.inputData?.['ordername'])
                formData.append('auth', bundle.inputData?.['auth'])
                const options = {
                    url: utils.replacePathParameters('https://my.interserver.net/apiv2/dns/{domainId}/{recordId}'),
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
                    const results = utils.responseOptionsMiddleware(z, bundle, 'updateDnsRecord', response.json);
                    return results;
                })
            },
            sample: samples['SuccessTextResponseSample']
        }
    },
}
