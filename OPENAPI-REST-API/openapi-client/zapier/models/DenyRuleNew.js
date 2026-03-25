const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}type`,
                label: `The type of deny rule. - [${labelPrefix}type]`,
                required: true,
                type: 'string',
                choices: [
                    'domain',
                    'email',
                    'startswith',
                    'destination',
                ],
            },
            {
                key: `${keyPrefix}data`,
                label: `The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com. - [${labelPrefix}data]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}user`,
                label: `Mail account username that will be tied to this rule.  If not specified the first active mail order will be used. - [${labelPrefix}user]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'data': bundle.inputData?.[`${keyPrefix}data`],
            'user': bundle.inputData?.[`${keyPrefix}user`],
        }
    },
}
