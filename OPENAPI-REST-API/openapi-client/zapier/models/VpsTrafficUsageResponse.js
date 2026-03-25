const utils = require('../utils/utils');
const VpsTrafficTotalsSectionResponse = require('../models/VpsTrafficTotalsSectionResponse');
const VpsTrafficUsageAverageResponse = require('../models/VpsTrafficUsageAverageResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}current`, isInput),
            ...VpsTrafficTotalsSectionResponse.fields(`${keyPrefix}peak`, isInput),
            ...VpsTrafficUsageAverageResponse.fields(`${keyPrefix}average`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'current': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}current`)),
            'peak': utils.removeIfEmpty(VpsTrafficTotalsSectionResponse.mapping(bundle, `${keyPrefix}peak`)),
            'average': utils.removeIfEmpty(VpsTrafficUsageAverageResponse.mapping(bundle, `${keyPrefix}average`)),
        }
    },
}
