const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}kvm`,
                label: `[${labelPrefix}kvm]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}kvmstorage`,
                label: `[${labelPrefix}kvmstorage]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hyperv`,
                label: `[${labelPrefix}hyperv]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'kvm': bundle.inputData?.[`${keyPrefix}kvm`],
            'kvmstorage': bundle.inputData?.[`${keyPrefix}kvmstorage`],
            'hyperv': bundle.inputData?.[`${keyPrefix}hyperv`],
        }
    },
}
