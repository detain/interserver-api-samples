const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}payment_method`,
                label: `Payment method identifier (cc, paypal, or cc{index}). - [${labelPrefix}payment_method]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_auto`,
                label: `Whether automatic credit card payments are enabled. - [${labelPrefix}cc_auto]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'payment_method': bundle.inputData?.[`${keyPrefix}payment_method`],
            'cc_auto': bundle.inputData?.[`${keyPrefix}cc_auto`],
        }
    },
}
