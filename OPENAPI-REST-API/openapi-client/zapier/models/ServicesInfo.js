const utils = require('../utils/utils');
const Modules = require('../models/Modules');
const ServiceCategories = require('../models/ServiceCategories');
const ServiceTypes = require('../models/ServiceTypes');
const Services = require('../models/Services');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...Modules.fields(`${keyPrefix}modules`, isInput),
            ...Services.fields(`${keyPrefix}services`, isInput),
            ...ServiceTypes.fields(`${keyPrefix}serviceTypes`, isInput),
            ...ServiceCategories.fields(`${keyPrefix}serviceCategories`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'modules': utils.removeIfEmpty(Modules.mapping(bundle, `${keyPrefix}modules`)),
            'services': utils.removeIfEmpty(Services.mapping(bundle, `${keyPrefix}services`)),
            'serviceTypes': utils.removeIfEmpty(ServiceTypes.mapping(bundle, `${keyPrefix}serviceTypes`)),
            'serviceCategories': utils.removeIfEmpty(ServiceCategories.mapping(bundle, `${keyPrefix}serviceCategories`)),
        }
    },
}
