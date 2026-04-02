const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}backup_id`,
                label: `The id of the backup. - [${labelPrefix}backup_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_name`,
                label: `The name of the backup. - [${labelPrefix}backup_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_cost`,
                label: `The cost of the backup. - [${labelPrefix}backup_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_username`,
                label: `The username of the backup. - [${labelPrefix}backup_username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_status`,
                label: `The status of the backup. - [${labelPrefix}backup_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}services_name`,
                label: `The services name of the backup. - [${labelPrefix}services_name]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'backup_id': bundle.inputData?.[`${keyPrefix}backup_id`],
            'backup_name': bundle.inputData?.[`${keyPrefix}backup_name`],
            'backup_cost': bundle.inputData?.[`${keyPrefix}backup_cost`],
            'backup_username': bundle.inputData?.[`${keyPrefix}backup_username`],
            'backup_status': bundle.inputData?.[`${keyPrefix}backup_status`],
            'services_name': bundle.inputData?.[`${keyPrefix}services_name`],
        }
    },
}
