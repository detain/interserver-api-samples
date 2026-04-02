const utils = require('../utils/utils');
const getOrderDetail_200_response_ips_inner = require('../models/getOrderDetail_200_response_ips_inner');
const getOrderDetail_200_response_packageCosts = require('../models/getOrderDetail_200_response_packageCosts');
const getOrderDetail_200_response_serviceTypes_inner = require('../models/getOrderDetail_200_response_serviceTypes_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...getOrderDetail_200_response_packageCosts.fields(`${keyPrefix}packageCosts`, isInput),
            {
                key: `${keyPrefix}serviceTypes`,
                label: `[${labelPrefix}serviceTypes]`,
                children: getOrderDetail_200_response_serviceTypes_inner.fields(`${keyPrefix}serviceTypes${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}ips`,
                label: `[${labelPrefix}ips]`,
                children: getOrderDetail_200_response_ips_inner.fields(`${keyPrefix}ips${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'packageCosts': utils.removeIfEmpty(getOrderDetail_200_response_packageCosts.mapping(bundle, `${keyPrefix}packageCosts`)),
            'serviceTypes': utils.childMapping(bundle.inputData?.[`${keyPrefix}serviceTypes`], `${keyPrefix}serviceTypes`, getOrderDetail_200_response_serviceTypes_inner),
            'ips': utils.childMapping(bundle.inputData?.[`${keyPrefix}ips`], `${keyPrefix}ips`, getOrderDetail_200_response_ips_inner),
        }
    },
}
