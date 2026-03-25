const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}qs_id`,
                label: `The id of the qs. - [${labelPrefix}qs_id]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_name`,
                label: `The name of the qs. - [${labelPrefix}qs_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}cost`,
                label: `The cost of the qs. - [${labelPrefix}cost]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_hostname`,
                label: `The hostname of the qs. - [${labelPrefix}qs_hostname]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_status`,
                label: `The status of the qs. - [${labelPrefix}qs_status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}qs_comment`,
                label: `The comment of the qs. - [${labelPrefix}qs_comment]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'qs_id': bundle.inputData?.[`${keyPrefix}qs_id`],
            'qs_name': bundle.inputData?.[`${keyPrefix}qs_name`],
            'cost': bundle.inputData?.[`${keyPrefix}cost`],
            'qs_hostname': bundle.inputData?.[`${keyPrefix}qs_hostname`],
            'qs_status': bundle.inputData?.[`${keyPrefix}qs_status`],
            'qs_comment': bundle.inputData?.[`${keyPrefix}qs_comment`],
        }
    },
}
