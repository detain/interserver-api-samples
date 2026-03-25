const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}switchport_id`,
                label: `Unique identifier for the switchport. - [${labelPrefix}switchport_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}switch_id`,
                label: `Unique identifier for the switch associated with the switchport. - [${labelPrefix}switch_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}switch`,
                label: `Name of the switch associated with the switchport. - [${labelPrefix}switch]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}port`,
                label: `Port name on the switch. - [${labelPrefix}port]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}blade`,
                label: `Blade name associated with the port. - [${labelPrefix}blade]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}justport`,
                label: `Port identifier. - [${labelPrefix}justport]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}graph_id`,
                label: `Identifier for the graph associated with the switchport. - [${labelPrefix}graph_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}asset_id`,
                label: `Unique identifier of the asset associated with the switchport. - [${labelPrefix}asset_id]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}vlans`,
                label: `List of VLANs associated with the switchport. - [${labelPrefix}vlans]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}vlans6`,
                label: `List of IPv6 VLANs associated with the switchport. - [${labelPrefix}vlans6]`,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'switchport_id': bundle.inputData?.[`${keyPrefix}switchport_id`],
            'switch_id': bundle.inputData?.[`${keyPrefix}switch_id`],
            'switch': bundle.inputData?.[`${keyPrefix}switch`],
            'port': bundle.inputData?.[`${keyPrefix}port`],
            'blade': bundle.inputData?.[`${keyPrefix}blade`],
            'justport': bundle.inputData?.[`${keyPrefix}justport`],
            'graph_id': bundle.inputData?.[`${keyPrefix}graph_id`],
            'asset_id': bundle.inputData?.[`${keyPrefix}asset_id`],
            'vlans': bundle.inputData?.[`${keyPrefix}vlans`],
            'vlans6': bundle.inputData?.[`${keyPrefix}vlans6`],
        }
    },
}
