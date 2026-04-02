const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}2fa_google_key`,
                label: `Base64-encoded secret key for TOTP setup. - [${labelPrefix}2fa_google_key]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2fa_google_split`,
                label: `Human-readable formatted key (chunks of 4 characters). - [${labelPrefix}2fa_google_split]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '2fa_google_key': bundle.inputData?.[`${keyPrefix}2fa_google_key`],
            '2fa_google_split': bundle.inputData?.[`${keyPrefix}2fa_google_split`],
        }
    },
}
