const utils = require('../utils/utils');
const WebsiteBillingDetails = require('../models/WebsiteBillingDetails');
const WebsiteClientLink = require('../models/WebsiteClientLink');
const WebsiteExtraInfoTables = require('../models/WebsiteExtraInfoTables');
const WebsiteServiceInfo = require('../models/WebsiteServiceInfo');
const WebsiteServiceMaster = require('../models/WebsiteServiceMaster');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...WebsiteServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: WebsiteClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...WebsiteBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `Customer's currency - [${labelPrefix}custCurrency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `Customer currency symbol - [${labelPrefix}custCurrencySymbol]`,
                type: 'string',
            },
            ...WebsiteServiceMaster.fields(`${keyPrefix}serviceMaster`, isInput),
            {
                key: `${keyPrefix}package`,
                label: `Package information - [${labelPrefix}package]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceExtra`,
                label: `[${labelPrefix}serviceExtra]`,
                list: true,
                type: 'object',
            },
            ...WebsiteExtraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(WebsiteServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, WebsiteClientLink),
            'billingDetails': utils.removeIfEmpty(WebsiteBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'serviceMaster': utils.removeIfEmpty(WebsiteServiceMaster.mapping(bundle, `${keyPrefix}serviceMaster`)),
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'serviceExtra': bundle.inputData?.[`${keyPrefix}serviceExtra`],
            'extraInfoTables': utils.removeIfEmpty(WebsiteExtraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
        }
    },
}
