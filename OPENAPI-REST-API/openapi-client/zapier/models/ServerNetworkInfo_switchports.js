const utils = require('../utils/utils');
const ServerSwitchport = require('../models/ServerSwitchport');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerSwitchport.fields(`${keyPrefix}10414`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '10414': utils.removeIfEmpty(ServerSwitchport.mapping(bundle, `${keyPrefix}10414`)),
        }
    },
}
