const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}license_id`,
                label: `License ID - [${labelPrefix}license_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_type`,
                label: `License type - [${labelPrefix}license_type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_currency`,
                label: `License currency - [${labelPrefix}license_currency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_order_date`,
                label: `License order date - [${labelPrefix}license_order_date]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_custid`,
                label: `Customer ID - [${labelPrefix}license_custid]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_ip`,
                label: `License IP - [${labelPrefix}license_ip]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_status`,
                label: `License status - [${labelPrefix}license_status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_invoice`,
                label: `License invoice - [${labelPrefix}license_invoice]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_coupon`,
                label: `License coupon - [${labelPrefix}license_coupon]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_hostname`,
                label: `License hostname - [${labelPrefix}license_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_key`,
                label: `License key - [${labelPrefix}license_key]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_extra`,
                label: `Additional license information - [${labelPrefix}license_extra]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'license_id': bundle.inputData?.[`${keyPrefix}license_id`],
            'license_type': bundle.inputData?.[`${keyPrefix}license_type`],
            'license_currency': bundle.inputData?.[`${keyPrefix}license_currency`],
            'license_order_date': bundle.inputData?.[`${keyPrefix}license_order_date`],
            'license_custid': bundle.inputData?.[`${keyPrefix}license_custid`],
            'license_ip': bundle.inputData?.[`${keyPrefix}license_ip`],
            'license_status': bundle.inputData?.[`${keyPrefix}license_status`],
            'license_invoice': bundle.inputData?.[`${keyPrefix}license_invoice`],
            'license_coupon': bundle.inputData?.[`${keyPrefix}license_coupon`],
            'license_hostname': bundle.inputData?.[`${keyPrefix}license_hostname`],
            'license_key': bundle.inputData?.[`${keyPrefix}license_key`],
            'license_extra': bundle.inputData?.[`${keyPrefix}license_extra`],
        }
    },
}
