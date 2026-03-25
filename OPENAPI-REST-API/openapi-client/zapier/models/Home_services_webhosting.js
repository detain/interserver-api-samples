const utils = require('../utils/utils');
const HomeServicesWebhostingLinks = require('../models/HomeServicesWebhostingLinks');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeServicesWebhostingLinks.fields(`${keyPrefix}links`, isInput),
            {
                key: `${keyPrefix}count`,
                label: `Number of web hosting services. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(HomeServicesWebhostingLinks.mapping(bundle, `${keyPrefix}links`)),
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
