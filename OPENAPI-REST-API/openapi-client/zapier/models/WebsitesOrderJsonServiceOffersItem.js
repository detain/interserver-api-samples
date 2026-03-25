const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_offer_id`,
                label: `Service offer ID - [${labelPrefix}service_offer_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_id`,
                label: `Service ID - [${labelPrefix}service_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}intro_cost`,
                label: `Introductory cost - [${labelPrefix}intro_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}renewal_cost`,
                label: `Renewal cost - [${labelPrefix}renewal_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}intro_frequency`,
                label: `Introductory frequency - [${labelPrefix}intro_frequency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}renewal_frequency`,
                label: `Renewal frequency - [${labelPrefix}renewal_frequency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}allow_coupon`,
                label: `Allow coupon - [${labelPrefix}allow_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_module`,
                label: `Service module - [${labelPrefix}service_module]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}created_at`,
                label: `Creation date - [${labelPrefix}created_at]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}updated_at`,
                label: `Update date - [${labelPrefix}updated_at]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}deleted_at`,
                label: `Deletion date - [${labelPrefix}deleted_at]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}currencySymbol`,
                label: `Currency symbol - [${labelPrefix}currencySymbol]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'service_offer_id': bundle.inputData?.[`${keyPrefix}service_offer_id`],
            'service_id': bundle.inputData?.[`${keyPrefix}service_id`],
            'intro_cost': bundle.inputData?.[`${keyPrefix}intro_cost`],
            'renewal_cost': bundle.inputData?.[`${keyPrefix}renewal_cost`],
            'intro_frequency': bundle.inputData?.[`${keyPrefix}intro_frequency`],
            'renewal_frequency': bundle.inputData?.[`${keyPrefix}renewal_frequency`],
            'allow_coupon': bundle.inputData?.[`${keyPrefix}allow_coupon`],
            'service_module': bundle.inputData?.[`${keyPrefix}service_module`],
            'created_at': bundle.inputData?.[`${keyPrefix}created_at`],
            'updated_at': bundle.inputData?.[`${keyPrefix}updated_at`],
            'deleted_at': bundle.inputData?.[`${keyPrefix}deleted_at`],
            'currencySymbol': bundle.inputData?.[`${keyPrefix}currencySymbol`],
        }
    },
}
