const utils = require('../utils/utils');
const WebsiteTable = require('../models/WebsiteTable');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...WebsiteTable.fields(`${keyPrefix}links`, isInput),
            ...WebsiteTable.fields(`${keyPrefix}preview`, isInput),
            ...WebsiteTable.fields(`${keyPrefix}dns`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(WebsiteTable.mapping(bundle, `${keyPrefix}links`)),
            'preview': utils.removeIfEmpty(WebsiteTable.mapping(bundle, `${keyPrefix}preview`)),
            'dns': utils.removeIfEmpty(WebsiteTable.mapping(bundle, `${keyPrefix}dns`)),
        }
    },
}
