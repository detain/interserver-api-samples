const utils = require('../utils/utils');
const WebsitesOrderServiceTypes = require('../models/WebsitesOrderServiceTypes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...WebsitesOrderServiceTypes.fields(`${keyPrefix}11447`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '11447': utils.removeIfEmpty(WebsitesOrderServiceTypes.mapping(bundle, `${keyPrefix}11447`)),
        }
    },
}
