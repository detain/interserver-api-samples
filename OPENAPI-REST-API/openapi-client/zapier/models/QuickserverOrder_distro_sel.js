const utils = require('../utils/utils');
const QuickserverOrderDistroSelUbuntu = require('../models/QuickserverOrderDistroSelUbuntu');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...QuickserverOrderDistroSelUbuntu.fields(`${keyPrefix}Ubuntu`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'Ubuntu': utils.removeIfEmpty(QuickserverOrderDistroSelUbuntu.mapping(bundle, `${keyPrefix}Ubuntu`)),
        }
    },
}
