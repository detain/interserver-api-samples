const utils = require('../utils/utils');
const ServerOrderControlPanel = require('../models/ServerOrderControlPanel');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderControlPanel.fields(`${keyPrefix}9`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '9': utils.removeIfEmpty(ServerOrderControlPanel.mapping(bundle, `${keyPrefix}9`)),
        }
    },
}
