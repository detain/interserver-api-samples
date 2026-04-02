const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}action`,
                label: `The power action to send to the ipmi controller. - [${labelPrefix}action]`,
                required: true,
                type: 'string',
                choices: [
                    'cycle',
                    'reset',
                    'on',
                    'off',
                    'soft',
                ],
            },
            {
                key: `${keyPrefix}asset`,
                label: `The Asset ID - [${labelPrefix}asset]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'action': bundle.inputData?.[`${keyPrefix}action`],
            'asset': bundle.inputData?.[`${keyPrefix}asset`],
        }
    },
}
