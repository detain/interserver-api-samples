const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}location_id`,
                label: `[${labelPrefix}location_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}location_name`,
                label: `[${labelPrefix}location_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}location_lat`,
                label: `[${labelPrefix}location_lat]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}location_long`,
                label: `[${labelPrefix}location_long]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}location_description`,
                label: `[${labelPrefix}location_description]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}location_ipmi_group`,
                label: `[${labelPrefix}location_ipmi_group]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'location_id': bundle.inputData?.[`${keyPrefix}location_id`],
            'location_name': bundle.inputData?.[`${keyPrefix}location_name`],
            'location_lat': bundle.inputData?.[`${keyPrefix}location_lat`],
            'location_long': bundle.inputData?.[`${keyPrefix}location_long`],
            'location_description': bundle.inputData?.[`${keyPrefix}location_description`],
            'location_ipmi_group': bundle.inputData?.[`${keyPrefix}location_ipmi_group`],
        }
    },
}
