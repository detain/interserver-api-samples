const utils = require('../utils/utils');
const ServerOrderFieldLabel = require('../models/ServerOrderFieldLabel');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderFieldLabel.fields(`${keyPrefix}bandwidth`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}ips`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}os`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}cp`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}raid`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}memory`, isInput),
            ...ServerOrderFieldLabel.fields(`${keyPrefix}hd`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'bandwidth': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}bandwidth`)),
            'ips': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}ips`)),
            'os': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}os`)),
            'cp': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}cp`)),
            'raid': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}raid`)),
            'memory': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}memory`)),
            'hd': utils.removeIfEmpty(ServerOrderFieldLabel.mapping(bundle, `${keyPrefix}hd`)),
        }
    },
}
