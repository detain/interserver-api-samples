const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}memory`,
                label: `Memory configuration ID for the server order. - [${labelPrefix}memory]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}bandwidth`,
                label: `Bandwidth configuration ID for the server order. - [${labelPrefix}bandwidth]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ips`,
                label: `IPs configuration ID for the server order. - [${labelPrefix}ips]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}os`,
                label: `Operating System configuration ID for the server order. - [${labelPrefix}os]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cp`,
                label: `Control Panel configuration ID for the server order. - [${labelPrefix}cp]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}raid`,
                label: `RAID configuration ID for the server order. - [${labelPrefix}raid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hd`,
                label: `Hard Drives configuration ID for the server order. - [${labelPrefix}hd]`,
                type: 'string',
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
        }
    },
}
