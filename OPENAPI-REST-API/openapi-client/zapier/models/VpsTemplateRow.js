const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}template_id`,
                label: `[${labelPrefix}template_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_type`,
                label: `[${labelPrefix}template_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_os`,
                label: `[${labelPrefix}template_os]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_version`,
                label: `[${labelPrefix}template_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_bits`,
                label: `[${labelPrefix}template_bits]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_file`,
                label: `[${labelPrefix}template_file]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_available`,
                label: `[${labelPrefix}template_available]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_name`,
                label: `[${labelPrefix}template_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}template_dir`,
                label: `[${labelPrefix}template_dir]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'template_id': bundle.inputData?.[`${keyPrefix}template_id`],
            'template_type': bundle.inputData?.[`${keyPrefix}template_type`],
            'template_os': bundle.inputData?.[`${keyPrefix}template_os`],
            'template_version': bundle.inputData?.[`${keyPrefix}template_version`],
            'template_bits': bundle.inputData?.[`${keyPrefix}template_bits`],
            'template_file': bundle.inputData?.[`${keyPrefix}template_file`],
            'template_available': bundle.inputData?.[`${keyPrefix}template_available`],
            'template_name': bundle.inputData?.[`${keyPrefix}template_name`],
            'template_dir': bundle.inputData?.[`${keyPrefix}template_dir`],
        }
    },
}
