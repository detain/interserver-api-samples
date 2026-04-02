const utils = require('../utils/utils');
const ServerOrderCPU = require('../models/ServerOrderCPU');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderCPU.fields(`${keyPrefix}254`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '254': utils.removeIfEmpty(ServerOrderCPU.mapping(bundle, `${keyPrefix}254`)),
        }
    },
}
