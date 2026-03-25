const utils = require('../utils/utils');
const LoginServiceCounts = require('../models/LoginServiceCounts');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}captcha`,
                label: `A base64 encoded image to use for rendering the alternateive captcha. - [${labelPrefix}captcha]`,
                required: true,
                type: 'string',
            },
            ...LoginServiceCounts.fields(`${keyPrefix}counts`, isInput),
            {
                key: `${keyPrefix}logo`,
                label: `A logo image url. - [${labelPrefix}logo]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}language`,
                label: `The desired langauge to render the site with. - [${labelPrefix}language]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'captcha': bundle.inputData?.[`${keyPrefix}captcha`],
            'counts': utils.removeIfEmpty(LoginServiceCounts.mapping(bundle, `${keyPrefix}counts`)),
            'logo': bundle.inputData?.[`${keyPrefix}logo`],
            'language': bundle.inputData?.[`${keyPrefix}language`],
        }
    },
}
