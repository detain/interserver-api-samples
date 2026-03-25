const utils = require('../utils/utils');
const ServerOrderMemory = require('../models/ServerOrderMemory');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderMemory.fields(`${keyPrefix}65`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '65': utils.removeIfEmpty(ServerOrderMemory.mapping(bundle, `${keyPrefix}65`)),
        }
    },
}
