const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}has_cpanel`,
                label: `Whether a cPanel license is active on this VPS. - [${labelPrefix}has_cpanel]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}has_directadmin`,
                label: `Whether a DirectAdmin license is active on this VPS. - [${labelPrefix}has_directadmin]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}has_fantastico`,
                label: `Whether a Fantastico license is active on this VPS. - [${labelPrefix}has_fantastico]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}has_softaculous`,
                label: `Whether a Softaculous license is active on this VPS. - [${labelPrefix}has_softaculous]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}has_hdspace`,
                label: `Whether extra disk space has been added to this VPS. - [${labelPrefix}has_hdspace]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}dedicated_ip`,
                label: `Whether a dedicated IP address is assigned to this VPS. - [${labelPrefix}dedicated_ip]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}extra_ips`,
                label: `List of additional IPv4 addresses assigned to this VPS. - [${labelPrefix}extra_ips]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}extra_ips6`,
                label: `List of additional IPv6 addresses assigned to this VPS. - [${labelPrefix}extra_ips6]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}unpaid_ips`,
                label: `List of IP addresses that have unpaid charges. - [${labelPrefix}unpaid_ips]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ips`,
                label: `All IPv4 addresses assigned to this VPS. - [${labelPrefix}ips]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ips6`,
                label: `All IPv6 addresses assigned to this VPS. - [${labelPrefix}ips6]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}cpanel_id`,
                label: `The add-on service ID for the cPanel license. - [${labelPrefix}cpanel_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}cost`,
                label: `Total monthly add-on cost in cents. - [${labelPrefix}cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ids`,
                label: `List of add-on service IDs active on this VPS. - [${labelPrefix}ids]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}rdata`,
                label: `Raw add-on data entries. - [${labelPrefix}rdata]`,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'has_cpanel': bundle.inputData?.[`${keyPrefix}has_cpanel`],
            'has_directadmin': bundle.inputData?.[`${keyPrefix}has_directadmin`],
            'has_fantastico': bundle.inputData?.[`${keyPrefix}has_fantastico`],
            'has_softaculous': bundle.inputData?.[`${keyPrefix}has_softaculous`],
            'has_hdspace': bundle.inputData?.[`${keyPrefix}has_hdspace`],
            'dedicated_ip': bundle.inputData?.[`${keyPrefix}dedicated_ip`],
            'extra_ips': bundle.inputData?.[`${keyPrefix}extra_ips`],
            'extra_ips6': bundle.inputData?.[`${keyPrefix}extra_ips6`],
            'unpaid_ips': bundle.inputData?.[`${keyPrefix}unpaid_ips`],
            'ips': bundle.inputData?.[`${keyPrefix}ips`],
            'ips6': bundle.inputData?.[`${keyPrefix}ips6`],
            'cpanel_id': bundle.inputData?.[`${keyPrefix}cpanel_id`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'ids': bundle.inputData?.[`${keyPrefix}ids`],
            'rdata': bundle.inputData?.[`${keyPrefix}rdata`],
        }
    },
}
