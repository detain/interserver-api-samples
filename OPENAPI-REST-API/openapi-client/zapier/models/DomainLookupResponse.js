const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}available`,
                label: `Whether the domain is available to register. - [${labelPrefix}available]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}premium`,
                label: `Whether the domain is marked as premium by the registrar. - [${labelPrefix}premium]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}website`,
                label: `Indicates if the domain is already used by a website service. - [${labelPrefix}website]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}domain_service`,
                label: `Indicates if the domain already exists as a domain service on the account. - [${labelPrefix}domain_service]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}service`,
                label: `Service catalog details for the domain's TLD. - [${labelPrefix}service]`,
                dict: true,
            },
            {
                key: `${keyPrefix}whois_privacy`,
                label: `Whether Whois privacy is available for the TLD. - [${labelPrefix}whois_privacy]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}new`,
                label: `Calculated registration price, when available. - [${labelPrefix}new]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}renewal`,
                label: `Calculated renewal price, when available. - [${labelPrefix}renewal]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}transfer`,
                label: `Calculated transfer price, when available. - [${labelPrefix}transfer]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}fields`,
                label: `Registrar field requirements for this domain/TLD. - [${labelPrefix}fields]`,
                dict: true,
            },
            {
                key: `${keyPrefix}currencies`,
                label: `Pricing information normalized to supported currencies. - [${labelPrefix}currencies]`,
                dict: true,
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'available': bundle.inputData?.[`${keyPrefix}available`],
            'premium': bundle.inputData?.[`${keyPrefix}premium`],
            'website': bundle.inputData?.[`${keyPrefix}website`],
            'domain_service': bundle.inputData?.[`${keyPrefix}domain_service`],
            'service': bundle.inputData?.[`${keyPrefix}service`],
            'whois_privacy': bundle.inputData?.[`${keyPrefix}whois_privacy`],
            'new': bundle.inputData?.[`${keyPrefix}new`],
            'renewal': bundle.inputData?.[`${keyPrefix}renewal`],
            'transfer': bundle.inputData?.[`${keyPrefix}transfer`],
            'fields': bundle.inputData?.[`${keyPrefix}fields`],
            'currencies': bundle.inputData?.[`${keyPrefix}currencies`],
        }
    },
}
