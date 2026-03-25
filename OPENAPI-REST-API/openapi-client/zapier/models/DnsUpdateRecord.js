const utils = require('../utils/utils');
const DnsRecordType = require('../models/DnsRecordType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                ...DnsRecordType.fields(`${keyPrefix}type`, isInput),
            },
            {
                key: `${keyPrefix}content`,
                label: `[${labelPrefix}content]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ttl`,
                label: `[${labelPrefix}ttl]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}prio`,
                label: `[${labelPrefix}prio]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disabled`,
                label: `[${labelPrefix}disabled]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ordername`,
                label: `[${labelPrefix}ordername]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}auth`,
                label: `[${labelPrefix}auth]`,
                type: 'string',
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
            'disabled': bundle.inputData?.[`${keyPrefix}disabled`],
            'ordername': bundle.inputData?.[`${keyPrefix}ordername`],
            'auth': bundle.inputData?.[`${keyPrefix}auth`],
        }
    },
}
