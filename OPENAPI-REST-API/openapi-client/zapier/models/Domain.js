const utils = require('../utils/utils');
const BackupExtraInfoTables = require('../models/BackupExtraInfoTables');
const DomainAllInfo = require('../models/DomainAllInfo');
const DomainBillingDetails = require('../models/DomainBillingDetails');
const DomainBillingExtra = require('../models/DomainBillingExtra');
const DomainClientLink = require('../models/DomainClientLink');
const DomainContactDetails = require('../models/DomainContactDetails');
const DomainServiceInfo = require('../models/DomainServiceInfo');
const DomainServiceType = require('../models/DomainServiceType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...DomainServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            ...DomainServiceType.fields(`${keyPrefix}serviceTypes`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: DomainClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...DomainBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `[${labelPrefix}custCurrency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `[${labelPrefix}custCurrencySymbol]`,
                type: 'string',
            },
            ...DomainBillingExtra.fields(`${keyPrefix}serviceExtra`, isInput),
            ...BackupExtraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            ...DomainServiceType.fields(`${keyPrefix}serviceType`, isInput),
            ...DomainContactDetails.fields(`${keyPrefix}contact_details`, isInput),
            {
                key: `${keyPrefix}pwarning`,
                label: `[${labelPrefix}pwarning]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}transfer_info`,
                label: `[${labelPrefix}transfer_info]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}errors`,
                label: `[${labelPrefix}errors]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}domain_logs`,
                label: `[${labelPrefix}domain_logs]`,
                list: true,
                type: 'string',
            },
            ...DomainAllInfo.fields(`${keyPrefix}allInfo`, isInput),
            {
                key: `${keyPrefix}registrarStatus`,
                label: `[${labelPrefix}registrarStatus]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}locked`,
                label: `[${labelPrefix}locked]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}whoisPrivacy`,
                label: `[${labelPrefix}whoisPrivacy]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}autoRenew`,
                label: `[${labelPrefix}autoRenew]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(DomainServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'serviceTypes': utils.removeIfEmpty(DomainServiceType.mapping(bundle, `${keyPrefix}serviceTypes`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, DomainClientLink),
            'billingDetails': utils.removeIfEmpty(DomainBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'serviceExtra': utils.removeIfEmpty(DomainBillingExtra.mapping(bundle, `${keyPrefix}serviceExtra`)),
            'extraInfoTables': utils.removeIfEmpty(BackupExtraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'serviceType': utils.removeIfEmpty(DomainServiceType.mapping(bundle, `${keyPrefix}serviceType`)),
            'contact_details': utils.removeIfEmpty(DomainContactDetails.mapping(bundle, `${keyPrefix}contact_details`)),
            'pwarning': bundle.inputData?.[`${keyPrefix}pwarning`],
            'transfer_info': bundle.inputData?.[`${keyPrefix}transfer_info`],
            'errors': bundle.inputData?.[`${keyPrefix}errors`],
            'domain_logs': bundle.inputData?.[`${keyPrefix}domain_logs`],
            'allInfo': utils.removeIfEmpty(DomainAllInfo.mapping(bundle, `${keyPrefix}allInfo`)),
            'registrarStatus': bundle.inputData?.[`${keyPrefix}registrarStatus`],
            'locked': bundle.inputData?.[`${keyPrefix}locked`],
            'whoisPrivacy': bundle.inputData?.[`${keyPrefix}whoisPrivacy`],
            'autoRenew': bundle.inputData?.[`${keyPrefix}autoRenew`],
        }
    },
}
