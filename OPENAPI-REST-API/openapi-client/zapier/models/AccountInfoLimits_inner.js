const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}start`,
                label: `[${labelPrefix}start]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}end`,
                label: `[${labelPrefix}end]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'start': bundle.inputData?.[`${keyPrefix}start`],
            'end': bundle.inputData?.[`${keyPrefix}end`],
        }
    },
}
