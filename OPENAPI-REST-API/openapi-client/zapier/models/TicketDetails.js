const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ticketid`,
                label: `[${labelPrefix}ticketid]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ticketmaskid`,
                label: `[${labelPrefix}ticketmaskid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}department`,
                label: `[${labelPrefix}department]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}status`,
                label: `[${labelPrefix}status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}priority`,
                label: `[${labelPrefix}priority]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}subject`,
                label: `[${labelPrefix}subject]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}created_on`,
                label: `[${labelPrefix}created_on]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}updated_on`,
                label: `[${labelPrefix}updated_on]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ticketid': bundle.inputData?.[`${keyPrefix}ticketid`],
            'ticketmaskid': bundle.inputData?.[`${keyPrefix}ticketmaskid`],
            'department': bundle.inputData?.[`${keyPrefix}department`],
            'status': bundle.inputData?.[`${keyPrefix}status`],
            'priority': bundle.inputData?.[`${keyPrefix}priority`],
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
            'created_on': bundle.inputData?.[`${keyPrefix}created_on`],
            'updated_on': bundle.inputData?.[`${keyPrefix}updated_on`],
        }
    },
}
