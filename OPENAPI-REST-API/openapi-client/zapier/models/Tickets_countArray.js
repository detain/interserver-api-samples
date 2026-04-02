const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}Open`,
                label: `[${labelPrefix}Open]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}On Hold`,
                label: `[${labelPrefix}On Hold]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}Closed`,
                label: `[${labelPrefix}Closed]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'Open': bundle.inputData?.[`${keyPrefix}Open`],
            'On Hold': bundle.inputData?.[`${keyPrefix}On Hold`],
            'Closed': bundle.inputData?.[`${keyPrefix}Closed`],
        }
    },
}
