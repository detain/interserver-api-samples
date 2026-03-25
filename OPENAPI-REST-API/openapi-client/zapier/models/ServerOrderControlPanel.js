const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Control Panel ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `Control Panel price. - [${labelPrefix}price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}img`,
                label: `Control Panel image. - [${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `Short description of the control panel. - [${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `Long description of the control panel. - [${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}os_type`,
                label: `OS types compatible with the control panel. - [${labelPrefix}os_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `Monthly price. - [${labelPrefix}monthly_price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}types`,
                label: `List of types. - [${labelPrefix}types]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}price_display`,
                label: `Display of control panel price. - [${labelPrefix}price_display]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `Display of monthly control panel price. - [${labelPrefix}monthly_price_display]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'price': bundle.inputData?.[`${keyPrefix}price`],
            'img': bundle.inputData?.[`${keyPrefix}img`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'long_desc': bundle.inputData?.[`${keyPrefix}long_desc`],
            'os_type': bundle.inputData?.[`${keyPrefix}os_type`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'types': bundle.inputData?.[`${keyPrefix}types`],
            'price_display': bundle.inputData?.[`${keyPrefix}price_display`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
