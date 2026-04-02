const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}alert_id`,
                label: `[${labelPrefix}alert_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}alert_type`,
                label: `[${labelPrefix}alert_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}alert_value`,
                label: `[${labelPrefix}alert_value]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}alert_to`,
                label: `[${labelPrefix}alert_to]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}alert_enabled`,
                label: `[${labelPrefix}alert_enabled]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'alert_id': bundle.inputData?.[`${keyPrefix}alert_id`],
            'alert_type': bundle.inputData?.[`${keyPrefix}alert_type`],
            'alert_value': bundle.inputData?.[`${keyPrefix}alert_value`],
            'alert_to': bundle.inputData?.[`${keyPrefix}alert_to`],
            'alert_enabled': bundle.inputData?.[`${keyPrefix}alert_enabled`],
        }
    },
}
