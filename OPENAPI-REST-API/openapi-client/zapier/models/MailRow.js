const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}mail_id`,
                label: `The id of the mail. - [${labelPrefix}mail_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}repeat_invoices_cost`,
                label: `The repeat invoices cost of the mail. - [${labelPrefix}repeat_invoices_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_username`,
                label: `The username of the mail. - [${labelPrefix}mail_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mail_status`,
                label: `The status of the mail. - [${labelPrefix}mail_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The services name of the mail. - [${labelPrefix}services_name]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'mail_id': bundle.inputData?.[`${keyPrefix}mail_id`],
            'repeat_invoices_cost': bundle.inputData?.[`${keyPrefix}repeat_invoices_cost`],
            'mail_username': bundle.inputData?.[`${keyPrefix}mail_username`],
            'mail_status': bundle.inputData?.[`${keyPrefix}mail_status`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
        }
    },
}
