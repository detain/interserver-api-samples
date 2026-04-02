const utils = require('../utils/utils');
const AccountInfoCountryCurrencies = require('../models/AccountInfoCountryCurrencies');
const AccountInfoData = require('../models/AccountInfoData');
const AccountInfoLimits = require('../models/AccountInfoLimits');
const AccountInfoOauthConfig = require('../models/AccountInfoOauthConfig');
const AccountInfo_oauthproviders = require('../models/AccountInfo_oauthproviders');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}custid`,
                label: `[${labelPrefix}custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ima`,
                label: `[${labelPrefix}ima]`,
                type: 'string',
            },
            ...AccountInfoData.fields(`${keyPrefix}data`, isInput),
            {
                key: `${keyPrefix}ip`,
                label: `[${labelPrefix}ip]`,
                type: 'string',
            },
            ...AccountInfo_oauthproviders.fields(`${keyPrefix}oauthproviders`, isInput),
            ...AccountInfoOauthConfig.fields(`${keyPrefix}oauthconfig`, isInput),
            {
                key: `${keyPrefix}oauthadapters`,
                label: `[${labelPrefix}oauthadapters]`,
                list: true,
                type: 'string',
            },
            ...AccountInfoLimits.fields(`${keyPrefix}limits`, isInput),
            {
                key: `${keyPrefix}language`,
                label: `[${labelPrefix}language]`,
                type: 'string',
            },
            ...AccountInfoCountryCurrencies.fields(`${keyPrefix}countryCurrencies`, isInput),
            {
                key: `${keyPrefix}enableLocales`,
                label: `[${labelPrefix}enableLocales]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}enableCurrencies`,
                label: `[${labelPrefix}enableCurrencies]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}gravatar`,
                label: `[${labelPrefix}gravatar]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'custid': bundle.inputData?.[`${keyPrefix}custid`],
            'ima': bundle.inputData?.[`${keyPrefix}ima`],
            'data': utils.removeIfEmpty(AccountInfoData.mapping(bundle, `${keyPrefix}data`)),
            'ip': bundle.inputData?.[`${keyPrefix}ip`],
            'oauthproviders': utils.removeIfEmpty(AccountInfo_oauthproviders.mapping(bundle, `${keyPrefix}oauthproviders`)),
            'oauthconfig': utils.removeIfEmpty(AccountInfoOauthConfig.mapping(bundle, `${keyPrefix}oauthconfig`)),
            'oauthadapters': bundle.inputData?.[`${keyPrefix}oauthadapters`],
            'limits': utils.removeIfEmpty(AccountInfoLimits.mapping(bundle, `${keyPrefix}limits`)),
            'language': bundle.inputData?.[`${keyPrefix}language`],
            'countryCurrencies': utils.removeIfEmpty(AccountInfoCountryCurrencies.mapping(bundle, `${keyPrefix}countryCurrencies`)),
            'enableLocales': bundle.inputData?.[`${keyPrefix}enableLocales`],
            'enableCurrencies': bundle.inputData?.[`${keyPrefix}enableCurrencies`],
            'gravatar': bundle.inputData?.[`${keyPrefix}gravatar`],
        }
    },
}
