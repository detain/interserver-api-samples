const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}billing@somedomain.com`,
                label: `[${labelPrefix}billing@somedomain.com]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sales@somedomain.com`,
                label: `[${labelPrefix}sales@somedomain.com]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'billing@somedomain.com': bundle.inputData?.[`${keyPrefix}billing@somedomain.com`],
            'sales@somedomain.com': bundle.inputData?.[`${keyPrefix}sales@somedomain.com`],
        }
    },
}
