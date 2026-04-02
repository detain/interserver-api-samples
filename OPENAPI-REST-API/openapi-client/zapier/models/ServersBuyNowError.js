const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `Always false for error responses. - [${labelPrefix}success]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}text`,
                label: `Human-readable error summary. - [${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}errors`,
                label: `List of specific validation error messages. - [${labelPrefix}errors]`,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'errors': bundle.inputData?.[`${keyPrefix}errors`],
        }
    },
}
