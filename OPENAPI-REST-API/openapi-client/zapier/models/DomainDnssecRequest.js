const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}algorithm`,
                label: `List of DNSSEC algorithm IDs for each record. - [${labelPrefix}algorithm]`,
                list: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}digest_type`,
                label: `List of digest type IDs for each record. - [${labelPrefix}digest_type]`,
                list: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}digest`,
                label: `List of hex digests for each record. - [${labelPrefix}digest]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}key_tag`,
                label: `List of key tag values corresponding to each record. - [${labelPrefix}key_tag]`,
                list: true,
                type: 'integer',
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
