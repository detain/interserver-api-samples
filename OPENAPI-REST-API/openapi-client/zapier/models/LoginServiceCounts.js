const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vps`,
                label: `The number of total VPS orders that have been placed in our billing system. - [${labelPrefix}vps]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}websites`,
                label: `The number of total website orders that have been placed in our billing system. - [${labelPrefix}websites]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}servers`,
                label: `The number of total server orders that have been placed in our billing system. - [${labelPrefix}servers]`,
                required: true,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vps': bundle.inputData?.[`${keyPrefix}vps`],
            'websites': bundle.inputData?.[`${keyPrefix}websites`],
            'servers': bundle.inputData?.[`${keyPrefix}servers`],
        }
    },
}
