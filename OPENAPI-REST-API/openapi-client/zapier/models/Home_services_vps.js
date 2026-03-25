const utils = require('../utils/utils');
const HomeServicesVpsLinks = require('../models/HomeServicesVpsLinks');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeServicesVpsLinks.fields(`${keyPrefix}links`, isInput),
            {
                key: `${keyPrefix}count`,
                label: `Number of VPS services. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(HomeServicesVpsLinks.mapping(bundle, `${keyPrefix}links`)),
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
