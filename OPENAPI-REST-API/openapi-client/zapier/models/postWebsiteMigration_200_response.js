const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `Confirmation message. - [${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ticket`,
                label: `The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress. - [${labelPrefix}ticket]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'ticket': bundle.inputData?.[`${keyPrefix}ticket`],
        }
    },
}
