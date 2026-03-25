const utils = require('../utils/utils');
const ChargeInvoiceRows_invoices_value = require('../models/ChargeInvoiceRows_invoices_value');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `Whether the invoice retrieval was successful. - [${labelPrefix}success]`,
                type: 'boolean',
            },
            ...ChargeInvoiceRows_invoices_value.fields(`${keyPrefix}invoices`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'invoices': utils.removeIfEmpty(ChargeInvoiceRows_invoices_value.mapping(bundle, `${keyPrefix}invoices`)),
        }
    },
}
