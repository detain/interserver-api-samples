const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}continue`,
                label: `[${labelPrefix}continue]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}errors`,
                label: `[${labelPrefix}errors]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceType`,
                label: `[${labelPrefix}serviceType]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}serviceCost`,
                label: `[${labelPrefix}serviceCost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}originalCost`,
                label: `[${labelPrefix}originalCost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}repeatServiceCost`,
                label: `[${labelPrefix}repeatServiceCost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hostname`,
                label: `[${labelPrefix}hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}password`,
                label: `[${labelPrefix}password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}coupon`,
                label: `[${labelPrefix}coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}couponCode`,
                label: `[${labelPrefix}couponCode]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'continue': bundle.inputData?.[`${keyPrefix}continue`],
            'errors': bundle.inputData?.[`${keyPrefix}errors`],
            'serviceType': bundle.inputData?.[`${keyPrefix}serviceType`],
            'serviceCost': bundle.inputData?.[`${keyPrefix}serviceCost`],
            'originalCost': bundle.inputData?.[`${keyPrefix}originalCost`],
            'repeatServiceCost': bundle.inputData?.[`${keyPrefix}repeatServiceCost`],
            'hostname': bundle.inputData?.[`${keyPrefix}hostname`],
            'password': bundle.inputData?.[`${keyPrefix}password`],
            'coupon': bundle.inputData?.[`${keyPrefix}coupon`],
            'couponCode': bundle.inputData?.[`${keyPrefix}couponCode`],
        }
    },
}
