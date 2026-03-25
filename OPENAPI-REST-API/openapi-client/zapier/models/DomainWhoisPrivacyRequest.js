const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}func`,
                label: `Action to perform (enable or disableCancel). - [${labelPrefix}func]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}csrf_token`,
                label: `CSRF token if the API requires it for the account. - [${labelPrefix}csrf_token]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_firstname`,
                label: `[${labelPrefix}domain_firstname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_lastname`,
                label: `[${labelPrefix}domain_lastname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_email`,
                label: `[${labelPrefix}domain_email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_address`,
                label: `[${labelPrefix}domain_address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_address2`,
                label: `[${labelPrefix}domain_address2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_address3`,
                label: `[${labelPrefix}domain_address3]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_city`,
                label: `[${labelPrefix}domain_city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_state`,
                label: `[${labelPrefix}domain_state]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_zip`,
                label: `[${labelPrefix}domain_zip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_country`,
                label: `[${labelPrefix}domain_country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_phone`,
                label: `[${labelPrefix}domain_phone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_fax`,
                label: `[${labelPrefix}domain_fax]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_company`,
                label: `[${labelPrefix}domain_company]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_extra`,
                label: `[${labelPrefix}domain_extra]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'func': bundle.inputData?.[`${keyPrefix}func`],
            'csrf_token': bundle.inputData?.[`${keyPrefix}csrf_token`],
            'domain_firstname': bundle.inputData?.[`${keyPrefix}domain_firstname`],
            'domain_lastname': bundle.inputData?.[`${keyPrefix}domain_lastname`],
            'domain_email': bundle.inputData?.[`${keyPrefix}domain_email`],
            'domain_address': bundle.inputData?.[`${keyPrefix}domain_address`],
            'domain_address2': bundle.inputData?.[`${keyPrefix}domain_address2`],
            'domain_address3': bundle.inputData?.[`${keyPrefix}domain_address3`],
            'domain_city': bundle.inputData?.[`${keyPrefix}domain_city`],
            'domain_state': bundle.inputData?.[`${keyPrefix}domain_state`],
            'domain_zip': bundle.inputData?.[`${keyPrefix}domain_zip`],
            'domain_country': bundle.inputData?.[`${keyPrefix}domain_country`],
            'domain_phone': bundle.inputData?.[`${keyPrefix}domain_phone`],
            'domain_fax': bundle.inputData?.[`${keyPrefix}domain_fax`],
            'domain_company': bundle.inputData?.[`${keyPrefix}domain_company`],
            'domain_extra': bundle.inputData?.[`${keyPrefix}domain_extra`],
        }
    },
}
