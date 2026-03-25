const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}services_id`,
                label: `[${labelPrefix}services_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `[${labelPrefix}services_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_cost`,
                label: `[${labelPrefix}services_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}services_field1`,
                label: `[${labelPrefix}services_field1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field2`,
                label: `[${labelPrefix}services_field2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_module`,
                label: `[${labelPrefix}services_module]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'services_id': bundle.inputData?.[`${keyPrefix}services_id`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
            'services_cost': bundle.inputData?.[`${keyPrefix}services_cost`],
            'services_field1': bundle.inputData?.[`${keyPrefix}services_field1`],
            'services_field2': bundle.inputData?.[`${keyPrefix}services_field2`],
            'services_module': bundle.inputData?.[`${keyPrefix}services_module`],
        }
    },
}
