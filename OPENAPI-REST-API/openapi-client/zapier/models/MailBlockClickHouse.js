const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}date`,
                label: `[${labelPrefix}date]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}from`,
                label: `[${labelPrefix}from]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}messageId`,
                label: `[${labelPrefix}messageId]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}subject`,
                label: `[${labelPrefix}subject]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}to`,
                label: `[${labelPrefix}to]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'date': bundle.inputData?.[`${keyPrefix}date`],
            'from': bundle.inputData?.[`${keyPrefix}from`],
            'messageId': bundle.inputData?.[`${keyPrefix}messageId`],
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
            'to': bundle.inputData?.[`${keyPrefix}to`],
        }
    },
}
