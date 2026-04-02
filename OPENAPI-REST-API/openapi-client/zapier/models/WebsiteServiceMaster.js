const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}website_id`,
                label: `Website ID for the service master - [${labelPrefix}website_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_name`,
                label: `Website name for the service master - [${labelPrefix}website_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_ip`,
                label: `IP address for the service master - [${labelPrefix}website_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_type`,
                label: `Website type for the service master - [${labelPrefix}website_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_available`,
                label: `Availability status for the service master - [${labelPrefix}website_available]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_hdsize`,
                label: `Hard drive size for the service master - [${labelPrefix}website_hdsize]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_hdfree`,
                label: `Free hard drive space for the service master - [${labelPrefix}website_hdfree]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_load`,
                label: `Load for the service master - [${labelPrefix}website_load]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_last_update`,
                label: `Last update date for the service master - [${labelPrefix}website_last_update]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_max_sites`,
                label: `Maximum number of sites for the service master - [${labelPrefix}website_max_sites]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_order`,
                label: `Order number for the service master - [${labelPrefix}website_order]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_partitions`,
                label: `Partitions for the service master - [${labelPrefix}website_partitions]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_dns1`,
                label: `DNS server 1 for the service master - [${labelPrefix}website_dns1]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_dns2`,
                label: `DNS server 2 for the service master - [${labelPrefix}website_dns2]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'website_id': bundle.inputData?.[`${keyPrefix}website_id`],
            'website_name': bundle.inputData?.[`${keyPrefix}website_name`],
            'website_ip': bundle.inputData?.[`${keyPrefix}website_ip`],
            'website_type': bundle.inputData?.[`${keyPrefix}website_type`],
            'website_available': bundle.inputData?.[`${keyPrefix}website_available`],
            'website_hdsize': bundle.inputData?.[`${keyPrefix}website_hdsize`],
            'website_hdfree': bundle.inputData?.[`${keyPrefix}website_hdfree`],
            'website_load': bundle.inputData?.[`${keyPrefix}website_load`],
            'website_last_update': bundle.inputData?.[`${keyPrefix}website_last_update`],
            'website_max_sites': bundle.inputData?.[`${keyPrefix}website_max_sites`],
            'website_order': bundle.inputData?.[`${keyPrefix}website_order`],
            'website_partitions': bundle.inputData?.[`${keyPrefix}website_partitions`],
            'website_dns1': bundle.inputData?.[`${keyPrefix}website_dns1`],
            'website_dns2': bundle.inputData?.[`${keyPrefix}website_dns2`],
        }
    },
}
