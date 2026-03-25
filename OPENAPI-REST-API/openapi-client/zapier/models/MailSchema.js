const utils = require('../utils/utils');
const MailBillingDetails = require('../models/MailBillingDetails');
const MailClientLink = require('../models/MailClientLink');
const MailSchema_extraInfoTables = require('../models/MailSchema_extraInfoTables');
const MailServiceInfo = require('../models/MailServiceInfo');
const MailServiceType = require('../models/MailServiceType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...MailServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: MailClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...MailBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `The customer's currency. - [${labelPrefix}custCurrency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `The currency symbol for the customer. - [${labelPrefix}custCurrencySymbol]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}package`,
                label: `The package of the mail service. - [${labelPrefix}package]`,
                required: true,
                type: 'string',
            },
            ...MailSchema_extraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            ...MailServiceType.fields(`${keyPrefix}serviceType`, isInput),
            {
                key: `${keyPrefix}usage_count`,
                label: `The usage count of the mail service. - [${labelPrefix}usage_count]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceExtra`,
                label: `Extra information for the mail service. - [${labelPrefix}serviceExtra]`,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(MailServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, MailClientLink),
            'billingDetails': utils.removeIfEmpty(MailBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'extraInfoTables': utils.removeIfEmpty(MailSchema_extraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'serviceType': utils.removeIfEmpty(MailServiceType.mapping(bundle, `${keyPrefix}serviceType`)),
            'usage_count': bundle.inputData?.[`${keyPrefix}usage_count`],
            'serviceExtra': bundle.inputData?.[`${keyPrefix}serviceExtra`],
        }
    },
}
