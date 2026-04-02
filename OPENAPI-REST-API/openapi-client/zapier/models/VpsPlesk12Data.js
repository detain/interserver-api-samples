const utils = require('../utils/utils');
const VpsPleskLicense = require('../models/VpsPleskLicense');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...VpsPleskLicense.fields(`${keyPrefix}admin`, isInput),
            ...VpsPleskLicense.fields(`${keyPrefix}pro`, isInput),
            ...VpsPleskLicense.fields(`${keyPrefix}host`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'admin': utils.removeIfEmpty(VpsPleskLicense.mapping(bundle, `${keyPrefix}admin`)),
            'pro': utils.removeIfEmpty(VpsPleskLicense.mapping(bundle, `${keyPrefix}pro`)),
            'host': utils.removeIfEmpty(VpsPleskLicense.mapping(bundle, `${keyPrefix}host`)),
        }
    },
}
