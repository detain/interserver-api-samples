const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}total`,
                label: `[${labelPrefix}total]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}count`,
                label: `[${labelPrefix}count]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}value`,
                label: `[${labelPrefix}value]`,
                required: true,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'total': bundle.inputData?.[`${keyPrefix}total`],
            'count': bundle.inputData?.[`${keyPrefix}count`],
            'value': bundle.inputData?.[`${keyPrefix}value`],
        }
    },
}
