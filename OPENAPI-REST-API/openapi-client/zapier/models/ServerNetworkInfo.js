const utils = require('../utils/utils');
const ServerNetworkInfo_assets = require('../models/ServerNetworkInfo_assets');
const ServerNetworkInfo_switchports = require('../models/ServerNetworkInfo_switchports');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}vlans`,
                label: `List of VLANs. - [${labelPrefix}vlans]`,
                required: true,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vlans6`,
                label: `List of IPv6 VLANs. - [${labelPrefix}vlans6]`,
                required: true,
                list: true,
                type: 'string',
            },
            ...ServerNetworkInfo_assets.fields(`${keyPrefix}assets`, isInput),
            ...ServerNetworkInfo_switchports.fields(`${keyPrefix}switchports`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'vlans': bundle.inputData?.[`${keyPrefix}vlans`],
            'vlans6': bundle.inputData?.[`${keyPrefix}vlans6`],
            'assets': utils.removeIfEmpty(ServerNetworkInfo_assets.mapping(bundle, `${keyPrefix}assets`)),
            'switchports': utils.removeIfEmpty(ServerNetworkInfo_switchports.mapping(bundle, `${keyPrefix}switchports`)),
        }
    },
}
