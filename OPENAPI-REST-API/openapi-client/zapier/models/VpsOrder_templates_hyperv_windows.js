const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}Windows2019Standard`,
                label: `[${labelPrefix}Windows2019Standard]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}Windows2022`,
                label: `[${labelPrefix}Windows2022]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'Windows2019Standard': bundle.inputData?.[`${keyPrefix}Windows2019Standard`],
            'Windows2022': bundle.inputData?.[`${keyPrefix}Windows2022`],
        }
    },
}
