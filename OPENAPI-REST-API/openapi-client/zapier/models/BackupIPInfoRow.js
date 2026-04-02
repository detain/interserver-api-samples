const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}desc`,
                label: `Description of the IP information. - [${labelPrefix}desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}value`,
                label: `Value of the IP information. - [${labelPrefix}value]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'desc': bundle.inputData?.[`${keyPrefix}desc`],
            'value': bundle.inputData?.[`${keyPrefix}value`],
        }
    },
}
