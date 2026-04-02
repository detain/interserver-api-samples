const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}domain`,
                label: `The domain name. - [${labelPrefix}domain]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip`,
                label: `IP Address to point the domain to. - [${labelPrefix}ip]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'domain': bundle.inputData?.[`${keyPrefix}domain`],
            'ip': bundle.inputData?.[`${keyPrefix}ip`],
        }
    },
}
