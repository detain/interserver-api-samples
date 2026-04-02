const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}filter_type`,
                label: `[${labelPrefix}filter_type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}port`,
                label: `[${labelPrefix}port]`,
                required: true,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'filter_type': bundle.inputData?.[`${keyPrefix}filter_type`],
            'port': bundle.inputData?.[`${keyPrefix}port`],
        }
    },
}
