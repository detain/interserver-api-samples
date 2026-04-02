const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Operating System ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `Operating System price. - [${labelPrefix}price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}img`,
                label: `Operating System image. - [${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `Short description of the OS. - [${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `Long description of the OS. - [${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `Monthly price. - [${labelPrefix}monthly_price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}active`,
                label: `Active status. - [${labelPrefix}active]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price_display`,
                label: `Display of OS price. - [${labelPrefix}price_display]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `Display of monthly OS price. - [${labelPrefix}monthly_price_display]`,
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
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'active': bundle.inputData?.[`${keyPrefix}active`],
            'price_display': bundle.inputData?.[`${keyPrefix}price_display`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
