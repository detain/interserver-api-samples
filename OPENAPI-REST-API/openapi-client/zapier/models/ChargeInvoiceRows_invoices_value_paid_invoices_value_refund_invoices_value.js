const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}invoices_id`,
                label: `[${labelPrefix}invoices_id]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}invoices_description`,
                label: `[${labelPrefix}invoices_description]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoices_amount`,
                label: `[${labelPrefix}invoices_amount]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}invoices_date`,
                label: `[${labelPrefix}invoices_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoices_currency`,
                label: `[${labelPrefix}invoices_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}currency_symbol`,
                label: `[${labelPrefix}currency_symbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoices_date_formatted`,
                label: `[${labelPrefix}invoices_date_formatted]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'invoices_id': bundle.inputData?.[`${keyPrefix}invoices_id`],
            'invoices_description': bundle.inputData?.[`${keyPrefix}invoices_description`],
            'invoices_amount': bundle.inputData?.[`${keyPrefix}invoices_amount`],
            'invoices_date': bundle.inputData?.[`${keyPrefix}invoices_date`],
            'invoices_currency': bundle.inputData?.[`${keyPrefix}invoices_currency`],
            'currency_symbol': bundle.inputData?.[`${keyPrefix}currency_symbol`],
            'invoices_date_formatted': bundle.inputData?.[`${keyPrefix}invoices_date_formatted`],
        }
    },
}
