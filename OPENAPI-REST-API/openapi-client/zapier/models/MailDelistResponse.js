const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `Mail service ID. - [${labelPrefix}id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}local`,
                label: `Local blocklist entries. - [${labelPrefix}local]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}mbtrap`,
                label: `MailBaby trap block entries. - [${labelPrefix}mbtrap]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}subject`,
                label: `Subject-based block entries. - [${labelPrefix}subject]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}manual`,
                label: `Manually blocked entries. - [${labelPrefix}manual]`,
                list: true,
                type: 'object',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'local': bundle.inputData?.[`${keyPrefix}local`],
            'mbtrap': bundle.inputData?.[`${keyPrefix}mbtrap`],
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
            'manual': bundle.inputData?.[`${keyPrefix}manual`],
        }
    },
}
