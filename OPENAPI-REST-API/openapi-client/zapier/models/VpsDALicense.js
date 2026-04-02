const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `License tier name. - [${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}sub_name`,
                label: `License tier sub-name. - [${labelPrefix}sub_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `Monthly cost in cents. - [${labelPrefix}cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}img_disabled`,
                label: `Image path for the disabled state icon. - [${labelPrefix}img_disabled]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}img_active`,
                label: `Image path for the active state icon. - [${labelPrefix}img_active]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'sub_name': bundle.inputData?.[`${keyPrefix}sub_name`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'img_disabled': bundle.inputData?.[`${keyPrefix}img_disabled`],
            'img_active': bundle.inputData?.[`${keyPrefix}img_active`],
        }
    },
}
