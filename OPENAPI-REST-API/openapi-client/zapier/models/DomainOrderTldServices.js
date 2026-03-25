const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}.asia`,
                label: `Service ID for .asia TLD - [${labelPrefix}.asia]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}.be`,
                label: `Service ID for .be TLD - [${labelPrefix}.be]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}.biz`,
                label: `Service ID for .biz TLD - [${labelPrefix}.biz]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}.ca`,
                label: `Service ID for .ca TLD - [${labelPrefix}.ca]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '.asia': bundle.inputData?.[`${keyPrefix}.asia`],
            '.be': bundle.inputData?.[`${keyPrefix}.be`],
            '.biz': bundle.inputData?.[`${keyPrefix}.biz`],
            '.ca': bundle.inputData?.[`${keyPrefix}.ca`],
        }
    },
}
