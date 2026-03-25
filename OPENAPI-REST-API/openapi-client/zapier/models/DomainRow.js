const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}domain_id`,
                label: `The ID number of the domain in our billing system. - [${labelPrefix}domain_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_hostname`,
                label: `The hostname of the domain. - [${labelPrefix}domain_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_expire_date`,
                label: `The expiration date of the domain. - [${labelPrefix}domain_expire_date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `The cost of the domain. - [${labelPrefix}cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_status`,
                label: `The billing / registration status of the domain. - [${labelPrefix}domain_status]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'domain_id': bundle.inputData?.[`${keyPrefix}domain_id`],
            'domain_hostname': bundle.inputData?.[`${keyPrefix}domain_hostname`],
            'domain_expire_date': bundle.inputData?.[`${keyPrefix}domain_expire_date`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'domain_status': bundle.inputData?.[`${keyPrefix}domain_status`],
        }
    },
}
