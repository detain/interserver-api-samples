const utils = require('../utils/utils');
const QuickserverOrderVersionCentosstream8 = require('../models/QuickserverOrderVersionCentosstream8');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverOrderVersionCentosstream8.fields(`${keyPrefix}centosstream-8`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'centosstream-8': utils.removeIfEmpty(QuickserverOrderVersionCentosstream8.mapping(bundle, `${keyPrefix}centosstream-8`)),
        }
    },
}
