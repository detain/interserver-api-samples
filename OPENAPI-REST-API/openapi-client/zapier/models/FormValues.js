const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}memory`,
                label: `Selected memory option ID. - [${labelPrefix}memory]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}bandwidth`,
                label: `Selected bandwidth option ID. - [${labelPrefix}bandwidth]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ips`,
                label: `Selected IP block option ID. - [${labelPrefix}ips]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}os`,
                label: `Selected operating system option ID. - [${labelPrefix}os]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}cp`,
                label: `Selected control panel option ID. - [${labelPrefix}cp]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}raid`,
                label: `Selected RAID option ID. - [${labelPrefix}raid]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}hd`,
                label: `Selected hard drive option ID. - [${labelPrefix}hd]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}region`,
                label: `Selected datacenter region ID. - [${labelPrefix}region]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'memory': bundle.inputData?.[`${keyPrefix}memory`],
            'bandwidth': bundle.inputData?.[`${keyPrefix}bandwidth`],
            'ips': bundle.inputData?.[`${keyPrefix}ips`],
            'os': bundle.inputData?.[`${keyPrefix}os`],
            'cp': bundle.inputData?.[`${keyPrefix}cp`],
            'raid': bundle.inputData?.[`${keyPrefix}raid`],
            'hd': bundle.inputData?.[`${keyPrefix}hd`],
            'region': bundle.inputData?.[`${keyPrefix}region`],
        }
    },
}
