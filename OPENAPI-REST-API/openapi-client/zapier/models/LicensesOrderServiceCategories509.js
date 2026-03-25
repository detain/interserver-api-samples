const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}category_id`,
                label: `Category ID - [${labelPrefix}category_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}category_name`,
                label: `Category Name - [${labelPrefix}category_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}category_tag`,
                label: `Category Tag - [${labelPrefix}category_tag]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}category_module`,
                label: `Category Module - [${labelPrefix}category_module]`,
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
