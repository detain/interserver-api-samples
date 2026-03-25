const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}links`,
                label: `List of backup links. - [${labelPrefix}links]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}count`,
                label: `Number of backups. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': bundle.inputData?.[`${keyPrefix}links`],
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
