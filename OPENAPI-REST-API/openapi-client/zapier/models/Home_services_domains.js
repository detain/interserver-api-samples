const utils = require('../utils/utils');
const HomeServicesDomainsLinks = require('../models/HomeServicesDomainsLinks');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeServicesDomainsLinks.fields(`${keyPrefix}links`, isInput),
            {
                key: `${keyPrefix}count`,
                label: `Number of domains. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(HomeServicesDomainsLinks.mapping(bundle, `${keyPrefix}links`)),
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
