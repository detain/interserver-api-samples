const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `[${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qty`,
                label: `[${labelPrefix}qty]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `[${labelPrefix}monthly_price]`,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'qty': bundle.inputData?.[`${keyPrefix}qty`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
        }
    },
}
