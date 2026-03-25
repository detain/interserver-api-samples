const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}label`,
                label: `Link label - [${labelPrefix}label]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}link`,
                label: `Link - [${labelPrefix}link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon`,
                label: `Icon class - [${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}icon_text`,
                label: `Icon text - [${labelPrefix}icon_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}help_text`,
                label: `Help text - [${labelPrefix}help_text]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}other_attr`,
                label: `Other attribute - [${labelPrefix}other_attr]`,
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
