const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}sessionId`,
                label: `[${labelPrefix}sessionId]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}account_id`,
                label: `[${labelPrefix}account_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}account_lid`,
                label: `[${labelPrefix}account_lid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ima`,
                label: `[${labelPrefix}ima]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}gravatar`,
                label: `[${labelPrefix}gravatar]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'sessionId': bundle.inputData?.[`${keyPrefix}sessionId`],
            'account_id': bundle.inputData?.[`${keyPrefix}account_id`],
            'account_lid': bundle.inputData?.[`${keyPrefix}account_lid`],
            'ima': bundle.inputData?.[`${keyPrefix}ima`],
            'gravatar': bundle.inputData?.[`${keyPrefix}gravatar`],
        }
    },
}
