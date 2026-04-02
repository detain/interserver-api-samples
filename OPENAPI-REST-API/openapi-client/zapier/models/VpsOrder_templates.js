const utils = require('../utils/utils');
const VpsOrder_templates_hyperv = require('../models/VpsOrder_templates_hyperv');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsOrder_templates_hyperv.fields(`${keyPrefix}hyperv`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'hyperv': utils.removeIfEmpty(VpsOrder_templates_hyperv.mapping(bundle, `${keyPrefix}hyperv`)),
        }
    },
}
