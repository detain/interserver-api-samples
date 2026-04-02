const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address`,
                label: `[${labelPrefix}address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}city`,
                label: `[${labelPrefix}city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}state`,
                label: `[${labelPrefix}state]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}zip`,
                label: `[${labelPrefix}zip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc`,
                label: `[${labelPrefix}cc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_exp`,
                label: `[${labelPrefix}cc_exp]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_ccv2`,
                label: `[${labelPrefix}cc_ccv2]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'address': bundle.inputData?.[`${keyPrefix}address`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'zip': bundle.inputData?.[`${keyPrefix}zip`],
            'cc': bundle.inputData?.[`${keyPrefix}cc`],
            'cc_exp': bundle.inputData?.[`${keyPrefix}cc_exp`],
            'cc_ccv2': bundle.inputData?.[`${keyPrefix}cc_ccv2`],
        }
    },
}
