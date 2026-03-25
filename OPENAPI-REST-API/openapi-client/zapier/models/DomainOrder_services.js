const utils = require('../utils/utils');
const DomainOrderServices10001 = require('../models/DomainOrderServices10001');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...DomainOrderServices10001.fields(`${keyPrefix}DomainOrderServices10001`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'DomainOrderServices10001': utils.removeIfEmpty(DomainOrderServices10001.mapping(bundle, `${keyPrefix}DomainOrderServices10001`)),
        }
    },
}
