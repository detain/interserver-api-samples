const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_last_invoice_date`,
                label: `The last invoice date of the service. - [${labelPrefix}service_last_invoice_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_payment_status`,
                label: `The payment status of the service. - [${labelPrefix}service_payment_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_frequency`,
                label: `The frequency of the service payment. - [${labelPrefix}service_frequency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}next_date`,
                label: `The next payment date of the service. - [${labelPrefix}next_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_next_invoice_date`,
                label: `The next invoice date of the service. - [${labelPrefix}service_next_invoice_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_currency`,
                label: `The currency of the service. - [${labelPrefix}service_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_currency_symbol`,
                label: `The currency symbol of the service. - [${labelPrefix}service_currency_symbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_cost_info`,
                label: `The cost information of the service. - [${labelPrefix}service_cost_info]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_extra`,
                label: `Extra information for the service. - [${labelPrefix}service_extra]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_extra_json`,
                label: `Extra JSON information for the service. - [${labelPrefix}service_extra_json]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'service_last_invoice_date': bundle.inputData?.[`${keyPrefix}service_last_invoice_date`],
            'service_payment_status': bundle.inputData?.[`${keyPrefix}service_payment_status`],
            'service_frequency': bundle.inputData?.[`${keyPrefix}service_frequency`],
            'next_date': bundle.inputData?.[`${keyPrefix}next_date`],
            'service_next_invoice_date': bundle.inputData?.[`${keyPrefix}service_next_invoice_date`],
            'service_currency': bundle.inputData?.[`${keyPrefix}service_currency`],
            'service_currency_symbol': bundle.inputData?.[`${keyPrefix}service_currency_symbol`],
            'service_cost_info': bundle.inputData?.[`${keyPrefix}service_cost_info`],
            'service_extra': bundle.inputData?.[`${keyPrefix}service_extra`],
            'service_extra_json': bundle.inputData?.[`${keyPrefix}service_extra_json`],
        }
    },
}
