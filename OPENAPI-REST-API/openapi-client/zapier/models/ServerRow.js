const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}server_id`,
                label: `The id of the server. - [${labelPrefix}server_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}account_lid`,
                label: `The account lid of the server. - [${labelPrefix}account_lid]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_hostname`,
                label: `The hostname of the server. - [${labelPrefix}server_hostname]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_status`,
                label: `The status of the server. - [${labelPrefix}server_status]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'server_id': bundle.inputData?.[`${keyPrefix}server_id`],
            'account_lid': bundle.inputData?.[`${keyPrefix}account_lid`],
            'server_hostname': bundle.inputData?.[`${keyPrefix}server_hostname`],
            'server_status': bundle.inputData?.[`${keyPrefix}server_status`],
        }
    },
}
