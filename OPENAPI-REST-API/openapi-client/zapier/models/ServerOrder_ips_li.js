const utils = require('../utils/utils');
const ServerOrderIP = require('../models/ServerOrderIP');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderIP.fields(`${keyPrefix}9`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '9': utils.removeIfEmpty(ServerOrderIP.mapping(bundle, `${keyPrefix}9`)),
        }
    },
}
