const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Bandwidth ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `Bandwidth price. - [${labelPrefix}price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}img`,
                label: `Bandwidth image. - [${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `Short description of the bandwidth. - [${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `Long description of the bandwidth. - [${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                label: `Bandwidth type. - [${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qty`,
                label: `Quantity of bandwidth. - [${labelPrefix}qty]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}active`,
                label: `Active status. - [${labelPrefix}active]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `Monthly price. - [${labelPrefix}monthly_price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}price_display`,
                label: `Display of bandwidth price. - [${labelPrefix}price_display]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `Display of monthly bandwidth price. - [${labelPrefix}monthly_price_display]`,
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
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'qty': bundle.inputData?.[`${keyPrefix}qty`],
            'active': bundle.inputData?.[`${keyPrefix}active`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'price_display': bundle.inputData?.[`${keyPrefix}price_display`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
