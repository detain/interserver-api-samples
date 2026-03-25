const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}server_id`,
                label: `The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs. - [${labelPrefix}server_id]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}server_hostname`,
                label: `The fully-qualified hostname to assign to the server. - [${labelPrefix}server_hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}server_root_password`,
                label: `The root or administrator password to set on the server. - [${labelPrefix}server_root_password]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'server_id': bundle.inputData?.[`${keyPrefix}server_id`],
            'server_hostname': bundle.inputData?.[`${keyPrefix}server_hostname`],
            'server_root_password': bundle.inputData?.[`${keyPrefix}server_root_password`],
        }
    },
}
