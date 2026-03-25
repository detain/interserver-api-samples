const utils = require('../utils/utils');
const DnsRecordType = require('../models/DnsRecordType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `The ID of the DNS Record. - [${labelPrefix}id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_id`,
                label: `The ID of the Domain this is a record of. - [${labelPrefix}domain_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                ...DnsRecordType.fields(`${keyPrefix}type`, isInput),
            },
            {
                key: `${keyPrefix}content`,
                label: `The content of the record, such as the IP address or hsotname. - [${labelPrefix}content]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ttl`,
                label: `Time To Live (seconds) - [${labelPrefix}ttl]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}prio`,
                label: `Priority - [${labelPrefix}prio]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}disabled`,
                label: `[${labelPrefix}disabled]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ordername`,
                label: `Alternate name to use for sorting - [${labelPrefix}ordername]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}auth`,
                label: `[${labelPrefix}auth]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'domain_id': bundle.inputData?.[`${keyPrefix}domain_id`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'content': bundle.inputData?.[`${keyPrefix}content`],
            'ttl': bundle.inputData?.[`${keyPrefix}ttl`],
            'prio': bundle.inputData?.[`${keyPrefix}prio`],
            'disabled': bundle.inputData?.[`${keyPrefix}disabled`],
            'ordername': bundle.inputData?.[`${keyPrefix}ordername`],
            'auth': bundle.inputData?.[`${keyPrefix}auth`],
        }
    },
}
