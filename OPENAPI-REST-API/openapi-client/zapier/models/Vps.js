const utils = require('../utils/utils');
const AnyType = require('../models/AnyType');
const VpsBillingDetails = require('../models/VpsBillingDetails');
const VpsCPData = require('../models/VpsCPData');
const VpsClientLink = require('../models/VpsClientLink');
const VpsDAData = require('../models/VpsDAData');
const VpsExtraInfoTables = require('../models/VpsExtraInfoTables');
const VpsPlesk12Data = require('../models/VpsPlesk12Data');
const VpsServiceAddons = require('../models/VpsServiceAddons');
const VpsServiceExtra = require('../models/VpsServiceExtra');
const VpsServiceInfo = require('../models/VpsServiceInfo');
const VpsServiceMaster = require('../models/VpsServiceMaster');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsServiceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: VpsClientLink.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...VpsBillingDetails.fields(`${keyPrefix}billingDetails`, isInput),
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
            ...VpsServiceMaster.fields(`${keyPrefix}serviceMaster`, isInput),
            {
                key: `${keyPrefix}package`,
                label: `[${labelPrefix}package]`,
                required: true,
                type: 'string',
            },
            ...VpsServiceExtra.fields(`${keyPrefix}serviceExtra`, isInput),
            ...VpsExtraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            {
                key: `${keyPrefix}module`,
                label: `[${labelPrefix}module]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}token`,
                label: `[${labelPrefix}token]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}da_link`,
                label: `[${labelPrefix}da_link]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sr_link`,
                label: `[${labelPrefix}sr_link]`,
                required: true,
                type: 'integer',
            },
            ...VpsCPData.fields(`${keyPrefix}cp_data`, isInput),
            ...VpsDAData.fields(`${keyPrefix}da_data`, isInput),
            ...VpsPlesk12Data.fields(`${keyPrefix}plesk12_data`, isInput),
            ...VpsServiceAddons.fields(`${keyPrefix}serviceAddons`, isInput),
            {
                key: `${keyPrefix}os_template`,
                label: `[${labelPrefix}os_template]`,
                type: 'string',
            },
            ....fields(`${keyPrefix}cpu_graph_data`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(VpsServiceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, VpsClientLink),
            'billingDetails': utils.removeIfEmpty(VpsBillingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'serviceMaster': utils.removeIfEmpty(VpsServiceMaster.mapping(bundle, `${keyPrefix}serviceMaster`)),
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'serviceExtra': utils.removeIfEmpty(VpsServiceExtra.mapping(bundle, `${keyPrefix}serviceExtra`)),
            'extraInfoTables': utils.removeIfEmpty(VpsExtraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'module': bundle.inputData?.[`${keyPrefix}module`],
            'token': bundle.inputData?.[`${keyPrefix}token`],
            'da_link': bundle.inputData?.[`${keyPrefix}da_link`],
            'sr_link': bundle.inputData?.[`${keyPrefix}sr_link`],
            'cp_data': utils.removeIfEmpty(VpsCPData.mapping(bundle, `${keyPrefix}cp_data`)),
            'da_data': utils.removeIfEmpty(VpsDAData.mapping(bundle, `${keyPrefix}da_data`)),
            'plesk12_data': utils.removeIfEmpty(VpsPlesk12Data.mapping(bundle, `${keyPrefix}plesk12_data`)),
            'serviceAddons': utils.removeIfEmpty(VpsServiceAddons.mapping(bundle, `${keyPrefix}serviceAddons`)),
            'os_template': bundle.inputData?.[`${keyPrefix}os_template`],
            'cpu_graph_data': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}cpu_graph_data`)),
        }
    },
}
