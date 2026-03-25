const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}in`,
                label: `[${labelPrefix}in]`,
                required: true,
                type: 'number',
            },
            {
                key: `${keyPrefix}out`,
                label: `[${labelPrefix}out]`,
                required: true,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'in': bundle.inputData?.[`${keyPrefix}in`],
            'out': bundle.inputData?.[`${keyPrefix}out`],
        }
    },
}
