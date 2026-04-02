const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}source_ip`,
                label: `[${labelPrefix}source_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}destination_ip`,
                label: `[${labelPrefix}destination_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}protocol_id`,
                label: `[${labelPrefix}protocol_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}source_port`,
                label: `[${labelPrefix}source_port]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}destination_port`,
                label: `[${labelPrefix}destination_port]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}xdp_action`,
                label: `[${labelPrefix}xdp_action]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}global_drop`,
                label: `[${labelPrefix}global_drop]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'source_ip': bundle.inputData?.[`${keyPrefix}source_ip`],
            'destination_ip': bundle.inputData?.[`${keyPrefix}destination_ip`],
            'protocol_id': bundle.inputData?.[`${keyPrefix}protocol_id`],
            'source_port': bundle.inputData?.[`${keyPrefix}source_port`],
            'destination_port': bundle.inputData?.[`${keyPrefix}destination_port`],
            'xdp_action': bundle.inputData?.[`${keyPrefix}xdp_action`],
            'global_drop': bundle.inputData?.[`${keyPrefix}global_drop`],
        }
    },
}
