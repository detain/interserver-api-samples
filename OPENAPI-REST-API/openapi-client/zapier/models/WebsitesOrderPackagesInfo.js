const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}services_id`,
                label: `The ID of the package. - [${labelPrefix}services_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The name of the package. - [${labelPrefix}services_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_cost`,
                label: `The cost of the package. - [${labelPrefix}services_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_category`,
                label: `The category of the package. - [${labelPrefix}services_category]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_buyable`,
                label: `Indicates if the package is buyable (1 for yes, 0 for no). - [${labelPrefix}services_buyable]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_type`,
                label: `The type of the package. - [${labelPrefix}services_type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_module`,
                label: `The module of the package. - [${labelPrefix}services_module]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_description`,
                label: `Description of the package. - [${labelPrefix}services_description]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field1`,
                label: `Additional field 1 for the package. - [${labelPrefix}services_field1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_field2`,
                label: `Additional field 2 for the package. - [${labelPrefix}services_field2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_html`,
                label: `HTML content for the package. - [${labelPrefix}services_html]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_moreinfo_url`,
                label: `URL for more information about the package. - [${labelPrefix}services_moreinfo_url]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_hidden`,
                label: `Indicates if the package is hidden (1 for yes, 0 for no). - [${labelPrefix}services_hidden]`,
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
            'services_module': bundle.inputData?.[`${keyPrefix}services_module`],
            'services_description': bundle.inputData?.[`${keyPrefix}services_description`],
            'services_field1': bundle.inputData?.[`${keyPrefix}services_field1`],
            'services_field2': bundle.inputData?.[`${keyPrefix}services_field2`],
            'services_html': bundle.inputData?.[`${keyPrefix}services_html`],
            'services_moreinfo_url': bundle.inputData?.[`${keyPrefix}services_moreinfo_url`],
            'services_hidden': bundle.inputData?.[`${keyPrefix}services_hidden`],
        }
    },
}
