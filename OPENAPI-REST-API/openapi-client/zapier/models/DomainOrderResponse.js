const utils = require('../utils/utils');
const DomainOrderResponse_attributes = require('../models/DomainOrderResponse_attributes');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}_OPS_version`,
                label: `[${labelPrefix}_OPS_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}protocol`,
                label: `[${labelPrefix}protocol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}is_success`,
                label: `[${labelPrefix}is_success]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}action`,
                label: `[${labelPrefix}action]`,
                type: 'string',
            },
            ...DomainOrderResponse_attributes.fields(`${keyPrefix}attributes`, isInput),
            {
                key: `${keyPrefix}response_text`,
                label: `[${labelPrefix}response_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}object`,
                label: `[${labelPrefix}object]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}response_code`,
                label: `[${labelPrefix}response_code]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '_OPS_version': bundle.inputData?.[`${keyPrefix}_OPS_version`],
            'protocol': bundle.inputData?.[`${keyPrefix}protocol`],
            'is_success': bundle.inputData?.[`${keyPrefix}is_success`],
            'action': bundle.inputData?.[`${keyPrefix}action`],
            'attributes': utils.removeIfEmpty(DomainOrderResponse_attributes.mapping(bundle, `${keyPrefix}attributes`)),
            'response_text': bundle.inputData?.[`${keyPrefix}response_text`],
            'object': bundle.inputData?.[`${keyPrefix}object`],
            'response_code': bundle.inputData?.[`${keyPrefix}response_code`],
        }
    },
}
