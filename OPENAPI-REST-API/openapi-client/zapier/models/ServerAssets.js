const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `The title of the assets. - [${labelPrefix}title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}size`,
                label: `The size of the assets. - [${labelPrefix}size]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}type`,
                label: `The type of the assets. - [${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}header`,
                label: `The header of the assets table. - [${labelPrefix}header]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}rows`,
                label: `The rows of the assets table. - [${labelPrefix}rows]`,
                list: true,
                type: 'array',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'size': bundle.inputData?.[`${keyPrefix}size`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'header': bundle.inputData?.[`${keyPrefix}header`],
            'rows': bundle.inputData?.[`${keyPrefix}rows`],
        }
    },
}
