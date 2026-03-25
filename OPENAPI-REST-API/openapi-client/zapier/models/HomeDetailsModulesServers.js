const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}icon`,
                label: `The icon for dedicated servers. - [${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}view_link`,
                label: `Link to view server. - [${labelPrefix}view_link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}heading`,
                label: `Heading for dedicated servers. - [${labelPrefix}heading]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}buy_link`,
                label: `Link to order server. - [${labelPrefix}buy_link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}list_link`,
                label: `Link to view servers list. - [${labelPrefix}list_link]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'icon': bundle.inputData?.[`${keyPrefix}icon`],
            'view_link': bundle.inputData?.[`${keyPrefix}view_link`],
            'heading': bundle.inputData?.[`${keyPrefix}heading`],
            'buy_link': bundle.inputData?.[`${keyPrefix}buy_link`],
            'list_link': bundle.inputData?.[`${keyPrefix}list_link`],
        }
    },
}
