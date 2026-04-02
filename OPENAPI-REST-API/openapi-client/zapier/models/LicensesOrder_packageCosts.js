const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}LicensesOrderPackageCosts11468`,
                label: `Cost of package with ID 11468 - [${labelPrefix}LicensesOrderPackageCosts11468]`,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'LicensesOrderPackageCosts11468': bundle.inputData?.[`${keyPrefix}LicensesOrderPackageCosts11468`],
        }
    },
}
