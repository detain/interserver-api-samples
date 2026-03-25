const utils = require('../utils/utils');
const ServerLocation1 = require('../models/ServerLocation1');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerLocation1.fields(`${keyPrefix}1`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '1': utils.removeIfEmpty(ServerLocation1.mapping(bundle, `${keyPrefix}1`)),
        }
    },
}
