const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}kvm`,
                label: `[${labelPrefix}kvm]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}kvmstorage`,
                label: `[${labelPrefix}kvmstorage]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}hyperv`,
                label: `[${labelPrefix}hyperv]`,
                type: 'boolean',
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
