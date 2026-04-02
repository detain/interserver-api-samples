const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}2fa_google_code`,
                label: `The 6-digit verification code from your authenticator app. - [${labelPrefix}2fa_google_code]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '2fa_google_code': bundle.inputData?.[`${keyPrefix}2fa_google_code`],
        }
    },
}
