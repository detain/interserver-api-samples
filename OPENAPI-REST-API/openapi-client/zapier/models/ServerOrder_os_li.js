const utils = require('../utils/utils');
const ServerOrderOS = require('../models/ServerOrderOS');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderOS.fields(`${keyPrefix}51`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '51': utils.removeIfEmpty(ServerOrderOS.mapping(bundle, `${keyPrefix}51`)),
        }
    },
}
