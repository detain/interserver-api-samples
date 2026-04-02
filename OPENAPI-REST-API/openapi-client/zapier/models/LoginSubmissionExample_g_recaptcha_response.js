const utils = require('../utils/utils');
const LoginSubmissionExample_g_recaptcha_response_dep = require('../models/LoginSubmissionExample_g_recaptcha_response_dep');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}__v_isShallow`,
                label: `[${labelPrefix}__v_isShallow]`,
                type: 'boolean',
            },
            ...LoginSubmissionExample_g_recaptcha_response_dep.fields(`${keyPrefix}dep`, isInput),
            {
                key: `${keyPrefix}__v_isRef`,
                label: `[${labelPrefix}__v_isRef]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}_rawValue`,
                label: `[${labelPrefix}_rawValue]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}_value`,
                label: `[${labelPrefix}_value]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            '__v_isShallow': bundle.inputData?.[`${keyPrefix}__v_isShallow`],
            'dep': utils.removeIfEmpty(LoginSubmissionExample_g_recaptcha_response_dep.mapping(bundle, `${keyPrefix}dep`)),
            '__v_isRef': bundle.inputData?.[`${keyPrefix}__v_isRef`],
            '_rawValue': bundle.inputData?.[`${keyPrefix}_rawValue`],
            '_value': bundle.inputData?.[`${keyPrefix}_value`],
        }
    },
}
