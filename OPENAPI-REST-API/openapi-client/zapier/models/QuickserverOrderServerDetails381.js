const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}cpu`,
                label: `CPU details of the server. - [${labelPrefix}cpu]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ram`,
                label: `RAM capacity of the server. - [${labelPrefix}ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hd`,
                label: `Hard disk capacity of the server. - [${labelPrefix}hd]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cores`,
                label: `Number of CPU cores. - [${labelPrefix}cores]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}cost`,
                label: `Cost of the server. - [${labelPrefix}cost]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'cpu': bundle.inputData?.[`${keyPrefix}cpu`],
            'ram': bundle.inputData?.[`${keyPrefix}ram`],
            'hd': bundle.inputData?.[`${keyPrefix}hd`],
            'cores': bundle.inputData?.[`${keyPrefix}cores`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
        }
    },
}
