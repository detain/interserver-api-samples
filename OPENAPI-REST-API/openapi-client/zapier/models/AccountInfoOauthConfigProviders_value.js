const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}enabled`,
                label: `[${labelPrefix}enabled]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}linked`,
                label: `[${labelPrefix}linked]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}account`,
                label: `[${labelPrefix}account]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}url`,
                label: `[${labelPrefix}url]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'enabled': bundle.inputData?.[`${keyPrefix}enabled`],
            'linked': bundle.inputData?.[`${keyPrefix}linked`],
            'account': bundle.inputData?.[`${keyPrefix}account`],
            'url': bundle.inputData?.[`${keyPrefix}url`],
        }
    },
}
