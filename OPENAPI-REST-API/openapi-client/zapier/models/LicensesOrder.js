const utils = require('../utils/utils');
const LicensesOrder_packageCosts = require('../models/LicensesOrder_packageCosts');
const LicensesOrder_serviceCategories = require('../models/LicensesOrder_serviceCategories');
const LicensesOrder_serviceTypes = require('../models/LicensesOrder_serviceTypes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...LicensesOrder_serviceCategories.fields(`${keyPrefix}serviceCategories`, isInput),
            ...LicensesOrder_packageCosts.fields(`${keyPrefix}packageCosts`, isInput),
            ...LicensesOrder_serviceTypes.fields(`${keyPrefix}serviceTypes`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceCategories': utils.removeIfEmpty(LicensesOrder_serviceCategories.mapping(bundle, `${keyPrefix}serviceCategories`)),
            'packageCosts': utils.removeIfEmpty(LicensesOrder_packageCosts.mapping(bundle, `${keyPrefix}packageCosts`)),
            'serviceTypes': utils.removeIfEmpty(LicensesOrder_serviceTypes.mapping(bundle, `${keyPrefix}serviceTypes`)),
        }
    },
}
