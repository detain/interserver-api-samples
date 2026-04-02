const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}backup`,
                label: `[${labelPrefix}backup]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}password`,
                label: `[${labelPrefix}password]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'backup': bundle.inputData?.[`${keyPrefix}backup`],
            'password': bundle.inputData?.[`${keyPrefix}password`],
        }
    },
}
