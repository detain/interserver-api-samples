const utils = require('../utils/utils');
const WebsitesOrderJsonServiceOffersItem = require('../models/WebsitesOrderJsonServiceOffersItem');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}1026`,
                label: `[${labelPrefix}1026]`,
                children: WebsitesOrderJsonServiceOffersItem.fields(`${keyPrefix}1026${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '1026': utils.childMapping(bundle.inputData?.[`${keyPrefix}1026`], `${keyPrefix}1026`, WebsitesOrderJsonServiceOffersItem),
        }
    },
}
