const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vps_id`,
                label: `VPS ID - [${labelPrefix}vps_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_custid`,
                label: `Customer ID - [${labelPrefix}vps_custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_server`,
                label: `Server ID - [${labelPrefix}vps_server]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_ip`,
                label: `IP address of the VPS - [${labelPrefix}vps_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_ipv6`,
                label: `IPv6 address of the VPS - [${labelPrefix}vps_ipv6]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_vzid`,
                label: `VPS Virtuozzo ID - [${labelPrefix}vps_vzid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_currency`,
                label: `Currency used for billing - [${labelPrefix}vps_currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_type`,
                label: `VPS type - [${labelPrefix}vps_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_order_date`,
                label: `Date of VPS order - [${labelPrefix}vps_order_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_status`,
                label: `VPS status - [${labelPrefix}vps_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_invoice`,
                label: `VPS invoice number - [${labelPrefix}vps_invoice]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_coupon`,
                label: `VPS coupon code - [${labelPrefix}vps_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_extra`,
                label: `Additional information about the VPS - [${labelPrefix}vps_extra]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_hostname`,
                label: `VPS hostname - [${labelPrefix}vps_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_server_status`,
                label: `Status of the VPS server - [${labelPrefix}vps_server_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_comment`,
                label: `Comment associated with the VPS - [${labelPrefix}vps_comment]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_slices`,
                label: `Number of VPS slices - [${labelPrefix}vps_slices]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_vnc`,
                label: `VNC address - [${labelPrefix}vps_vnc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_vnc_port`,
                label: `VNC port - [${labelPrefix}vps_vnc_port]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_rootpass`,
                label: `Root password of the VPS - [${labelPrefix}vps_rootpass]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_mac`,
                label: `MAC address of the VPS - [${labelPrefix}vps_mac]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_os`,
                label: `Operating system of the VPS - [${labelPrefix}vps_os]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_version`,
                label: `Version of the operating system - [${labelPrefix}vps_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_location`,
                label: `Location of the VPS - [${labelPrefix}vps_location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_platform`,
                label: `Virtualization platform - [${labelPrefix}vps_platform]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_diskused`,
                label: `Amount of disk space used - [${labelPrefix}vps_diskused]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_diskmax`,
                label: `Maximum disk space available - [${labelPrefix}vps_diskmax]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vps_id': bundle.inputData?.[`${keyPrefix}vps_id`],
            'vps_custid': bundle.inputData?.[`${keyPrefix}vps_custid`],
            'vps_server': bundle.inputData?.[`${keyPrefix}vps_server`],
            'vps_ip': bundle.inputData?.[`${keyPrefix}vps_ip`],
            'vps_ipv6': bundle.inputData?.[`${keyPrefix}vps_ipv6`],
            'vps_vzid': bundle.inputData?.[`${keyPrefix}vps_vzid`],
            'vps_currency': bundle.inputData?.[`${keyPrefix}vps_currency`],
            'vps_type': bundle.inputData?.[`${keyPrefix}vps_type`],
            'vps_order_date': bundle.inputData?.[`${keyPrefix}vps_order_date`],
            'vps_status': bundle.inputData?.[`${keyPrefix}vps_status`],
            'vps_invoice': bundle.inputData?.[`${keyPrefix}vps_invoice`],
            'vps_coupon': bundle.inputData?.[`${keyPrefix}vps_coupon`],
            'vps_extra': bundle.inputData?.[`${keyPrefix}vps_extra`],
            'vps_hostname': bundle.inputData?.[`${keyPrefix}vps_hostname`],
            'vps_server_status': bundle.inputData?.[`${keyPrefix}vps_server_status`],
            'vps_comment': bundle.inputData?.[`${keyPrefix}vps_comment`],
            'vps_slices': bundle.inputData?.[`${keyPrefix}vps_slices`],
            'vps_vnc': bundle.inputData?.[`${keyPrefix}vps_vnc`],
            'vps_vnc_port': bundle.inputData?.[`${keyPrefix}vps_vnc_port`],
            'vps_rootpass': bundle.inputData?.[`${keyPrefix}vps_rootpass`],
            'vps_mac': bundle.inputData?.[`${keyPrefix}vps_mac`],
            'vps_os': bundle.inputData?.[`${keyPrefix}vps_os`],
            'vps_version': bundle.inputData?.[`${keyPrefix}vps_version`],
            'vps_location': bundle.inputData?.[`${keyPrefix}vps_location`],
            'vps_platform': bundle.inputData?.[`${keyPrefix}vps_platform`],
            'vps_diskused': bundle.inputData?.[`${keyPrefix}vps_diskused`],
            'vps_diskmax': bundle.inputData?.[`${keyPrefix}vps_diskmax`],
        }
    },
}
