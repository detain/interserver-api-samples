const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}daddr`,
                label: `[${labelPrefix}daddr]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}dest`,
                label: `[${labelPrefix}dest]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}filter_name`,
                label: `[${labelPrefix}filter_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}destination_ip`,
                label: `[${labelPrefix}destination_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}filter`,
                label: `[${labelPrefix}filter]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'daddr': bundle.inputData?.[`${keyPrefix}daddr`],
            'dest': bundle.inputData?.[`${keyPrefix}dest`],
            'filter_name': bundle.inputData?.[`${keyPrefix}filter_name`],
            'destination_ip': bundle.inputData?.[`${keyPrefix}destination_ip`],
            'filter': bundle.inputData?.[`${keyPrefix}filter`],
        }
    },
}
