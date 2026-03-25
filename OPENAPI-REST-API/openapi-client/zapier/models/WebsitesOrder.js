const utils = require('../utils/utils');
const WebsitesOrderJsonServiceOffers = require('../models/WebsitesOrderJsonServiceOffers');
const WebsitesOrderJsonServices = require('../models/WebsitesOrderJsonServices');
const WebsitesOrderPackages = require('../models/WebsitesOrderPackages');
const WebsitesOrder_packges = require('../models/WebsitesOrder_packges');
const WebsitesOrder_serviceOffers = require('../models/WebsitesOrder_serviceOffers');
const WebsitesOrder_serviceTypes = require('../models/WebsitesOrder_serviceTypes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}step`,
                label: `Step description - [${labelPrefix}step]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}website`,
                label: `Website description - [${labelPrefix}website]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}period`,
                label: `Period description - [${labelPrefix}period]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}serviceOfferId`,
                label: `Service offer ID description - [${labelPrefix}serviceOfferId]`,
                required: true,
                type: 'integer',
            },
            ...WebsitesOrderPackages.fields(`${keyPrefix}packages`, isInput),
            {
                key: `${keyPrefix}enableDomainRegistering`,
                label: `Enable domain registering description - [${labelPrefix}enableDomainRegistering]`,
                required: true,
                type: 'boolean',
            },
            ...WebsitesOrderJsonServices.fields(`${keyPrefix}jsonServices`, isInput),
            ...WebsitesOrderJsonServiceOffers.fields(`${keyPrefix}jsonServiceOffers`, isInput),
            ...WebsitesOrder_serviceTypes.fields(`${keyPrefix}serviceTypes`, isInput),
            ...WebsitesOrder_serviceOffers.fields(`${keyPrefix}serviceOffers`, isInput),
            ...WebsitesOrder_packges.fields(`${keyPrefix}packges`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'step': bundle.inputData?.[`${keyPrefix}step`],
            'website': bundle.inputData?.[`${keyPrefix}website`],
            'period': bundle.inputData?.[`${keyPrefix}period`],
            'serviceOfferId': bundle.inputData?.[`${keyPrefix}serviceOfferId`],
            'packages': utils.removeIfEmpty(WebsitesOrderPackages.mapping(bundle, `${keyPrefix}packages`)),
            'enableDomainRegistering': bundle.inputData?.[`${keyPrefix}enableDomainRegistering`],
            'jsonServices': utils.removeIfEmpty(WebsitesOrderJsonServices.mapping(bundle, `${keyPrefix}jsonServices`)),
            'jsonServiceOffers': utils.removeIfEmpty(WebsitesOrderJsonServiceOffers.mapping(bundle, `${keyPrefix}jsonServiceOffers`)),
            'serviceTypes': utils.removeIfEmpty(WebsitesOrder_serviceTypes.mapping(bundle, `${keyPrefix}serviceTypes`)),
            'serviceOffers': utils.removeIfEmpty(WebsitesOrder_serviceOffers.mapping(bundle, `${keyPrefix}serviceOffers`)),
            'packges': utils.removeIfEmpty(WebsitesOrder_packges.mapping(bundle, `${keyPrefix}packges`)),
        }
    },
}
