const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}website_id`,
                label: `The id of the website. - [${labelPrefix}website_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_hostname`,
                label: `The hostname of the website. - [${labelPrefix}website_hostname]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}repeat_invoices_cost`,
                label: `The repeat invoices cost of the website. - [${labelPrefix}repeat_invoices_cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_status`,
                label: `The status of the website. - [${labelPrefix}website_status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The services name of the website. - [${labelPrefix}services_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}website_comment`,
                label: `The comment of the website. - [${labelPrefix}website_comment]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'website_id': bundle.inputData?.[`${keyPrefix}website_id`],
            'website_hostname': bundle.inputData?.[`${keyPrefix}website_hostname`],
            'repeat_invoices_cost': bundle.inputData?.[`${keyPrefix}repeat_invoices_cost`],
            'website_status': bundle.inputData?.[`${keyPrefix}website_status`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
            'website_comment': bundle.inputData?.[`${keyPrefix}website_comment`],
        }
    },
}
