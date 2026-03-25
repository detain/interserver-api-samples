const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}algorithm`,
                label: `[${labelPrefix}algorithm]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}digest_type`,
                label: `[${labelPrefix}digest_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}digest`,
                label: `[${labelPrefix}digest]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}key_tag`,
                label: `[${labelPrefix}key_tag]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'algorithm': bundle.inputData?.[`${keyPrefix}algorithm`],
            'digest_type': bundle.inputData?.[`${keyPrefix}digest_type`],
            'digest': bundle.inputData?.[`${keyPrefix}digest`],
            'key_tag': bundle.inputData?.[`${keyPrefix}key_tag`],
        }
    },
}
