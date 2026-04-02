const utils = require('../utils/utils');
const WebsitesOrderPackagesInfo = require('../models/WebsitesOrderPackagesInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...WebsitesOrderPackagesInfo.fields(`${keyPrefix}11440`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '11440': utils.removeIfEmpty(WebsitesOrderPackagesInfo.mapping(bundle, `${keyPrefix}11440`)),
        }
    },
}
