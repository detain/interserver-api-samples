const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Memory ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `Memory price. - [${labelPrefix}price]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}img`,
                label: `Memory image. - [${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `Short description of the memory. - [${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `Long description of the memory. - [${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}manu`,
                label: `Manufacturer information. - [${labelPrefix}manu]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}size`,
                label: `Memory size. - [${labelPrefix}size]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                label: `Memory type. - [${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hidden`,
                label: `Hidden status. - [${labelPrefix}hidden]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `Monthly price. - [${labelPrefix}monthly_price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}drive_type`,
                label: `Drive type. - [${labelPrefix}drive_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `Display of monthly memory price. - [${labelPrefix}monthly_price_display]`,
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
            'manu': bundle.inputData?.[`${keyPrefix}manu`],
            'size': bundle.inputData?.[`${keyPrefix}size`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'hidden': bundle.inputData?.[`${keyPrefix}hidden`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'drive_type': bundle.inputData?.[`${keyPrefix}drive_type`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
