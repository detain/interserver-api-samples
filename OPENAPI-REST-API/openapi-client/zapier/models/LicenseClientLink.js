const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}label`,
                label: `Link label - [${labelPrefix}label]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}link`,
                label: `Link URL - [${labelPrefix}link]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon`,
                label: `Link icon - [${labelPrefix}icon]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}help_text`,
                label: `Help text - [${labelPrefix}help_text]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon_text`,
                label: `Icon text - [${labelPrefix}icon_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}other_attr`,
                label: `Other attributes - [${labelPrefix}other_attr]`,
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
            'help_text': bundle.inputData?.[`${keyPrefix}help_text`],
            'icon_text': bundle.inputData?.[`${keyPrefix}icon_text`],
            'other_attr': bundle.inputData?.[`${keyPrefix}other_attr`],
        }
    },
}
