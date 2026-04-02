const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ipaddress`,
                label: `[${labelPrefix}ipaddress]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}can_delete`,
                label: `Whether the registrar allows deletion of this nameserver entry. - [${labelPrefix}can_delete]`,
                required: true,
                type: 'string',
                choices: [
                    '0',
                    '1',
                ],
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'ipaddress': bundle.inputData?.[`${keyPrefix}ipaddress`],
            'can_delete': bundle.inputData?.[`${keyPrefix}can_delete`],
        }
    },
}
