const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `Response text - [${labelPrefix}text]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}queueId`,
                label: `The Queue ID attached to the action. - [${labelPrefix}queueId]`,
                required: true,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'queueId': bundle.inputData?.[`${keyPrefix}queueId`],
        }
    },
}
