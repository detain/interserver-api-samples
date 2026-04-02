const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `[${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}size`,
                label: `[${labelPrefix}size]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}drive_type`,
                label: `[${labelPrefix}drive_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `[${labelPrefix}monthly_price]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `[${labelPrefix}monthly_price_display]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'size': bundle.inputData?.[`${keyPrefix}size`],
            'drive_type': bundle.inputData?.[`${keyPrefix}drive_type`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
