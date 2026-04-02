const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}376114`,
                label: `Link to a domain. - [${labelPrefix}376114]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}376503`,
                label: `Link to a domain. - [${labelPrefix}376503]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}592337`,
                label: `Link to a domain. - [${labelPrefix}592337]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '376114': bundle.inputData?.[`${keyPrefix}376114`],
            '376503': bundle.inputData?.[`${keyPrefix}376503`],
            '592337': bundle.inputData?.[`${keyPrefix}592337`],
        }
    },
}
