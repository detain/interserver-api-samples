const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `Name of the field label. - [${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}active`,
                label: `Active status of the field label. - [${labelPrefix}active]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'active': bundle.inputData?.[`${keyPrefix}active`],
        }
    },
}
