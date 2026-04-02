const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}traffic_id`,
                label: `[${labelPrefix}traffic_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}traffic_ip`,
                label: `[${labelPrefix}traffic_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}traffic_url`,
                label: `[${labelPrefix}traffic_url]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}traffic_affiliate`,
                label: `[${labelPrefix}traffic_affiliate]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}traffic_referrer`,
                label: `[${labelPrefix}traffic_referrer]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}traffic_timestamp`,
                label: `[${labelPrefix}traffic_timestamp]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'traffic_id': bundle.inputData?.[`${keyPrefix}traffic_id`],
            'traffic_ip': bundle.inputData?.[`${keyPrefix}traffic_ip`],
            'traffic_url': bundle.inputData?.[`${keyPrefix}traffic_url`],
            'traffic_affiliate': bundle.inputData?.[`${keyPrefix}traffic_affiliate`],
            'traffic_referrer': bundle.inputData?.[`${keyPrefix}traffic_referrer`],
            'traffic_timestamp': bundle.inputData?.[`${keyPrefix}traffic_timestamp`],
        }
    },
}
