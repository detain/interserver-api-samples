const utils = require('../utils/utils');
const QuickserverOrderServerDetails381 = require('../models/QuickserverOrderServerDetails381');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverOrderServerDetails381.fields(`${keyPrefix}381`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '381': utils.removeIfEmpty(QuickserverOrderServerDetails381.mapping(bundle, `${keyPrefix}381`)),
        }
    },
}
