const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}from`,
                label: `[${labelPrefix}from]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}subject`,
                label: `[${labelPrefix}subject]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'from': bundle.inputData?.[`${keyPrefix}from`],
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
        }
    },
}
