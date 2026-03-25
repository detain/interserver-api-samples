const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `[${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}public_ip`,
                label: `[${labelPrefix}public_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}allowed_ip`,
                label: `[${labelPrefix}allowed_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}client_username`,
                label: `[${labelPrefix}client_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}client_password`,
                label: `[${labelPrefix}client_password]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'public_ip': bundle.inputData?.[`${keyPrefix}public_ip`],
            'allowed_ip': bundle.inputData?.[`${keyPrefix}allowed_ip`],
            'client_username': bundle.inputData?.[`${keyPrefix}client_username`],
            'client_password': bundle.inputData?.[`${keyPrefix}client_password`],
        }
    },
}
