const utils = require('../utils/utils');
const placeScrubOrder_201_response_order_details_cj_params = require('../models/placeScrubOrder_201_response_order_details_cj_params');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}total_cost`,
                label: `[${labelPrefix}total_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}service_id`,
                label: `[${labelPrefix}service_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}invoice_id`,
                label: `[${labelPrefix}invoice_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}invoice_description`,
                label: `[${labelPrefix}invoice_description]`,
                type: 'string',
            },
            ...placeScrubOrder_201_response_order_details_cj_params.fields(`${keyPrefix}cj_params`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'total_cost': bundle.inputData?.[`${keyPrefix}total_cost`],
            'service_id': bundle.inputData?.[`${keyPrefix}service_id`],
            'invoice_id': bundle.inputData?.[`${keyPrefix}invoice_id`],
            'invoice_description': bundle.inputData?.[`${keyPrefix}invoice_description`],
            'cj_params': utils.removeIfEmpty(placeScrubOrder_201_response_order_details_cj_params.mapping(bundle, `${keyPrefix}cj_params`)),
        }
    },
}
