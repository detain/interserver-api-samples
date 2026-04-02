const utils = require('../utils/utils');
const ServerAssets = require('../models/ServerAssets');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerAssets.fields(`${keyPrefix}assets`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'assets': utils.removeIfEmpty(ServerAssets.mapping(bundle, `${keyPrefix}assets`)),
        }
    },
}
