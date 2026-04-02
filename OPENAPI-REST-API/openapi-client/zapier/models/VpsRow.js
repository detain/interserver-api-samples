const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vps_id`,
                label: `The id of the vps. - [${labelPrefix}vps_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_name`,
                label: `The name of the vps. - [${labelPrefix}vps_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}repeat_invoices_cost`,
                label: `The repeat invoices cost of the vps. - [${labelPrefix}repeat_invoices_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_hostname`,
                label: `The hostname of the vps. - [${labelPrefix}vps_hostname]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_ip`,
                label: `The ip of the vps. - [${labelPrefix}vps_ip]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_status`,
                label: `The status of the vps. - [${labelPrefix}vps_status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The services name of the vps. - [${labelPrefix}services_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vps_comment`,
                label: `The comment of the vps. - [${labelPrefix}vps_comment]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vps_id': bundle.inputData?.[`${keyPrefix}vps_id`],
            'vps_name': bundle.inputData?.[`${keyPrefix}vps_name`],
            'repeat_invoices_cost': bundle.inputData?.[`${keyPrefix}repeat_invoices_cost`],
            'vps_hostname': bundle.inputData?.[`${keyPrefix}vps_hostname`],
            'vps_ip': bundle.inputData?.[`${keyPrefix}vps_ip`],
            'vps_status': bundle.inputData?.[`${keyPrefix}vps_status`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
            'vps_comment': bundle.inputData?.[`${keyPrefix}vps_comment`],
        }
    },
}
