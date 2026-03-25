const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}opensuse`,
                label: `[${labelPrefix}opensuse]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ubuntu`,
                label: `[${labelPrefix}ubuntu]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'opensuse': bundle.inputData?.[`${keyPrefix}opensuse`],
            'ubuntu': bundle.inputData?.[`${keyPrefix}ubuntu`],
        }
    },
}
