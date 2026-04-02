const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}alert_id`,
                label: `Alert ID to update. - [${labelPrefix}alert_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}type`,
                label: `Alert type identifier. - [${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}value`,
                label: `Alert value or threshold. - [${labelPrefix}value]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}to`,
                label: `Email address to notify. - [${labelPrefix}to]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}enabled`,
                label: `Whether the alert is enabled. - [${labelPrefix}enabled]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'alert_id': bundle.inputData?.[`${keyPrefix}alert_id`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'value': bundle.inputData?.[`${keyPrefix}value`],
            'to': bundle.inputData?.[`${keyPrefix}to`],
            'enabled': bundle.inputData?.[`${keyPrefix}enabled`],
        }
    },
}
