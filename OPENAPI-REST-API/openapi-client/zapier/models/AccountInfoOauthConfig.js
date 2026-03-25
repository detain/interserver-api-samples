const utils = require('../utils/utils');
const AccountInfoOauthConfigProviders = require('../models/AccountInfoOauthConfigProviders');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}callback`,
                label: `[${labelPrefix}callback]`,
                required: true,
                type: 'string',
            },
            ...AccountInfoOauthConfigProviders.fields(`${keyPrefix}providers`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'callback': bundle.inputData?.[`${keyPrefix}callback`],
            'providers': utils.removeIfEmpty(AccountInfoOauthConfigProviders.mapping(bundle, `${keyPrefix}providers`)),
        }
    },
}
