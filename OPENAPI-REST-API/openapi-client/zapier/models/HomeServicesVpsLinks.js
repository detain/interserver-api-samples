const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}465503`,
                label: `Link to a VPS. - [${labelPrefix}465503]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2500081`,
                label: `Link to a VPS. - [${labelPrefix}2500081]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2578866`,
                label: `Link to a VPS. - [${labelPrefix}2578866]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '465503': bundle.inputData?.[`${keyPrefix}465503`],
            '2500081': bundle.inputData?.[`${keyPrefix}2500081`],
            '2578866': bundle.inputData?.[`${keyPrefix}2578866`],
        }
    },
}
