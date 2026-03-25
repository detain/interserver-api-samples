const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}post_id`,
                label: `[${labelPrefix}post_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}date`,
                label: `[${labelPrefix}date]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}contents`,
                label: `[${labelPrefix}contents]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}creator`,
                label: `[${labelPrefix}creator]`,
                type: 'string',
                choices: [
                    'User',
                    'Staff',
                ],
            },
            {
                key: `${keyPrefix}creator_email`,
                label: `[${labelPrefix}creator_email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}creator_name`,
                label: `[${labelPrefix}creator_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hasattachments`,
                label: `[${labelPrefix}hasattachments]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}attachment_download`,
                label: `[${labelPrefix}attachment_download]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'post_id': bundle.inputData?.[`${keyPrefix}post_id`],
            'date': bundle.inputData?.[`${keyPrefix}date`],
            'contents': bundle.inputData?.[`${keyPrefix}contents`],
            'creator': bundle.inputData?.[`${keyPrefix}creator`],
            'creator_email': bundle.inputData?.[`${keyPrefix}creator_email`],
            'creator_name': bundle.inputData?.[`${keyPrefix}creator_name`],
            'hasattachments': bundle.inputData?.[`${keyPrefix}hasattachments`],
            'attachment_download': bundle.inputData?.[`${keyPrefix}attachment_download`],
        }
    },
}
