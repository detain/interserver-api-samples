const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}start`,
                label: `The begining (or first) IP address in the range. - [${labelPrefix}start]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}end`,
                label: `The ending (or last) IP address in the range. - [${labelPrefix}end]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'start': bundle.inputData?.[`${keyPrefix}start`],
            'end': bundle.inputData?.[`${keyPrefix}end`],
        }
    },
}
