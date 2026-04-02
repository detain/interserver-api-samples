const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}376359`,
                label: `Link to a website. - [${labelPrefix}376359]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}376473`,
                label: `Link to a website. - [${labelPrefix}376473]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}386218`,
                label: `Link to a website. - [${labelPrefix}386218]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '376359': bundle.inputData?.[`${keyPrefix}376359`],
            '376473': bundle.inputData?.[`${keyPrefix}376473`],
            '386218': bundle.inputData?.[`${keyPrefix}386218`],
        }
    },
}
