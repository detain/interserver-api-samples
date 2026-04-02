const utils = require('../utils/utils');
const BackupBillingDetails = require('../models/BackupBillingDetails');
const BackupClientLink = require('../models/BackupClientLink');
const BackupExtraInfoTables = require('../models/BackupExtraInfoTables');
const BackupServiceInfo = require('../models/BackupServiceInfo');
const BackupServiceMaster = require('../models/BackupServiceMaster');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...BackupServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: BackupClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...BackupBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `Customer's currency. - [${labelPrefix}custCurrency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `Customer's currency symbol. - [${labelPrefix}custCurrencySymbol]`,
                type: 'string',
            },
            ...BackupServiceMaster.fields(`${keyPrefix}serviceMaster`, isInput),
            {
                key: `${keyPrefix}package`,
                label: `Package information. - [${labelPrefix}package]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceExtra`,
                label: `[${labelPrefix}serviceExtra]`,
                type: 'string',
            },
            ...BackupExtraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(BackupServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, BackupClientLink),
            'billingDetails': utils.removeIfEmpty(BackupBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'serviceMaster': utils.removeIfEmpty(BackupServiceMaster.mapping(bundle, `${keyPrefix}serviceMaster`)),
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'serviceExtra': bundle.inputData?.[`${keyPrefix}serviceExtra`],
            'extraInfoTables': utils.removeIfEmpty(BackupExtraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
        }
    },
}
