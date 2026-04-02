const utils = require('../utils/utils');
const MailStatsType_volume = require('../models/MailStatsType_volume');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}time`,
                label: `[${labelPrefix}time]`,
                type: 'string',
                choices: [
                    'all',
                    'billing',
                    'month',
                    '7d',
                    '24h',
                    'today',
                    '1h',
                ],
            },
            {
                key: `${keyPrefix}usage`,
                label: `[${labelPrefix}usage]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}currency`,
                label: `[${labelPrefix}currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}currencySymbol`,
                label: `[${labelPrefix}currencySymbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `[${labelPrefix}cost]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}received`,
                label: `[${labelPrefix}received]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sent`,
                label: `[${labelPrefix}sent]`,
                type: 'integer',
            },
            ...MailStatsType_volume.fields(`${keyPrefix}volume`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'time': bundle.inputData?.[`${keyPrefix}time`],
            'usage': bundle.inputData?.[`${keyPrefix}usage`],
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'currencySymbol': bundle.inputData?.[`${keyPrefix}currencySymbol`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'received': bundle.inputData?.[`${keyPrefix}received`],
            'sent': bundle.inputData?.[`${keyPrefix}sent`],
            'volume': utils.removeIfEmpty(MailStatsType_volume.mapping(bundle, `${keyPrefix}volume`)),
        }
    },
}
