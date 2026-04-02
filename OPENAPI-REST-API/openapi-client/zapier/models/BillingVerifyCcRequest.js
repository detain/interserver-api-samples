const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}idx`,
                label: `Card index to verify. - [${labelPrefix}idx]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}cc_ccv2`,
                label: `CVV code for verification. - [${labelPrefix}cc_ccv2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_amount1`,
                label: `First micro-charge amount for verification. - [${labelPrefix}cc_amount1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_amount2`,
                label: `Second micro-charge amount for verification. - [${labelPrefix}cc_amount2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}terms`,
                label: `Whether terms were accepted for verification. - [${labelPrefix}terms]`,
                type: 'boolean',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'idx': bundle.inputData?.[`${keyPrefix}idx`],
            'cc_ccv2': bundle.inputData?.[`${keyPrefix}cc_ccv2`],
            'cc_amount1': bundle.inputData?.[`${keyPrefix}cc_amount1`],
            'cc_amount2': bundle.inputData?.[`${keyPrefix}cc_amount2`],
            'terms': bundle.inputData?.[`${keyPrefix}terms`],
        }
    },
}
