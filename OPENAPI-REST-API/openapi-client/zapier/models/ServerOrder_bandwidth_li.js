const utils = require('../utils/utils');
const ServerOrderBandwidth = require('../models/ServerOrderBandwidth');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderBandwidth.fields(`${keyPrefix}15`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '15': utils.removeIfEmpty(ServerOrderBandwidth.mapping(bundle, `${keyPrefix}15`)),
        }
    },
}
