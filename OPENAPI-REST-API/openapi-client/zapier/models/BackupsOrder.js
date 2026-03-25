const utils = require('../utils/utils');
const BackupsOrderPackageCosts = require('../models/BackupsOrderPackageCosts');
const BackupsOrder_serviceTypes = require('../models/BackupsOrder_serviceTypes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...BackupsOrderPackageCosts.fields(`${keyPrefix}packageCosts`, isInput),
            ...BackupsOrder_serviceTypes.fields(`${keyPrefix}serviceTypes`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'packageCosts': utils.removeIfEmpty(BackupsOrderPackageCosts.mapping(bundle, `${keyPrefix}packageCosts`)),
            'serviceTypes': utils.removeIfEmpty(BackupsOrder_serviceTypes.mapping(bundle, `${keyPrefix}serviceTypes`)),
        }
    },
}
