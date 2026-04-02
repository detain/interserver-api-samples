const utils = require('../utils/utils');
const placeScrubOrder_201_response_order_details = require('../models/placeScrubOrder_201_response_order_details');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `[${labelPrefix}success]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}text`,
                label: `[${labelPrefix}text]`,
                type: 'string',
            },
            ...placeScrubOrder_201_response_order_details.fields(`${keyPrefix}order_details`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'order_details': utils.removeIfEmpty(placeScrubOrder_201_response_order_details.mapping(bundle, `${keyPrefix}order_details`)),
        }
    },
}
