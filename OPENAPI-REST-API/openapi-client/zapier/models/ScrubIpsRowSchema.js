const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}scrub_ip_id`,
                label: `[${labelPrefix}scrub_ip_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}repeat_invoices_cost`,
                label: `[${labelPrefix}repeat_invoices_cost]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}scrub_ip_ip`,
                label: `[${labelPrefix}scrub_ip_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_status`,
                label: `[${labelPrefix}scrub_ip_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `[${labelPrefix}services_name]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'scrub_ip_id': bundle.inputData?.[`${keyPrefix}scrub_ip_id`],
            'repeat_invoices_cost': bundle.inputData?.[`${keyPrefix}repeat_invoices_cost`],
            'scrub_ip_ip': bundle.inputData?.[`${keyPrefix}scrub_ip_ip`],
            'scrub_ip_status': bundle.inputData?.[`${keyPrefix}scrub_ip_status`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
        }
    },
}
