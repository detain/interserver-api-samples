const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}label`,
                label: `Display label for the link. - [${labelPrefix}label]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}link`,
                label: `URL or route for the action. - [${labelPrefix}link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon`,
                label: `Icon class for the link. - [${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon_text`,
                label: `Icon text label. - [${labelPrefix}icon_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}help_text`,
                label: `Help tooltip text for the link. - [${labelPrefix}help_text]`,
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
