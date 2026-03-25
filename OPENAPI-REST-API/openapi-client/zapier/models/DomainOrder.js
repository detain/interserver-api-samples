const utils = require('../utils/utils');
const DomainOrder_services = require('../models/DomainOrder_services');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}whoisPrivacyCost`,
                label: `Cost of Whois Privacy - [${labelPrefix}whoisPrivacyCost]`,
                type: 'string',
            },
            ...DomainOrder_services.fields(`${keyPrefix}services`, isInput),
            {
                key: `${keyPrefix}tldServices`,
                label: `Map of TLDs to domain service IDs. - [${labelPrefix}tldServices]`,
                dict: true,
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'whoisPrivacyCost': bundle.inputData?.[`${keyPrefix}whoisPrivacyCost`],
            'services': utils.removeIfEmpty(DomainOrder_services.mapping(bundle, `${keyPrefix}services`)),
            'tldServices': bundle.inputData?.[`${keyPrefix}tldServices`],
        }
    },
}
