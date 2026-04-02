const utils = require('../utils/utils');
const VpsOrder_serviceTypes_32 = require('../models/VpsOrder_serviceTypes_32');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsOrder_serviceTypes_32.fields(`${keyPrefix}32`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '32': utils.removeIfEmpty(VpsOrder_serviceTypes_32.mapping(bundle, `${keyPrefix}32`)),
        }
    },
}
