const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}services_id`,
                label: `Service ID - [${labelPrefix}services_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `Service name - [${labelPrefix}services_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_cost`,
                label: `Service cost - [${labelPrefix}services_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_category`,
                label: `Service category - [${labelPrefix}services_category]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_buyable`,
                label: `Buyable status - [${labelPrefix}services_buyable]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_type`,
                label: `Service type - [${labelPrefix}services_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field1`,
                label: `Service field 1 - [${labelPrefix}services_field1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field2`,
                label: `Service field 2 - [${labelPrefix}services_field2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_module`,
                label: `Service module - [${labelPrefix}services_module]`,
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
            'services_category': bundle.inputData?.[`${keyPrefix}services_category`],
            'services_buyable': bundle.inputData?.[`${keyPrefix}services_buyable`],
            'services_type': bundle.inputData?.[`${keyPrefix}services_type`],
            'services_field1': bundle.inputData?.[`${keyPrefix}services_field1`],
            'services_field2': bundle.inputData?.[`${keyPrefix}services_field2`],
            'services_module': bundle.inputData?.[`${keyPrefix}services_module`],
        }
    },
}
