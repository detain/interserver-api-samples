const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}disable_reset`,
                label: `[${labelPrefix}disable_reset]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}disable_reinstall`,
                label: `[${labelPrefix}disable_reinstall]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'disable_reset': bundle.inputData?.[`${keyPrefix}disable_reset`],
            'disable_reinstall': bundle.inputData?.[`${keyPrefix}disable_reinstall`],
        }
    },
}
