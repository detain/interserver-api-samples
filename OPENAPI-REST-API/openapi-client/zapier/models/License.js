const utils = require('../utils/utils');
const LicenseBillingDetails = require('../models/LicenseBillingDetails');
const LicenseClientLink = require('../models/LicenseClientLink');
const LicenseServiceInfo = require('../models/LicenseServiceInfo');
const LicenseServiceType = require('../models/LicenseServiceType');
const License_extraInfoTables = require('../models/License_extraInfoTables');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...LicenseServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: LicenseClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...LicenseBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `Customer's currency - [${labelPrefix}custCurrency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `Currency symbol for customer - [${labelPrefix}custCurrencySymbol]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}package`,
                label: `Package name - [${labelPrefix}package]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceExtra`,
                label: `Extra service information - [${labelPrefix}serviceExtra]`,
                required: true,
                list: true,
                type: 'string',
            },
            ...License_extraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            {
                key: `${keyPrefix}service_overview_extra`,
                label: `Extra service overview information - [${labelPrefix}service_overview_extra]`,
                required: true,
                type: 'string',
            },
            ...LicenseServiceType.fields(`${keyPrefix}serviceType`, isInput),
            {
                key: `${keyPrefix}license_key`,
                label: `License key - [${labelPrefix}license_key]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(LicenseServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, LicenseClientLink),
            'billingDetails': utils.removeIfEmpty(LicenseBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'serviceExtra': bundle.inputData?.[`${keyPrefix}serviceExtra`],
            'extraInfoTables': utils.removeIfEmpty(License_extraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'service_overview_extra': bundle.inputData?.[`${keyPrefix}service_overview_extra`],
            'serviceType': utils.removeIfEmpty(LicenseServiceType.mapping(bundle, `${keyPrefix}serviceType`)),
            'license_key': bundle.inputData?.[`${keyPrefix}license_key`],
        }
    },
}
