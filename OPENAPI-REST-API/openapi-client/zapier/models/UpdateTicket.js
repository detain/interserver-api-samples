const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ip`,
                label: `[${labelPrefix}ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_address`,
                label: `[${labelPrefix}ip_address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}customer_server_access`,
                label: `[${labelPrefix}customer_server_access]`,
                type: 'string',
                choices: [
                    'y',
                    'n',
                ],
            },
            {
                key: `${keyPrefix}root_password`,
                label: `[${labelPrefix}root_password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}sudo_username`,
                label: `[${labelPrefix}sudo_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}sudo_password`,
                label: `[${labelPrefix}sudo_password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}port`,
                label: `[${labelPrefix}port]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip': bundle.inputData?.[`${keyPrefix}ip`],
            'ip_address': bundle.inputData?.[`${keyPrefix}ip_address`],
            'customer_server_access': bundle.inputData?.[`${keyPrefix}customer_server_access`],
            'root_password': bundle.inputData?.[`${keyPrefix}root_password`],
            'sudo_username': bundle.inputData?.[`${keyPrefix}sudo_username`],
            'sudo_password': bundle.inputData?.[`${keyPrefix}sudo_password`],
            'port': bundle.inputData?.[`${keyPrefix}port`],
        }
    },
}
