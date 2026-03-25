const utils = require('../utils/utils');
const VpsIPInfo = require('../models/VpsIPInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsIPInfo.fields(`${keyPrefix}ip_info`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip_info': utils.removeIfEmpty(VpsIPInfo.mapping(bundle, `${keyPrefix}ip_info`)),
        }
    },
}
