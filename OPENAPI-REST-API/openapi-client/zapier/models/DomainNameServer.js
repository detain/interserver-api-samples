const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}sortorder`,
                label: `[${labelPrefix}sortorder]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ipaddress`,
                label: `[${labelPrefix}ipaddress]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'sortorder': bundle.inputData?.[`${keyPrefix}sortorder`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'ipaddress': bundle.inputData?.[`${keyPrefix}ipaddress`],
        }
    },
}
