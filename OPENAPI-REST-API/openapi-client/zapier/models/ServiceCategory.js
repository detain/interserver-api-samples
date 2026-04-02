const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}category_id`,
                label: `[${labelPrefix}category_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}category_name`,
                label: `[${labelPrefix}category_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}category_tag`,
                label: `[${labelPrefix}category_tag]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}category_module`,
                label: `[${labelPrefix}category_module]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'category_id': bundle.inputData?.[`${keyPrefix}category_id`],
            'category_name': bundle.inputData?.[`${keyPrefix}category_name`],
            'category_tag': bundle.inputData?.[`${keyPrefix}category_tag`],
            'category_module': bundle.inputData?.[`${keyPrefix}category_module`],
        }
    },
}
