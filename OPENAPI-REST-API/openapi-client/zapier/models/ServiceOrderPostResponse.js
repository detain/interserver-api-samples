const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}continue`,
                label: `Whether the order was accepted and can proceed to payment. - [${labelPrefix}continue]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}errors`,
                label: `List of validation errors (empty on success). - [${labelPrefix}errors]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}total_cost`,
                label: `Total cost of the order. - [${labelPrefix}total_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}iid`,
                label: `Primary invoice ID for payment. - [${labelPrefix}iid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}iids`,
                label: `All invoice identifiers associated with the order. - [${labelPrefix}iids]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}real_iids`,
                label: `Numeric invoice IDs for use with billing endpoints. - [${labelPrefix}real_iids]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceId`,
                label: `The new service ID created by the order. - [${labelPrefix}serviceId]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}invoice_description`,
                label: `Human-readable description of the invoice. - [${labelPrefix}invoice_description]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'continue': bundle.inputData?.[`${keyPrefix}continue`],
            'errors': bundle.inputData?.[`${keyPrefix}errors`],
            'total_cost': bundle.inputData?.[`${keyPrefix}total_cost`],
            'iid': bundle.inputData?.[`${keyPrefix}iid`],
            'iids': bundle.inputData?.[`${keyPrefix}iids`],
            'real_iids': bundle.inputData?.[`${keyPrefix}real_iids`],
            'serviceId': bundle.inputData?.[`${keyPrefix}serviceId`],
            'invoice_description': bundle.inputData?.[`${keyPrefix}invoice_description`],
        }
    },
}
