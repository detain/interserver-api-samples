const utils = require('../utils/utils');
const DomainAdminContact = require('../models/DomainAdminContact');
const DomainOwnerContact = require('../models/DomainOwnerContact');
const DomainTechContact = require('../models/DomainTechContact');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...DomainOwnerContact.fields(`${keyPrefix}owner`, isInput),
            ...DomainAdminContact.fields(`${keyPrefix}admin`, isInput),
            ...DomainTechContact.fields(`${keyPrefix}tech`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'owner': utils.removeIfEmpty(DomainOwnerContact.mapping(bundle, `${keyPrefix}owner`)),
            'admin': utils.removeIfEmpty(DomainAdminContact.mapping(bundle, `${keyPrefix}admin`)),
            'tech': utils.removeIfEmpty(DomainTechContact.mapping(bundle, `${keyPrefix}tech`)),
        }
    },
}
