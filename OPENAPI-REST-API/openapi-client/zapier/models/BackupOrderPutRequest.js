const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}validateOnly`,
                label: `[${labelPrefix}validateOnly]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}serviceType`,
                label: `[${labelPrefix}serviceType]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}coupon`,
                label: `[${labelPrefix}coupon]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'validateOnly': bundle.inputData?.[`${keyPrefix}validateOnly`],
            'serviceType': bundle.inputData?.[`${keyPrefix}serviceType`],
            'coupon': bundle.inputData?.[`${keyPrefix}coupon`],
        }
    },
}
