const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `Control panel name (e.g., cPanel). - [${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `Monthly cost in cents for the control panel license. - [${labelPrefix}cost]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
        }
    },
}
