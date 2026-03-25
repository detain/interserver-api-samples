const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}label`,
                label: `The label of the client link. - [${labelPrefix}label]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}link`,
                label: `The link URL of the client link. - [${labelPrefix}link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon`,
                label: `The icon class of the client link. - [${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon_text`,
                label: `The text for the icon of the client link. - [${labelPrefix}icon_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}help_text`,
                label: `Help text for the client link. - [${labelPrefix}help_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}other_attr`,
                label: `Additional attributes for the client link. - [${labelPrefix}other_attr]`,
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
            'other_attr': bundle.inputData?.[`${keyPrefix}other_attr`],
        }
    },
}
