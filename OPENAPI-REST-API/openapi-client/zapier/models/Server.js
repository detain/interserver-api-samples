const utils = require('../utils/utils');
const ServerBillingDetails = require('../models/ServerBillingDetails');
const ServerClientLink = require('../models/ServerClientLink');
const ServerExtraInfoTables = require('../models/ServerExtraInfoTables');
const ServerNetworkInfo = require('../models/ServerNetworkInfo');
const ServerServiceInfo = require('../models/ServerServiceInfo');
const Server_locations = require('../models/Server_locations');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ipmiAuth`,
                label: `[${labelPrefix}ipmiAuth]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: ServerClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...ServerBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `[${labelPrefix}custCurrency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `[${labelPrefix}custCurrencySymbol]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}package`,
                label: `[${labelPrefix}package]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceExtra`,
                label: `[${labelPrefix}serviceExtra]`,
                required: true,
                list: true,
                type: 'string',
            },
            ...Server_locations.fields(`${keyPrefix}locations`, isInput),
            ...ServerNetworkInfo.fields(`${keyPrefix}networkInfo`, isInput),
            ...ServerExtraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            ...ServerServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ipmiAuth': bundle.inputData?.[`${keyPrefix}ipmiAuth`],
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, ServerClientLink),
            'billingDetails': utils.removeIfEmpty(ServerBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'serviceExtra': bundle.inputData?.[`${keyPrefix}serviceExtra`],
            'locations': utils.removeIfEmpty(Server_locations.mapping(bundle, `${keyPrefix}locations`)),
            'networkInfo': utils.removeIfEmpty(ServerNetworkInfo.mapping(bundle, `${keyPrefix}networkInfo`)),
            'extraInfoTables': utils.removeIfEmpty(ServerExtraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'serviceInfo': utils.removeIfEmpty(ServerServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
        }
    },
}
