const utils = require('../utils/utils');
const VpsDALicense = require('../models/VpsDALicense');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsDALicense.fields(`${keyPrefix}free`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'free': utils.removeIfEmpty(VpsDALicense.mapping(bundle, `${keyPrefix}free`)),
        }
    },
}
