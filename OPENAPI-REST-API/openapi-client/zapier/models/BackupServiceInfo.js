const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}backup_id`,
                label: `Backup ID. - [${labelPrefix}backup_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_server`,
                label: `Backup server ID. - [${labelPrefix}backup_server]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_username`,
                label: `Backup username. - [${labelPrefix}backup_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_type`,
                label: `Backup type. - [${labelPrefix}backup_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_currency`,
                label: `Backup currency. - [${labelPrefix}backup_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_order_date`,
                label: `Backup order date. - [${labelPrefix}backup_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_custid`,
                label: `Backup customer ID. - [${labelPrefix}backup_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_quota`,
                label: `Backup quota. - [${labelPrefix}backup_quota]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_ip`,
                label: `Backup IP address. - [${labelPrefix}backup_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_status`,
                label: `Backup status. - [${labelPrefix}backup_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_invoice`,
                label: `Backup invoice. - [${labelPrefix}backup_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_coupon`,
                label: `Backup coupon. - [${labelPrefix}backup_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_extra`,
                label: `Backup extra information. - [${labelPrefix}backup_extra]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_server_status`,
                label: `Backup server status. - [${labelPrefix}backup_server_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_comment`,
                label: `Backup comment. - [${labelPrefix}backup_comment]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'backup_id': bundle.inputData?.[`${keyPrefix}backup_id`],
            'backup_server': bundle.inputData?.[`${keyPrefix}backup_server`],
            'backup_username': bundle.inputData?.[`${keyPrefix}backup_username`],
            'backup_type': bundle.inputData?.[`${keyPrefix}backup_type`],
            'backup_currency': bundle.inputData?.[`${keyPrefix}backup_currency`],
            'backup_order_date': bundle.inputData?.[`${keyPrefix}backup_order_date`],
            'backup_custid': bundle.inputData?.[`${keyPrefix}backup_custid`],
            'backup_quota': bundle.inputData?.[`${keyPrefix}backup_quota`],
            'backup_ip': bundle.inputData?.[`${keyPrefix}backup_ip`],
            'backup_status': bundle.inputData?.[`${keyPrefix}backup_status`],
            'backup_invoice': bundle.inputData?.[`${keyPrefix}backup_invoice`],
            'backup_coupon': bundle.inputData?.[`${keyPrefix}backup_coupon`],
            'backup_extra': bundle.inputData?.[`${keyPrefix}backup_extra`],
            'backup_server_status': bundle.inputData?.[`${keyPrefix}backup_server_status`],
            'backup_comment': bundle.inputData?.[`${keyPrefix}backup_comment`],
        }
    },
}
