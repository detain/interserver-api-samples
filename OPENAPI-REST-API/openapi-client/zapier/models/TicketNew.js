const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}subject`,
                label: `[${labelPrefix}subject]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}body`,
                label: `[${labelPrefix}body]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_id`,
                label: `[${labelPrefix}service_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}service_module`,
                label: `[${labelPrefix}service_module]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
            'body': bundle.inputData?.[`${keyPrefix}body`],
            'service_id': bundle.inputData?.[`${keyPrefix}service_id`],
            'service_module': bundle.inputData?.[`${keyPrefix}service_module`],
        }
    },
}
