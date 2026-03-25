const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}postal_code`,
                label: `[${labelPrefix}postal_code]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}org_name`,
                label: `[${labelPrefix}org_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}status`,
                label: `[${labelPrefix}status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}state`,
                label: `[${labelPrefix}state]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}first_name`,
                label: `[${labelPrefix}first_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}last_name`,
                label: `[${labelPrefix}last_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address3`,
                label: `[${labelPrefix}address3]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}fax`,
                label: `[${labelPrefix}fax]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address2`,
                label: `[${labelPrefix}address2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}email`,
                label: `[${labelPrefix}email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}city`,
                label: `[${labelPrefix}city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}phone`,
                label: `[${labelPrefix}phone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address1`,
                label: `[${labelPrefix}address1]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'postal_code': bundle.inputData?.[`${keyPrefix}postal_code`],
            'org_name': bundle.inputData?.[`${keyPrefix}org_name`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'status': bundle.inputData?.[`${keyPrefix}status`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'first_name': bundle.inputData?.[`${keyPrefix}first_name`],
            'last_name': bundle.inputData?.[`${keyPrefix}last_name`],
            'address3': bundle.inputData?.[`${keyPrefix}address3`],
            'fax': bundle.inputData?.[`${keyPrefix}fax`],
            'address2': bundle.inputData?.[`${keyPrefix}address2`],
            'email': bundle.inputData?.[`${keyPrefix}email`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'phone': bundle.inputData?.[`${keyPrefix}phone`],
            'address1': bundle.inputData?.[`${keyPrefix}address1`],
        }
    },
}
