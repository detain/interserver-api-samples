const utils = require('../utils/utils');
const AccountInfoMaxMindResponse = require('../models/AccountInfoMaxMindResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
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
                key: `${keyPrefix}zip`,
                label: `[${labelPrefix}zip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}maxmind_riskscore`,
                label: `[${labelPrefix}maxmind_riskscore]`,
                type: 'string',
            },
            ...AccountInfoMaxMindResponse.fields(`${keyPrefix}maxmind`, isInput),
            {
                key: `${keyPrefix}verified`,
                label: `[${labelPrefix}verified]`,
                type: 'boolean',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'cc': bundle.inputData?.[`${keyPrefix}cc`],
            'cc_exp': bundle.inputData?.[`${keyPrefix}cc_exp`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'address': bundle.inputData?.[`${keyPrefix}address`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'zip': bundle.inputData?.[`${keyPrefix}zip`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'maxmind_riskscore': bundle.inputData?.[`${keyPrefix}maxmind_riskscore`],
            'maxmind': utils.removeIfEmpty(AccountInfoMaxMindResponse.mapping(bundle, `${keyPrefix}maxmind`)),
            'verified': bundle.inputData?.[`${keyPrefix}verified`],
        }
    },
}
