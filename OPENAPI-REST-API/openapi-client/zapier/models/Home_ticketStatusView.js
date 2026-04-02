const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}4`,
                label: `Status corresponding to view number 4. - [${labelPrefix}4]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}5`,
                label: `Status corresponding to view number 5. - [${labelPrefix}5]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}6`,
                label: `Status corresponding to view number 6. - [${labelPrefix}6]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '4': bundle.inputData?.[`${keyPrefix}4`],
            '5': bundle.inputData?.[`${keyPrefix}5`],
            '6': bundle.inputData?.[`${keyPrefix}6`],
        }
    },
}
