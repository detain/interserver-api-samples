const utils = require('../utils/utils');
const BuyItNowRow_cpu_inner_oneOf = require('../models/BuyItNowRow_cpu_inner_oneOf');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}img`,
                label: `[${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                label: `[${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}speed`,
                label: `[${labelPrefix}speed]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cpus`,
                label: `[${labelPrefix}num_cpus]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cores`,
                label: `[${labelPrefix}num_cores]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'img': bundle.inputData?.[`${keyPrefix}img`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'speed': bundle.inputData?.[`${keyPrefix}speed`],
            'num_cpus': bundle.inputData?.[`${keyPrefix}num_cpus`],
            'num_cores': bundle.inputData?.[`${keyPrefix}num_cores`],
        }
    },
}
