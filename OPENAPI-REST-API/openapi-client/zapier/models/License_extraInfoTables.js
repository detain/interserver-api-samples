const utils = require('../utils/utils');
const LicenseIpInfo = require('../models/LicenseIpInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...LicenseIpInfo.fields(`${keyPrefix}ip_info`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip_info': utils.removeIfEmpty(LicenseIpInfo.mapping(bundle, `${keyPrefix}ip_info`)),
        }
    },
}
