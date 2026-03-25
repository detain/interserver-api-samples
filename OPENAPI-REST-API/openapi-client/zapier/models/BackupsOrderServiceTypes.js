const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}services_id`,
                label: `The ID of the service. - [${labelPrefix}services_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The name of the service. - [${labelPrefix}services_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_cost`,
                label: `The cost of the service. - [${labelPrefix}services_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_category`,
                label: `The category of the service. - [${labelPrefix}services_category]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_buyable`,
                label: `Indicates if the service is buyable. - [${labelPrefix}services_buyable]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_type`,
                label: `The type of the service. - [${labelPrefix}services_type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field1`,
                label: `Field 1 of the service. - [${labelPrefix}services_field1]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field2`,
                label: `Field 2 of the service. - [${labelPrefix}services_field2]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_module`,
                label: `The module of the service. - [${labelPrefix}services_module]`,
                required: true,
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
