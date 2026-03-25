const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_id`,
                label: `The newly created service ID for the ordered server. - [${labelPrefix}service_id]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}invoice_id`,
                label: `The invoice ID generated for the order. - [${labelPrefix}invoice_id]`,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'service_id': bundle.inputData?.[`${keyPrefix}service_id`],
            'invoice_id': bundle.inputData?.[`${keyPrefix}invoice_id`],
        }
    },
}
