const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `Status message. - [${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoice`,
                label: `Invoice ID for payment. - [${labelPrefix}invoice]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}order`,
                label: `Server order ID. - [${labelPrefix}order]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'invoice': bundle.inputData?.[`${keyPrefix}invoice`],
            'order': bundle.inputData?.[`${keyPrefix}order`],
        }
    },
}
