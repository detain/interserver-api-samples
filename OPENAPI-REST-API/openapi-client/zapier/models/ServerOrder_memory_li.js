const utils = require('../utils/utils');
const ServerOrder_memory_li_254 = require('../models/ServerOrder_memory_li_254');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrder_memory_li_254.fields(`${keyPrefix}254`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '254': utils.removeIfEmpty(ServerOrder_memory_li_254.mapping(bundle, `${keyPrefix}254`)),
        }
    },
}
