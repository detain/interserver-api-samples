const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}filename`,
                label: `The filename of the attached file. - [${labelPrefix}filename]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}data`,
                label: `The file contents base64 encoded - [${labelPrefix}data]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'filename': bundle.inputData?.[`${keyPrefix}filename`],
            'data': bundle.inputData?.[`${keyPrefix}data`],
        }
    },
}
