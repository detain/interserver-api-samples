const utils = require('../utils/utils');
const QuickserverOrderTemplatesUbuntu64 = require('../models/QuickserverOrderTemplatesUbuntu64');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverOrderTemplatesUbuntu64.fields(`${keyPrefix}Ubuntu`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'Ubuntu': utils.removeIfEmpty(QuickserverOrderTemplatesUbuntu64.mapping(bundle, `${keyPrefix}Ubuntu`)),
        }
    },
}
