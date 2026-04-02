const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}website_id`,
                label: `Website ID - [${labelPrefix}website_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_server`,
                label: `Website server - [${labelPrefix}website_server]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_type`,
                label: `Website type - [${labelPrefix}website_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_currency`,
                label: `Currency of the website - [${labelPrefix}website_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_order_date`,
                label: `Order date of the website - [${labelPrefix}website_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_custid`,
                label: `Customer ID of the website - [${labelPrefix}website_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_ip`,
                label: `IP address of the website - [${labelPrefix}website_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_status`,
                label: `Status of the website - [${labelPrefix}website_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_invoice`,
                label: `Invoice of the website - [${labelPrefix}website_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_coupon`,
                label: `Coupon for the website - [${labelPrefix}website_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_extra`,
                label: `Extra information in JSON format for the website - [${labelPrefix}website_extra]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_hostname`,
                label: `Hostname of the website - [${labelPrefix}website_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_comment`,
                label: `Comment for the website - [${labelPrefix}website_comment]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_username`,
                label: `Username for the website - [${labelPrefix}website_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_server_status`,
                label: `Server status of the website - [${labelPrefix}website_server_status]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'website_id': bundle.inputData?.[`${keyPrefix}website_id`],
            'website_server': bundle.inputData?.[`${keyPrefix}website_server`],
            'website_type': bundle.inputData?.[`${keyPrefix}website_type`],
            'website_currency': bundle.inputData?.[`${keyPrefix}website_currency`],
            'website_order_date': bundle.inputData?.[`${keyPrefix}website_order_date`],
            'website_custid': bundle.inputData?.[`${keyPrefix}website_custid`],
            'website_ip': bundle.inputData?.[`${keyPrefix}website_ip`],
            'website_status': bundle.inputData?.[`${keyPrefix}website_status`],
            'website_invoice': bundle.inputData?.[`${keyPrefix}website_invoice`],
            'website_coupon': bundle.inputData?.[`${keyPrefix}website_coupon`],
            'website_extra': bundle.inputData?.[`${keyPrefix}website_extra`],
            'website_hostname': bundle.inputData?.[`${keyPrefix}website_hostname`],
            'website_comment': bundle.inputData?.[`${keyPrefix}website_comment`],
            'website_username': bundle.inputData?.[`${keyPrefix}website_username`],
            'website_server_status': bundle.inputData?.[`${keyPrefix}website_server_status`],
        }
    },
}
