const utils = require('../utils/utils');
const getScrubIpDetails_200_response_billingDetails = require('../models/getScrubIpDetails_200_response_billingDetails');
const getScrubIpDetails_200_response_client_links_inner = require('../models/getScrubIpDetails_200_response_client_links_inner');
const getScrubIpDetails_200_response_extraInfoTables = require('../models/getScrubIpDetails_200_response_extraInfoTables');
const getScrubIpDetails_200_response_filter_firewall = require('../models/getScrubIpDetails_200_response_filter_firewall');
const getScrubIpDetails_200_response_serviceInfo = require('../models/getScrubIpDetails_200_response_serviceInfo');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...getScrubIpDetails_200_response_serviceInfo.fields(`${keyPrefix}serviceInfo`, isInput),
            {
                key: `${keyPrefix}client_links`,
                label: `[${labelPrefix}client_links]`,
                children: getScrubIpDetails_200_response_client_links_inner.fields(`${keyPrefix}client_links${!isInput ? '[]' : ''}`, isInput, true), 
            },
            ...getScrubIpDetails_200_response_billingDetails.fields(`${keyPrefix}billingDetails`, isInput),
            {
                key: `${keyPrefix}custCurrency`,
                label: `[${labelPrefix}custCurrency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custCurrencySymbol`,
                label: `[${labelPrefix}custCurrencySymbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}package`,
                label: `[${labelPrefix}package]`,
                type: 'string',
            },
            ...getScrubIpDetails_200_response_extraInfoTables.fields(`${keyPrefix}extraInfoTables`, isInput),
            ...getScrubIpDetails_200_response_filter_firewall.fields(`${keyPrefix}filter_firewall`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'serviceInfo': utils.removeIfEmpty(getScrubIpDetails_200_response_serviceInfo.mapping(bundle, `${keyPrefix}serviceInfo`)),
            'client_links': utils.childMapping(bundle.inputData?.[`${keyPrefix}client_links`], `${keyPrefix}client_links`, getScrubIpDetails_200_response_client_links_inner),
            'billingDetails': utils.removeIfEmpty(getScrubIpDetails_200_response_billingDetails.mapping(bundle, `${keyPrefix}billingDetails`)),
            'custCurrency': bundle.inputData?.[`${keyPrefix}custCurrency`],
            'custCurrencySymbol': bundle.inputData?.[`${keyPrefix}custCurrencySymbol`],
            'package': bundle.inputData?.[`${keyPrefix}package`],
            'extraInfoTables': utils.removeIfEmpty(getScrubIpDetails_200_response_extraInfoTables.mapping(bundle, `${keyPrefix}extraInfoTables`)),
            'filter_firewall': utils.removeIfEmpty(getScrubIpDetails_200_response_filter_firewall.mapping(bundle, `${keyPrefix}filter_firewall`)),
        }
    },
}
