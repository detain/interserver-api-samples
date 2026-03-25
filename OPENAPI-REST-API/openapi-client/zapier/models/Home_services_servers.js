const utils = require('../utils/utils');
const HomeServicesServersLinks = require('../models/HomeServicesServersLinks');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeServicesServersLinks.fields(`${keyPrefix}links`, isInput),
            {
                key: `${keyPrefix}count`,
                label: `Number of servers. - [${labelPrefix}count]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'links': utils.removeIfEmpty(HomeServicesServersLinks.mapping(bundle, `${keyPrefix}links`)),
            'count': bundle.inputData?.[`${keyPrefix}count`],
        }
    },
}
