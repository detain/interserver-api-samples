const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `Indicates whether the registrar search succeeded. - [${labelPrefix}success]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}response_text`,
                label: `Human-readable status text from the registrar. - [${labelPrefix}response_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}response_time`,
                label: `Response time as reported by the registrar. - [${labelPrefix}response_time]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}lookup`,
                label: `Availability lookup results for queried domains. - [${labelPrefix}lookup]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}suggest`,
                label: `Suggested alternative domains and availability data. - [${labelPrefix}suggest]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}tlds`,
                label: `TLDs evaluated during the search. - [${labelPrefix}tlds]`,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'response_text': bundle.inputData?.[`${keyPrefix}response_text`],
            'response_time': bundle.inputData?.[`${keyPrefix}response_time`],
            'lookup': bundle.inputData?.[`${keyPrefix}lookup`],
            'suggest': bundle.inputData?.[`${keyPrefix}suggest`],
            'tlds': bundle.inputData?.[`${keyPrefix}tlds`],
        }
    },
}
