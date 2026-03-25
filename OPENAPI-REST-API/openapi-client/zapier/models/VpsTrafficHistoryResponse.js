const utils = require('../utils/utils');
const VpsTrafficHistorySectionResponse = require('../models/VpsTrafficHistorySectionResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsTrafficHistorySectionResponse.fields(`${keyPrefix}hour`, isInput),
            ...VpsTrafficHistorySectionResponse.fields(`${keyPrefix}day`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'hour': utils.removeIfEmpty(VpsTrafficHistorySectionResponse.mapping(bundle, `${keyPrefix}hour`)),
            'day': utils.removeIfEmpty(VpsTrafficHistorySectionResponse.mapping(bundle, `${keyPrefix}day`)),
        }
    },
}
