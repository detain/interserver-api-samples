const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ip`,
                label: `Your IP Address you wish to connect to the IPMI system from. - [${labelPrefix}ip]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}asset`,
                label: `Asset ID - [${labelPrefix}asset]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip': bundle.inputData?.[`${keyPrefix}ip`],
            'asset': bundle.inputData?.[`${keyPrefix}asset`],
        }
    },
}
