const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}label`,
                label: `[${labelPrefix}label]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}link`,
                label: `[${labelPrefix}link]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon`,
                label: `[${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon_text`,
                label: `[${labelPrefix}icon_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}help_text`,
                label: `[${labelPrefix}help_text]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'label': bundle.inputData?.[`${keyPrefix}label`],
            'link': bundle.inputData?.[`${keyPrefix}link`],
            'icon': bundle.inputData?.[`${keyPrefix}icon`],
            'icon_text': bundle.inputData?.[`${keyPrefix}icon_text`],
            'help_text': bundle.inputData?.[`${keyPrefix}help_text`],
        }
    },
}
