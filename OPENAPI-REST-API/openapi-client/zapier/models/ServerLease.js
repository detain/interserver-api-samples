const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}mac`,
                label: `MAC address associated with the lease. - [${labelPrefix}mac]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}authenticated`,
                label: `Indicates if the lease is authenticated. - [${labelPrefix}authenticated]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}group`,
                label: `Group identifier for the lease. - [${labelPrefix}group]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'mac': bundle.inputData?.[`${keyPrefix}mac`],
            'authenticated': bundle.inputData?.[`${keyPrefix}authenticated`],
            'group': bundle.inputData?.[`${keyPrefix}group`],
        }
    },
}
