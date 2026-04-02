const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}qs_id`,
                label: `Quickserver ID - [${labelPrefix}qs_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_custid`,
                label: `Customer ID - [${labelPrefix}qs_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_server`,
                label: `Server information - [${labelPrefix}qs_server]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_ip`,
                label: `IP address - [${labelPrefix}qs_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_ipv6`,
                label: `IPv6 address (null) - [${labelPrefix}qs_ipv6]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_vzid`,
                label: `VZ ID - [${labelPrefix}qs_vzid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_currency`,
                label: `Currency - [${labelPrefix}qs_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_type`,
                label: `Type - [${labelPrefix}qs_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_order_date`,
                label: `Order date - [${labelPrefix}qs_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_status`,
                label: `Status - [${labelPrefix}qs_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_invoice`,
                label: `Invoice number - [${labelPrefix}qs_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_coupon`,
                label: `Coupon information - [${labelPrefix}qs_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_extra`,
                label: `Extra information - [${labelPrefix}qs_extra]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_hostname`,
                label: `Hostname - [${labelPrefix}qs_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_server_status`,
                label: `Server status - [${labelPrefix}qs_server_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_comment`,
                label: `Comment - [${labelPrefix}qs_comment]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_slices`,
                label: `Slices information - [${labelPrefix}qs_slices]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_vnc`,
                label: `VNC information - [${labelPrefix}qs_vnc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_vnc_port`,
                label: `VNC port (null) - [${labelPrefix}qs_vnc_port]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}qs_rootpass`,
                label: `Root password - [${labelPrefix}qs_rootpass]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_mac`,
                label: `MAC address - [${labelPrefix}qs_mac]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_os`,
                label: `Operating system - [${labelPrefix}qs_os]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_version`,
                label: `OS version - [${labelPrefix}qs_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_location`,
                label: `Location - [${labelPrefix}qs_location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_platform`,
                label: `Platform (null) - [${labelPrefix}qs_platform]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'qs_id': bundle.inputData?.[`${keyPrefix}qs_id`],
            'qs_custid': bundle.inputData?.[`${keyPrefix}qs_custid`],
            'qs_server': bundle.inputData?.[`${keyPrefix}qs_server`],
            'qs_ip': bundle.inputData?.[`${keyPrefix}qs_ip`],
            'qs_ipv6': bundle.inputData?.[`${keyPrefix}qs_ipv6`],
            'qs_vzid': bundle.inputData?.[`${keyPrefix}qs_vzid`],
            'qs_currency': bundle.inputData?.[`${keyPrefix}qs_currency`],
            'qs_type': bundle.inputData?.[`${keyPrefix}qs_type`],
            'qs_order_date': bundle.inputData?.[`${keyPrefix}qs_order_date`],
            'qs_status': bundle.inputData?.[`${keyPrefix}qs_status`],
            'qs_invoice': bundle.inputData?.[`${keyPrefix}qs_invoice`],
            'qs_coupon': bundle.inputData?.[`${keyPrefix}qs_coupon`],
            'qs_extra': bundle.inputData?.[`${keyPrefix}qs_extra`],
            'qs_hostname': bundle.inputData?.[`${keyPrefix}qs_hostname`],
            'qs_server_status': bundle.inputData?.[`${keyPrefix}qs_server_status`],
            'qs_comment': bundle.inputData?.[`${keyPrefix}qs_comment`],
            'qs_slices': bundle.inputData?.[`${keyPrefix}qs_slices`],
            'qs_vnc': bundle.inputData?.[`${keyPrefix}qs_vnc`],
            'qs_vnc_port': bundle.inputData?.[`${keyPrefix}qs_vnc_port`],
            'qs_rootpass': bundle.inputData?.[`${keyPrefix}qs_rootpass`],
            'qs_mac': bundle.inputData?.[`${keyPrefix}qs_mac`],
            'qs_os': bundle.inputData?.[`${keyPrefix}qs_os`],
            'qs_version': bundle.inputData?.[`${keyPrefix}qs_version`],
            'qs_location': bundle.inputData?.[`${keyPrefix}qs_location`],
            'qs_platform': bundle.inputData?.[`${keyPrefix}qs_platform`],
        }
    },
}
