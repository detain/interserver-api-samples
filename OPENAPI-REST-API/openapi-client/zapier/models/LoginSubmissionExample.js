const utils = require('../utils/utils');
const LoginSubmissionExample_g_recaptcha_response = require('../models/LoginSubmissionExample_g_recaptcha_response');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}login`,
                label: `[${labelPrefix}login]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}passwd`,
                label: `[${labelPrefix}passwd]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}remember`,
                label: `[${labelPrefix}remember]`,
                type: 'string',
            },
            ...LoginSubmissionExample_g_recaptcha_response.fields(`${keyPrefix}g-recaptcha-response`, isInput),
            {
                key: `${keyPrefix}tfa`,
                label: `Two Factor Authentication Response. - [${labelPrefix}tfa]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'login': bundle.inputData?.[`${keyPrefix}login`],
            'passwd': bundle.inputData?.[`${keyPrefix}passwd`],
            'remember': bundle.inputData?.[`${keyPrefix}remember`],
            'g-recaptcha-response': utils.removeIfEmpty(LoginSubmissionExample_g_recaptcha_response.mapping(bundle, `${keyPrefix}g-recaptcha-response`)),
            'tfa': bundle.inputData?.[`${keyPrefix}tfa`],
        }
    },
}
