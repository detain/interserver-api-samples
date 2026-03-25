const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}login`,
                label: `Whether the user was logged in to an existing account. - [${labelPrefix}login]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}signup`,
                label: `Whether a new account was created. - [${labelPrefix}signup]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}linked`,
                label: `Whether the OAuth provider was linked to an existing account. - [${labelPrefix}linked]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}account_id`,
                label: `The account ID associated with the OAuth login. - [${labelPrefix}account_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}error_code`,
                label: `Error code if additional verification is needed (e.g. `2fa_required`). - [${labelPrefix}error_code]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'login': bundle.inputData?.[`${keyPrefix}login`],
            'signup': bundle.inputData?.[`${keyPrefix}signup`],
            'linked': bundle.inputData?.[`${keyPrefix}linked`],
            'account_id': bundle.inputData?.[`${keyPrefix}account_id`],
            'error_code': bundle.inputData?.[`${keyPrefix}error_code`],
        }
    },
}
