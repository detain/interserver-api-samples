const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}date`,
                label: `[${labelPrefix}date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}filter`,
                label: `[${labelPrefix}filter]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}blocked_ip`,
                label: `[${labelPrefix}blocked_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}target_ip`,
                label: `[${labelPrefix}target_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}target_port`,
                label: `[${labelPrefix}target_port]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}protocol`,
                label: `[${labelPrefix}protocol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}byte_count`,
                label: `[${labelPrefix}byte_count]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}xdp_action`,
                label: `[${labelPrefix}xdp_action]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'date': bundle.inputData?.[`${keyPrefix}date`],
            'filter': bundle.inputData?.[`${keyPrefix}filter`],
            'blocked_ip': bundle.inputData?.[`${keyPrefix}blocked_ip`],
            'target_ip': bundle.inputData?.[`${keyPrefix}target_ip`],
            'target_port': bundle.inputData?.[`${keyPrefix}target_port`],
            'protocol': bundle.inputData?.[`${keyPrefix}protocol`],
            'byte_count': bundle.inputData?.[`${keyPrefix}byte_count`],
            'xdp_action': bundle.inputData?.[`${keyPrefix}xdp_action`],
        }
    },
}
