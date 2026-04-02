const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_offer_id`,
                label: `The ID of the service offer. - [${labelPrefix}service_offer_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_id`,
                label: `The ID of the associated service. - [${labelPrefix}service_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}intro_cost`,
                label: `The introductory cost of the service offer. - [${labelPrefix}intro_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}renewal_cost`,
                label: `The renewal cost of the service offer. - [${labelPrefix}renewal_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}intro_frequency`,
                label: `The introductory frequency of the service offer. - [${labelPrefix}intro_frequency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}renewal_frequency`,
                label: `The renewal frequency of the service offer. - [${labelPrefix}renewal_frequency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}allow_coupon`,
                label: `Indicates if coupons are allowed (1 for yes, 0 for no). - [${labelPrefix}allow_coupon]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_module`,
                label: `The module of the service offer. - [${labelPrefix}service_module]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}created_at`,
                label: `The creation timestamp of the service offer. - [${labelPrefix}created_at]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}updated_at`,
                label: `The update timestamp of the service offer. - [${labelPrefix}updated_at]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}deleted_at`,
                label: `The deletion timestamp of the service offer. - [${labelPrefix}deleted_at]`,
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
        }
    },
}
