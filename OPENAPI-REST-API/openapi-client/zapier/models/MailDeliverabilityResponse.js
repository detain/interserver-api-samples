const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}stat`,
                label: `Delivered and bounced counts. - [${labelPrefix}stat]`,
                dict: true,
            },
            {
                key: `${keyPrefix}percent`,
                label: `Bounce percentage. - [${labelPrefix}percent]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}table_data`,
                label: `Detailed deliverability breakdown by sender or domain. - [${labelPrefix}table_data]`,
                list: true,
                type: 'array',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'stat': bundle.inputData?.[`${keyPrefix}stat`],
            'percent': bundle.inputData?.[`${keyPrefix}percent`],
            'table_data': bundle.inputData?.[`${keyPrefix}table_data`],
        }
    },
}
