const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}client@domain.com`,
                label: `[${labelPrefix}client@domain.com]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}user@site.net`,
                label: `[${labelPrefix}user@site.net]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sales@company.com`,
                label: `[${labelPrefix}sales@company.com]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}client@anothersite.com`,
                label: `[${labelPrefix}client@anothersite.com]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'client@domain.com': bundle.inputData?.[`${keyPrefix}client@domain.com`],
            'user@site.net': bundle.inputData?.[`${keyPrefix}user@site.net`],
            'sales@company.com': bundle.inputData?.[`${keyPrefix}sales@company.com`],
            'client@anothersite.com': bundle.inputData?.[`${keyPrefix}client@anothersite.com`],
        }
    },
}
