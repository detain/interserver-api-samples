const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}package_id`,
                label: `[${labelPrefix}package_id]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}package_cost`,
                label: `[${labelPrefix}package_cost]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}currency`,
                label: `[${labelPrefix}currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}currencySymbol`,
                label: `[${labelPrefix}currencySymbol]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'package_id': bundle.inputData?.[`${keyPrefix}package_id`],
            'package_cost': bundle.inputData?.[`${keyPrefix}package_cost`],
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'currencySymbol': bundle.inputData?.[`${keyPrefix}currencySymbol`],
        }
    },
}
