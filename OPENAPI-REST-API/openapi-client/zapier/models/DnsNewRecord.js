const utils = require('../utils/utils');
const DnsRecordType = require('../models/DnsRecordType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `Name part of record - [${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                ...DnsRecordType.fields(`${keyPrefix}type`, isInput),
            },
            {
                key: `${keyPrefix}content`,
                label: `Content of record - [${labelPrefix}content]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ttl`,
                label: `Time-to-live - [${labelPrefix}ttl]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}prio`,
                label: `Priority - [${labelPrefix}prio]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'content': bundle.inputData?.[`${keyPrefix}content`],
            'ttl': bundle.inputData?.[`${keyPrefix}ttl`],
            'prio': bundle.inputData?.[`${keyPrefix}prio`],
        }
    },
}
