const utils = require('../utils/utils');
const QuickserverServiceExtra = require('../models/QuickserverServiceExtra');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_last_invoice_date`,
                label: `Last invoice date - [${labelPrefix}service_last_invoice_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_payment_status`,
                label: `Payment status - [${labelPrefix}service_payment_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_frequency`,
                label: `Service frequency - [${labelPrefix}service_frequency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}next_date`,
                label: `Next date - [${labelPrefix}next_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_next_invoice_date`,
                label: `Next invoice date - [${labelPrefix}service_next_invoice_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_currency`,
                label: `Currency - [${labelPrefix}service_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_currency_symbol`,
                label: `Currency symbol - [${labelPrefix}service_currency_symbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_cost_info`,
                label: `Cost information - [${labelPrefix}service_cost_info]`,
                type: 'string',
            },
            ...QuickserverServiceExtra.fields(`${keyPrefix}service_extra`, isInput),
            {
                key: `${keyPrefix}service_extra_json`,
                label: `Extra information (JSON format) - [${labelPrefix}service_extra_json]`,
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
            'service_extra': utils.removeIfEmpty(QuickserverServiceExtra.mapping(bundle, `${keyPrefix}service_extra`)),
            'service_extra_json': bundle.inputData?.[`${keyPrefix}service_extra_json`],
        }
    },
}
