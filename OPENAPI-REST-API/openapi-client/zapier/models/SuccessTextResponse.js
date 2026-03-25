const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `Indicates whether or not the command was successful or not. - [${labelPrefix}success]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}text`,
                label: `Text associated with the response. - [${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}action`,
                label: `Optional Action relating to the response. - [${labelPrefix}action]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'action': bundle.inputData?.[`${keyPrefix}action`],
        }
    },
}
