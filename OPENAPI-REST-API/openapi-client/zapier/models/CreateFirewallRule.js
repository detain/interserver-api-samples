const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}protocol_id`,
                label: `1 = TCP, 2 = UDP - [${labelPrefix}protocol_id]`,
                required: true,
                type: 'integer',
                choices: [
                    '1',
                    '2',
                ],
            },
            {
                key: `${keyPrefix}xdp_action`,
                label: `1 = Block,  0 = Whitelist - [${labelPrefix}xdp_action]`,
                required: true,
                type: 'integer',
                choices: [
                    '0',
                    '1',
                ],
            },
            {
                key: `${keyPrefix}destination_port`,
                label: `[${labelPrefix}destination_port]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}source_ip`,
                label: `[${labelPrefix}source_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}source_port`,
                label: `[${labelPrefix}source_port]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'protocol_id': bundle.inputData?.[`${keyPrefix}protocol_id`],
            'xdp_action': bundle.inputData?.[`${keyPrefix}xdp_action`],
            'destination_port': bundle.inputData?.[`${keyPrefix}destination_port`],
            'source_ip': bundle.inputData?.[`${keyPrefix}source_ip`],
            'source_port': bundle.inputData?.[`${keyPrefix}source_port`],
        }
    },
}
