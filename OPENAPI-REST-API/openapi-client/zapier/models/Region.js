const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}region_id`,
                label: `[${labelPrefix}region_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}region_name`,
                label: `[${labelPrefix}region_name]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'region_id': bundle.inputData?.[`${keyPrefix}region_id`],
            'region_name': bundle.inputData?.[`${keyPrefix}region_name`],
        }
    },
}
