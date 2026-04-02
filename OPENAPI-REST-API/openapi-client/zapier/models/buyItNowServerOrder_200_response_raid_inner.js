const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `[${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `[${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `[${labelPrefix}monthly_price]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'long_desc': bundle.inputData?.[`${keyPrefix}long_desc`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
        }
    },
}
