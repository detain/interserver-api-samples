const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Registrar order ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}admin_email`,
                label: `Administrative contact email provided for the order. - [${labelPrefix}admin_email]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'admin_email': bundle.inputData?.[`${keyPrefix}admin_email`],
        }
    },
}
