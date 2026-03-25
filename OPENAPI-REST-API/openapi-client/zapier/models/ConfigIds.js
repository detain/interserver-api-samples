const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}memory`,
                label: `Configuration ID for the selected memory option. - [${labelPrefix}memory]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}hd`,
                label: `Configuration ID for the selected hard drive option. - [${labelPrefix}hd]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}bandwidth`,
                label: `Configuration ID for the selected bandwidth option. - [${labelPrefix}bandwidth]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ips`,
                label: `Configuration ID for the selected IP block option. - [${labelPrefix}ips]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}os`,
                label: `Configuration ID for the selected operating system. - [${labelPrefix}os]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}cp`,
                label: `Configuration ID for the selected control panel. - [${labelPrefix}cp]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}raid`,
                label: `Configuration ID for the selected RAID option. - [${labelPrefix}raid]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'memory': bundle.inputData?.[`${keyPrefix}memory`],
            'hd': bundle.inputData?.[`${keyPrefix}hd`],
            'bandwidth': bundle.inputData?.[`${keyPrefix}bandwidth`],
            'ips': bundle.inputData?.[`${keyPrefix}ips`],
            'os': bundle.inputData?.[`${keyPrefix}os`],
            'cp': bundle.inputData?.[`${keyPrefix}cp`],
            'raid': bundle.inputData?.[`${keyPrefix}raid`],
        }
    },
}
