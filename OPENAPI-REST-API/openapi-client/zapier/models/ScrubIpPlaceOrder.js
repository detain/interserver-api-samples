const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_type`,
                label: `[${labelPrefix}service_type]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ip`,
                label: `[${labelPrefix}ip]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'service_type': bundle.inputData?.[`${keyPrefix}service_type`],
            'ip': bundle.inputData?.[`${keyPrefix}ip`],
        }
    },
}
