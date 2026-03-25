const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}score`,
                label: `[${labelPrefix}score]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}count`,
                label: `[${labelPrefix}count]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}reliability`,
                label: `[${labelPrefix}reliability]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}code`,
                label: `[${labelPrefix}code]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'score': bundle.inputData?.[`${keyPrefix}score`],
            'count': bundle.inputData?.[`${keyPrefix}count`],
            'reliability': bundle.inputData?.[`${keyPrefix}reliability`],
            'code': bundle.inputData?.[`${keyPrefix}code`],
        }
    },
}
