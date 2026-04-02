const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}admin/cc_bad_response`,
                label: `[${labelPrefix}admin/cc_bad_response]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}admin/mass_communications.tpl`,
                label: `[${labelPrefix}admin/mass_communications.tpl]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'admin/cc_bad_response': bundle.inputData?.[`${keyPrefix}admin/cc_bad_response`],
            'admin/mass_communications.tpl': bundle.inputData?.[`${keyPrefix}admin/mass_communications.tpl`],
        }
    },
}
