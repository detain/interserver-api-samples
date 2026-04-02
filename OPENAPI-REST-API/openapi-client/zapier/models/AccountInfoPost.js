const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `Your name. - [${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}address`,
                label: `Your address. - [${labelPrefix}address]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}city`,
                label: `Your city. - [${labelPrefix}city]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}state`,
                label: `Your state. - [${labelPrefix}state]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}zip`,
                label: `Your ZIP code. - [${labelPrefix}zip]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `Your country. - [${labelPrefix}country]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}phone`,
                label: `Your phone number. - [${labelPrefix}phone]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}company`,
                label: `Your company name. - [${labelPrefix}company]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address2`,
                label: `Additional address information. - [${labelPrefix}address2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}locale`,
                label: `Your preferred locale. - [${labelPrefix}locale]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}email_invoices`,
                label: `Your email for invoice notifications. - [${labelPrefix}email_invoices]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}email_abuse`,
                label: `Your email for abuse notifications. - [${labelPrefix}email_abuse]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disable_reset`,
                label: `Set to `true` to disable account resets, or `false` to enable them. - [${labelPrefix}disable_reset]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}disable_reinstall`,
                label: `Set to `true` to disable server reinstalls, or `false` to enable them. - [${labelPrefix}disable_reinstall]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}disable_server_notifications`,
                label: `Set to `true` to disable server notifications, or `false` to enable them. - [${labelPrefix}disable_server_notifications]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}disable_email_notifications`,
                label: `Set to `true` to disable email notifications, or `false` to enable them. - [${labelPrefix}disable_email_notifications]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}gstin`,
                label: `Your GST identification number (if applicable). - [${labelPrefix}gstin]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'address': bundle.inputData?.[`${keyPrefix}address`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'zip': bundle.inputData?.[`${keyPrefix}zip`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'phone': bundle.inputData?.[`${keyPrefix}phone`],
            'company': bundle.inputData?.[`${keyPrefix}company`],
            'address2': bundle.inputData?.[`${keyPrefix}address2`],
            'locale': bundle.inputData?.[`${keyPrefix}locale`],
            'email_invoices': bundle.inputData?.[`${keyPrefix}email_invoices`],
            'email_abuse': bundle.inputData?.[`${keyPrefix}email_abuse`],
            'disable_reset': bundle.inputData?.[`${keyPrefix}disable_reset`],
            'disable_reinstall': bundle.inputData?.[`${keyPrefix}disable_reinstall`],
            'disable_server_notifications': bundle.inputData?.[`${keyPrefix}disable_server_notifications`],
            'disable_email_notifications': bundle.inputData?.[`${keyPrefix}disable_email_notifications`],
            'gstin': bundle.inputData?.[`${keyPrefix}gstin`],
        }
    },
}
