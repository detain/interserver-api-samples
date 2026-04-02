const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}w`,
                label: `[${labelPrefix}w]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}n`,
                label: `[${labelPrefix}n]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'w': bundle.inputData?.[`${keyPrefix}w`],
            'n': bundle.inputData?.[`${keyPrefix}n`],
        }
    },
}
