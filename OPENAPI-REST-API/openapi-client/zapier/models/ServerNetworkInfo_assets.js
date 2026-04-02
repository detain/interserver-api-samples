const utils = require('../utils/utils');
const ServerAsset = require('../models/ServerAsset');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerAsset.fields(`${keyPrefix}3497`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '3497': utils.removeIfEmpty(ServerAsset.mapping(bundle, `${keyPrefix}3497`)),
        }
    },
}
