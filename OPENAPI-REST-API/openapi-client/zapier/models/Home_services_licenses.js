const utils = require('../utils/utils');
const HomeServicesLicensesLinks = require('../models/HomeServicesLicensesLinks');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeServicesLicensesLinks.fields(`${keyPrefix}links`, isInput),
            {
                key: `${keyPrefix}count`,
                label: `Number of licenses. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(HomeServicesLicensesLinks.mapping(bundle, `${keyPrefix}links`)),
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
