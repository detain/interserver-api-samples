const utils = require('../utils/utils');
const VpsOrder_locationStock_1 = require('../models/VpsOrder_locationStock_1');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsOrder_locationStock_1.fields(`${keyPrefix}1`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '1': utils.removeIfEmpty(VpsOrder_locationStock_1.mapping(bundle, `${keyPrefix}1`)),
        }
    },
}
