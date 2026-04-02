const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}domain_id`,
                label: `[${labelPrefix}domain_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_hostname`,
                label: `[${labelPrefix}domain_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_username`,
                label: `[${labelPrefix}domain_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_password`,
                label: `[${labelPrefix}domain_password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_type`,
                label: `[${labelPrefix}domain_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_currency`,
                label: `[${labelPrefix}domain_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_expire_date`,
                label: `[${labelPrefix}domain_expire_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_order_date`,
                label: `[${labelPrefix}domain_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_custid`,
                label: `[${labelPrefix}domain_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_status`,
                label: `[${labelPrefix}domain_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_invoice`,
                label: `[${labelPrefix}domain_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_coupon`,
                label: `[${labelPrefix}domain_coupon]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'domain_id': bundle.inputData?.[`${keyPrefix}domain_id`],
            'domain_hostname': bundle.inputData?.[`${keyPrefix}domain_hostname`],
            'domain_username': bundle.inputData?.[`${keyPrefix}domain_username`],
            'domain_password': bundle.inputData?.[`${keyPrefix}domain_password`],
            'domain_type': bundle.inputData?.[`${keyPrefix}domain_type`],
            'domain_currency': bundle.inputData?.[`${keyPrefix}domain_currency`],
            'domain_expire_date': bundle.inputData?.[`${keyPrefix}domain_expire_date`],
            'domain_order_date': bundle.inputData?.[`${keyPrefix}domain_order_date`],
            'domain_custid': bundle.inputData?.[`${keyPrefix}domain_custid`],
            'domain_status': bundle.inputData?.[`${keyPrefix}domain_status`],
            'domain_invoice': bundle.inputData?.[`${keyPrefix}domain_invoice`],
            'domain_coupon': bundle.inputData?.[`${keyPrefix}domain_coupon`],
        }
    },
}
