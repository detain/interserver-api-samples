const utils = require('../utils/utils');
const VpsTrafficTotalsSectionResponse = require('../models/VpsTrafficTotalsSectionResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}day`, isInput),
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}month`, isInput),
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}year`, isInput),
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}all`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'day': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}day`)),
            'month': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}month`)),
            'year': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}year`)),
            'all': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}all`)),
        }
    },
}
