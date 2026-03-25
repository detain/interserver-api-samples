const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}license_id`,
                label: `The id of the license. - [${labelPrefix}license_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_hostname`,
                label: `The hostname of the license. - [${labelPrefix}license_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_ip`,
                label: `The ip of the license. - [${labelPrefix}license_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The services name of the license. - [${labelPrefix}services_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `The cost of the license. - [${labelPrefix}cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}license_status`,
                label: `The status of the license. - [${labelPrefix}license_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoices_paid`,
                label: `The invoices paid of the license. - [${labelPrefix}invoices_paid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoices_date`,
                label: `The invoices date of the license. - [${labelPrefix}invoices_date]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'license_id': bundle.inputData?.[`${keyPrefix}license_id`],
            'license_hostname': bundle.inputData?.[`${keyPrefix}license_hostname`],
            'license_ip': bundle.inputData?.[`${keyPrefix}license_ip`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'license_status': bundle.inputData?.[`${keyPrefix}license_status`],
            'invoices_paid': bundle.inputData?.[`${keyPrefix}invoices_paid`],
            'invoices_date': bundle.inputData?.[`${keyPrefix}invoices_date`],
        }
    },
}
