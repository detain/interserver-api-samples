const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}Customer Server Access`,
                label: `[${labelPrefix}Customer Server Access]`,
                type: 'string',
                choices: [
                    'y',
                    'n',
                ],
            },
            {
                key: `${keyPrefix}Ip Address`,
                label: `[${labelPrefix}Ip Address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}Root Password`,
                label: `[${labelPrefix}Root Password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}Sudo User`,
                label: `[${labelPrefix}Sudo User]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}Sudo Password`,
                label: `[${labelPrefix}Sudo Password]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}Port`,
                label: `[${labelPrefix}Port]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'Customer Server Access': bundle.inputData?.[`${keyPrefix}Customer Server Access`],
            'Ip Address': bundle.inputData?.[`${keyPrefix}Ip Address`],
            'Root Password': bundle.inputData?.[`${keyPrefix}Root Password`],
            'Sudo User': bundle.inputData?.[`${keyPrefix}Sudo User`],
            'Sudo Password': bundle.inputData?.[`${keyPrefix}Sudo Password`],
            'Port': bundle.inputData?.[`${keyPrefix}Port`],
        }
    },
}
