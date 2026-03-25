const utils = require('../utils/utils');
const LicensesOrderServiceCategories509 = require('../models/LicensesOrderServiceCategories509');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...LicensesOrderServiceCategories509.fields(`${keyPrefix}LicensesOrderServiceCategories509`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'LicensesOrderServiceCategories509': utils.removeIfEmpty(LicensesOrderServiceCategories509.mapping(bundle, `${keyPrefix}LicensesOrderServiceCategories509`)),
        }
    },
}
