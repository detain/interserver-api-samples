const utils = require('../utils/utils');
const getScrubIpDetails_200_response_filter_firewall_filters_inner = require('../models/getScrubIpDetails_200_response_filter_firewall_filters_inner');
const getScrubIpDetails_200_response_filter_firewall_rules_inner = require('../models/getScrubIpDetails_200_response_filter_firewall_rules_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}rules`,
                label: `[${labelPrefix}rules]`,
                children: getScrubIpDetails_200_response_filter_firewall_rules_inner.fields(`${keyPrefix}rules${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}filters`,
                label: `[${labelPrefix}filters]`,
                children: getScrubIpDetails_200_response_filter_firewall_filters_inner.fields(`${keyPrefix}filters${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}scrub_enabled`,
                label: `[${labelPrefix}scrub_enabled]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'rules': utils.childMapping(bundle.inputData?.[`${keyPrefix}rules`], `${keyPrefix}rules`, getScrubIpDetails_200_response_filter_firewall_rules_inner),
            'filters': utils.childMapping(bundle.inputData?.[`${keyPrefix}filters`], `${keyPrefix}filters`, getScrubIpDetails_200_response_filter_firewall_filters_inner),
            'scrub_enabled': bundle.inputData?.[`${keyPrefix}scrub_enabled`],
        }
    },
}
