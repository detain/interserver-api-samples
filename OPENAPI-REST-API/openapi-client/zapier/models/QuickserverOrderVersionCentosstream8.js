const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}centosstream-8`,
                label: `Version details of CentOS Stream 8. - [${labelPrefix}centosstream-8]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'centosstream-8': bundle.inputData?.[`${keyPrefix}centosstream-8`],
        }
    },
}
