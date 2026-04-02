const utils = require('../utils/utils');
const LicensesOrderServiceTypes11482 = require('../models/LicensesOrderServiceTypes11482');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...LicensesOrderServiceTypes11482.fields(`${keyPrefix}LicensesOrderServiceTypes11482`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'LicensesOrderServiceTypes11482': utils.removeIfEmpty(LicensesOrderServiceTypes11482.mapping(bundle, `${keyPrefix}LicensesOrderServiceTypes11482`)),
        }
    },
}
