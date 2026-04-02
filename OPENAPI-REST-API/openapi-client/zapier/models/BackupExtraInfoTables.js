const utils = require('../utils/utils');
const BackupIPInfo = require('../models/BackupIPInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...BackupIPInfo.fields(`${keyPrefix}ip_info`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ip_info': utils.removeIfEmpty(BackupIPInfo.mapping(bundle, `${keyPrefix}ip_info`)),
        }
    },
}
