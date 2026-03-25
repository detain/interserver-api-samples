const utils = require('../utils/utils');
const DomainOrderResponse = require('../models/DomainOrderResponse');
const DomainProvProcessPending = require('../models/DomainProvProcessPending');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...DomainOrderResponse.fields(`${keyPrefix}order`, isInput),
            {
                key: `${keyPrefix}order_id`,
                label: `[${labelPrefix}order_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domain_id`,
                label: `[${labelPrefix}domain_id]`,
                type: 'string',
            },
            ...DomainProvProcessPending.fields(`${keyPrefix}provProcessPending`, isInput),
            {
                key: `${keyPrefix}email`,
                label: `[${labelPrefix}email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}firstname`,
                label: `[${labelPrefix}firstname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}lastname`,
                label: `[${labelPrefix}lastname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}company`,
                label: `[${labelPrefix}company]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address`,
                label: `[${labelPrefix}address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address2`,
                label: `[${labelPrefix}address2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address3`,
                label: `[${labelPrefix}address3]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}city`,
                label: `[${labelPrefix}city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}state`,
                label: `[${labelPrefix}state]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}zip`,
                label: `[${labelPrefix}zip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}phone`,
                label: `[${labelPrefix}phone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}fax`,
                label: `[${labelPrefix}fax]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'order': utils.removeIfEmpty(DomainOrderResponse.mapping(bundle, `${keyPrefix}order`)),
            'order_id': bundle.inputData?.[`${keyPrefix}order_id`],
            'domain_id': bundle.inputData?.[`${keyPrefix}domain_id`],
            'provProcessPending': utils.removeIfEmpty(DomainProvProcessPending.mapping(bundle, `${keyPrefix}provProcessPending`)),
            'email': bundle.inputData?.[`${keyPrefix}email`],
            'firstname': bundle.inputData?.[`${keyPrefix}firstname`],
            'lastname': bundle.inputData?.[`${keyPrefix}lastname`],
            'company': bundle.inputData?.[`${keyPrefix}company`],
            'address': bundle.inputData?.[`${keyPrefix}address`],
            'address2': bundle.inputData?.[`${keyPrefix}address2`],
            'address3': bundle.inputData?.[`${keyPrefix}address3`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'zip': bundle.inputData?.[`${keyPrefix}zip`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'phone': bundle.inputData?.[`${keyPrefix}phone`],
            'fax': bundle.inputData?.[`${keyPrefix}fax`],
        }
    },
}
