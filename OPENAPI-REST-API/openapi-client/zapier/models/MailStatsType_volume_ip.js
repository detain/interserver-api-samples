const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}1.1.1.1`,
                label: `[${labelPrefix}1.1.1.1]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}2.2.2.2`,
                label: `[${labelPrefix}2.2.2.2]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}3.3.3.3`,
                label: `[${labelPrefix}3.3.3.3]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}4.4.4.4`,
                label: `[${labelPrefix}4.4.4.4]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '1.1.1.1': bundle.inputData?.[`${keyPrefix}1.1.1.1`],
            '2.2.2.2': bundle.inputData?.[`${keyPrefix}2.2.2.2`],
            '3.3.3.3': bundle.inputData?.[`${keyPrefix}3.3.3.3`],
            '4.4.4.4': bundle.inputData?.[`${keyPrefix}4.4.4.4`],
        }
    },
}
