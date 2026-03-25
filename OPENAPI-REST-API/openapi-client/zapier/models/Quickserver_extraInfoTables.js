const utils = require('../utils/utils');
const QuickserverAddons = require('../models/QuickserverAddons');
const QuickserverIpInfo = require('../models/QuickserverIpInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverIpInfo.fields(`${keyPrefix}ip_info`, isInput),
            ...QuickserverAddons.fields(`${keyPrefix}addons`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip_info': utils.removeIfEmpty(QuickserverIpInfo.mapping(bundle, `${keyPrefix}ip_info`)),
            'addons': utils.removeIfEmpty(QuickserverAddons.mapping(bundle, `${keyPrefix}addons`)),
        }
    },
}
