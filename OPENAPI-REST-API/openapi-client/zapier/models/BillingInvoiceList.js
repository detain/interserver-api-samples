const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}rows`,
                label: `Invoice rows returned for the account. - [${labelPrefix}rows]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}summary`,
                label: `Totals and summary data for the invoices list. - [${labelPrefix}summary]`,
                dict: true,
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'rows': bundle.inputData?.[`${keyPrefix}rows`],
            'summary': bundle.inputData?.[`${keyPrefix}summary`],
        }
    },
}
