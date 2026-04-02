const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}backup_id`,
                label: `Backup ID of the service master. - [${labelPrefix}backup_id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_name`,
                label: `Name of the backup service. - [${labelPrefix}backup_name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_ip`,
                label: `IP address of the backup service. - [${labelPrefix}backup_ip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_type`,
                label: `Type of the backup service. - [${labelPrefix}backup_type]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_hdsize`,
                label: `Size of the backup service's hard drive. - [${labelPrefix}backup_hdsize]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_hdfree`,
                label: `Amount of free space on the backup service's hard drive. - [${labelPrefix}backup_hdfree]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_last_update`,
                label: `Last update timestamp of the backup service. - [${labelPrefix}backup_last_update]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}backup_available`,
                label: `Availability status of the backup service. - [${labelPrefix}backup_available]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_iowait`,
                label: `I/O wait status of the backup service. - [${labelPrefix}backup_iowait]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}backup_order`,
                label: `Order associated with the backup service. - [${labelPrefix}backup_order]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'backup_id': bundle.inputData?.[`${keyPrefix}backup_id`],
            'backup_name': bundle.inputData?.[`${keyPrefix}backup_name`],
            'backup_ip': bundle.inputData?.[`${keyPrefix}backup_ip`],
            'backup_type': bundle.inputData?.[`${keyPrefix}backup_type`],
            'backup_hdsize': bundle.inputData?.[`${keyPrefix}backup_hdsize`],
            'backup_hdfree': bundle.inputData?.[`${keyPrefix}backup_hdfree`],
            'backup_last_update': bundle.inputData?.[`${keyPrefix}backup_last_update`],
            'backup_available': bundle.inputData?.[`${keyPrefix}backup_available`],
            'backup_iowait': bundle.inputData?.[`${keyPrefix}backup_iowait`],
            'backup_order': bundle.inputData?.[`${keyPrefix}backup_order`],
        }
    },
}
