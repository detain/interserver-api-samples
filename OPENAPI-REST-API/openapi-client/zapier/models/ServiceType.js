const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}st_id`,
                label: `[${labelPrefix}st_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}st_name`,
                label: `[${labelPrefix}st_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}st_category`,
                label: `[${labelPrefix}st_category]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}st_module`,
                label: `[${labelPrefix}st_module]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'st_id': bundle.inputData?.[`${keyPrefix}st_id`],
            'st_name': bundle.inputData?.[`${keyPrefix}st_name`],
            'st_category': bundle.inputData?.[`${keyPrefix}st_category`],
            'st_module': bundle.inputData?.[`${keyPrefix}st_module`],
        }
    },
}
