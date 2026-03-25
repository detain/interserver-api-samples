const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}template`,
                label: `OS Template Filename - [${labelPrefix}template]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}localPassword`,
                label: `Password for this account. - [${labelPrefix}localPassword]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}password`,
                label: `Password for Root / Administrator Account. - [${labelPrefix}password]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'template': bundle.inputData?.[`${keyPrefix}template`],
            'localPassword': bundle.inputData?.[`${keyPrefix}localPassword`],
            'password': bundle.inputData?.[`${keyPrefix}password`],
        }
    },
}
