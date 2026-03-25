const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}icon`,
                label: `The icon for domains. - [${labelPrefix}icon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}view_link`,
                label: `Link to view domain. - [${labelPrefix}view_link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}heading`,
                label: `Heading for domains. - [${labelPrefix}heading]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}buy_link`,
                label: `Link to order domain. - [${labelPrefix}buy_link]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}list_link`,
                label: `Link to view domains list. - [${labelPrefix}list_link]`,
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
