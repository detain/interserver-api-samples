const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}module`,
                label: `Module the prepay should be applied to (for example `default`). - [${labelPrefix}module]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}amount`,
                label: `Amount to add to prepay balance. Minimum is $10. - [${labelPrefix}amount]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}automatic_use`,
                label: `Whether the prepay balance should be used automatically. - [${labelPrefix}automatic_use]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'module': bundle.inputData?.[`${keyPrefix}module`],
            'amount': bundle.inputData?.[`${keyPrefix}amount`],
            'automatic_use': bundle.inputData?.[`${keyPrefix}automatic_use`],
        }
    },
}
