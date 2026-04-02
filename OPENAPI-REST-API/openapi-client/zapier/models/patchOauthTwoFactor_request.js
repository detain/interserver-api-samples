const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}account_id`,
                label: `The account ID returned from the POST callback. - [${labelPrefix}account_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}code`,
                label: `The 6-digit two-factor authentication code. - [${labelPrefix}code]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'account_id': bundle.inputData?.[`${keyPrefix}account_id`],
            'code': bundle.inputData?.[`${keyPrefix}code`],
        }
    },
}
