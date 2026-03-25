const utils = require('../utils/utils');
const BuyItNowRow_cpu_inner = require('../models/BuyItNowRow_cpu_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}server_id`,
                label: `Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. - [${labelPrefix}server_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cpu`,
                label: `[${labelPrefix}cpu]`,
                children: BuyItNowRow_cpu_inner.fields(`${keyPrefix}cpu${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}memory`,
                label: `[${labelPrefix}memory]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disk`,
                label: `[${labelPrefix}disk]`,
                type: 'object',
            },
            {
                key: `${keyPrefix}bandwidth`,
                label: `[${labelPrefix}bandwidth]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ips`,
                label: `[${labelPrefix}ips]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}location`,
                label: `[${labelPrefix}location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `[${labelPrefix}price]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'server_id': bundle.inputData?.[`${keyPrefix}server_id`],
            'cpu': utils.childMapping(bundle.inputData?.[`${keyPrefix}cpu`], `${keyPrefix}cpu`, BuyItNowRow_cpu_inner),
            'memory': bundle.inputData?.[`${keyPrefix}memory`],
            'disk': bundle.inputData?.[`${keyPrefix}disk`],
            'bandwidth': bundle.inputData?.[`${keyPrefix}bandwidth`],
            'ips': bundle.inputData?.[`${keyPrefix}ips`],
            'location': bundle.inputData?.[`${keyPrefix}location`],
            'price': bundle.inputData?.[`${keyPrefix}price`],
        }
    },
}
