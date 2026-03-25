const utils = require('../utils/utils');
const BackupsOrderServiceTypes = require('../models/BackupsOrderServiceTypes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...BackupsOrderServiceTypes.fields(`${keyPrefix}11006`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '11006': utils.removeIfEmpty(BackupsOrderServiceTypes.mapping(bundle, `${keyPrefix}11006`)),
        }
    },
}
