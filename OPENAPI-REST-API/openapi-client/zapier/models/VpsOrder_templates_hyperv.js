const utils = require('../utils/utils');
const VpsOrder_templates_hyperv_windows = require('../models/VpsOrder_templates_hyperv_windows');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsOrder_templates_hyperv_windows.fields(`${keyPrefix}windows`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'windows': utils.removeIfEmpty(VpsOrder_templates_hyperv_windows.mapping(bundle, `${keyPrefix}windows`)),
        }
    },
}
