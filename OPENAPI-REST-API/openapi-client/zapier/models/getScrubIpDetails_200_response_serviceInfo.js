const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}scrub_ip_id`,
                label: `[${labelPrefix}scrub_ip_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_type`,
                label: `[${labelPrefix}scrub_ip_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_custid`,
                label: `[${labelPrefix}scrub_ip_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_order_date`,
                label: `[${labelPrefix}scrub_ip_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_ip`,
                label: `[${labelPrefix}scrub_ip_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_service_id`,
                label: `[${labelPrefix}scrub_ip_service_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_service_module`,
                label: `[${labelPrefix}scrub_ip_service_module]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_status`,
                label: `[${labelPrefix}scrub_ip_status]`,
                type: 'string',
                choices: [
                    'active',
                    'pending',
                    'canceled',
                    'expired',
                ],
            },
            {
                key: `${keyPrefix}scrub_ip_invoice`,
                label: `[${labelPrefix}scrub_ip_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_currency`,
                label: `[${labelPrefix}scrub_ip_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_coupon`,
                label: `[${labelPrefix}scrub_ip_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}scrub_ip_comment`,
                label: `[${labelPrefix}scrub_ip_comment]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'scrub_ip_id': bundle.inputData?.[`${keyPrefix}scrub_ip_id`],
            'scrub_ip_type': bundle.inputData?.[`${keyPrefix}scrub_ip_type`],
            'scrub_ip_custid': bundle.inputData?.[`${keyPrefix}scrub_ip_custid`],
            'scrub_ip_order_date': bundle.inputData?.[`${keyPrefix}scrub_ip_order_date`],
            'scrub_ip_ip': bundle.inputData?.[`${keyPrefix}scrub_ip_ip`],
            'scrub_ip_service_id': bundle.inputData?.[`${keyPrefix}scrub_ip_service_id`],
            'scrub_ip_service_module': bundle.inputData?.[`${keyPrefix}scrub_ip_service_module`],
            'scrub_ip_status': bundle.inputData?.[`${keyPrefix}scrub_ip_status`],
            'scrub_ip_invoice': bundle.inputData?.[`${keyPrefix}scrub_ip_invoice`],
            'scrub_ip_currency': bundle.inputData?.[`${keyPrefix}scrub_ip_currency`],
            'scrub_ip_coupon': bundle.inputData?.[`${keyPrefix}scrub_ip_coupon`],
            'scrub_ip_comment': bundle.inputData?.[`${keyPrefix}scrub_ip_comment`],
        }
    },
}
