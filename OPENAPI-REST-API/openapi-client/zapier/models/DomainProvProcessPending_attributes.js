const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}order_id`,
                label: `[${labelPrefix}order_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}registration expiration date`,
                label: `[${labelPrefix}registration expiration date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}f_auto_renew`,
                label: `[${labelPrefix}f_auto_renew]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'order_id': bundle.inputData?.[`${keyPrefix}order_id`],
            'registration expiration date': bundle.inputData?.[`${keyPrefix}registration expiration date`],
            'f_auto_renew': bundle.inputData?.[`${keyPrefix}f_auto_renew`],
        }
    },
}
