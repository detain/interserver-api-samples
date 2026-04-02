const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}type`,
                label: `The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result). - [${labelPrefix}type]`,
                type: 'string',
                choices: [
                    'redirect',
                    'submit',
                    'single',
                ],
            },
            {
                key: `${keyPrefix}redirect`,
                label: `URL to redirect the user to for payment (when type is `redirect`). - [${labelPrefix}redirect]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}action`,
                label: `Form action URL (when type is `submit`). - [${labelPrefix}action]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}method`,
                label: `HTTP method for the form submission (when type is `submit`). - [${labelPrefix}method]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}items`,
                label: `Form field name-value pairs to submit (when type is `submit`). - [${labelPrefix}items]`,
                dict: true,
            },
            {
                key: `${keyPrefix}text`,
                label: `Status or result text. - [${labelPrefix}text]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'redirect': bundle.inputData?.[`${keyPrefix}redirect`],
            'action': bundle.inputData?.[`${keyPrefix}action`],
            'method': bundle.inputData?.[`${keyPrefix}method`],
            'items': bundle.inputData?.[`${keyPrefix}items`],
            'text': bundle.inputData?.[`${keyPrefix}text`],
        }
    },
}
