const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}text`,
                label: `[${labelPrefix}text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}url`,
                label: `A pre-signed download URL valid for 24 hours. - [${labelPrefix}url]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'text': bundle.inputData?.[`${keyPrefix}text`],
            'url': bundle.inputData?.[`${keyPrefix}url`],
        }
    },
}
