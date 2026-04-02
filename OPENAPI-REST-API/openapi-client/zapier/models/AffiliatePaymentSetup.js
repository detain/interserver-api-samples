const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}affiliate_paypal`,
                label: `[${labelPrefix}affiliate_paypal]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_payment_method`,
                label: `[${labelPrefix}affiliate_payment_method]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'affiliate_paypal': bundle.inputData?.[`${keyPrefix}affiliate_paypal`],
            'affiliate_payment_method': bundle.inputData?.[`${keyPrefix}affiliate_payment_method`],
        }
    },
}
