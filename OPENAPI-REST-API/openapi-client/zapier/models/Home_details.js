const utils = require('../utils/utils');
const Home_details_modules = require('../models/Home_details_modules');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...Home_details_modules.fields(`${keyPrefix}modules`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'modules': utils.removeIfEmpty(Home_details_modules.mapping(bundle, `${keyPrefix}modules`)),
        }
    },
}
