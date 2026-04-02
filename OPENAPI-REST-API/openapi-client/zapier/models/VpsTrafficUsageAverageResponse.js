const utils = require('../utils/utils');
const VpsTrafficUsageAverageSectionResponse = require('../models/VpsTrafficUsageAverageSectionResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsTrafficUsageAverageSectionResponse.fields(`${keyPrefix}in`, isInput),
            ...VpsTrafficUsageAverageSectionResponse.fields(`${keyPrefix}out`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'in': utils.removeIfEmpty(VpsTrafficUsageAverageSectionResponse.mapping(bundle, `${keyPrefix}in`)),
            'out': utils.removeIfEmpty(VpsTrafficUsageAverageSectionResponse.mapping(bundle, `${keyPrefix}out`)),
        }
    },
}
