const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `[${labelPrefix}text]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}success`,
                label: `[${labelPrefix}success]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}ticket_id`,
                label: `[${labelPrefix}ticket_id]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'ticket_id': bundle.inputData?.[`${keyPrefix}ticket_id`],
        }
    },
}
