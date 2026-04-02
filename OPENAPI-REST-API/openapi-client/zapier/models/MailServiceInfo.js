const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}mail_id`,
                label: `The ID of the mail service. - [${labelPrefix}mail_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_type`,
                label: `The type of mail service. - [${labelPrefix}mail_type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_currency`,
                label: `The currency of the mail service. - [${labelPrefix}mail_currency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_order_date`,
                label: `The order date of the mail service. - [${labelPrefix}mail_order_date]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_custid`,
                label: `The customer ID associated with the mail service. - [${labelPrefix}mail_custid]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_quota`,
                label: `The mail quota for the service. - [${labelPrefix}mail_quota]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_status`,
                label: `The status of the mail service. - [${labelPrefix}mail_status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_invoice`,
                label: `The invoice ID of the mail service. - [${labelPrefix}mail_invoice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_username`,
                label: `The username associated with the mail service. - [${labelPrefix}mail_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_ip`,
                label: `The IP address associated with the mail service. - [${labelPrefix}mail_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_coupon`,
                label: `The coupon associated with the mail service. - [${labelPrefix}mail_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_extra`,
                label: `Additional information for the mail service. - [${labelPrefix}mail_extra]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_server_status`,
                label: `The server status of the mail service. - [${labelPrefix}mail_server_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_comment`,
                label: `Additional comments for the mail service. - [${labelPrefix}mail_comment]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'mail_id': bundle.inputData?.[`${keyPrefix}mail_id`],
            'mail_type': bundle.inputData?.[`${keyPrefix}mail_type`],
            'mail_currency': bundle.inputData?.[`${keyPrefix}mail_currency`],
            'mail_order_date': bundle.inputData?.[`${keyPrefix}mail_order_date`],
            'mail_custid': bundle.inputData?.[`${keyPrefix}mail_custid`],
            'mail_quota': bundle.inputData?.[`${keyPrefix}mail_quota`],
            'mail_status': bundle.inputData?.[`${keyPrefix}mail_status`],
            'mail_invoice': bundle.inputData?.[`${keyPrefix}mail_invoice`],
            'mail_username': bundle.inputData?.[`${keyPrefix}mail_username`],
            'mail_ip': bundle.inputData?.[`${keyPrefix}mail_ip`],
            'mail_coupon': bundle.inputData?.[`${keyPrefix}mail_coupon`],
            'mail_extra': bundle.inputData?.[`${keyPrefix}mail_extra`],
            'mail_server_status': bundle.inputData?.[`${keyPrefix}mail_server_status`],
            'mail_comment': bundle.inputData?.[`${keyPrefix}mail_comment`],
        }
    },
}
