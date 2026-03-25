const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}service_id`,
                label: `[${labelPrefix}service_id]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}service_module`,
                label: `[${labelPrefix}service_module]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_hostname`,
                label: `[${labelPrefix}service_hostname]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'service_id': bundle.inputData?.[`${keyPrefix}service_id`],
            'service_module': bundle.inputData?.[`${keyPrefix}service_module`],
            'service_hostname': bundle.inputData?.[`${keyPrefix}service_hostname`],
        }
    },
}
