const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}type`,
                label: `Backup Type - [${labelPrefix}type]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}service`,
                label: `The service id such as vps  id. - [${labelPrefix}service]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}name`,
                label: `The name of the backup. - [${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}size`,
                label: `Size of the file in bytes - [${labelPrefix}size]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}date`,
                label: `The creation date of the backup in a unix timestamp. - [${labelPrefix}date]`,
                required: true,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'service': bundle.inputData?.[`${keyPrefix}service`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'size': bundle.inputData?.[`${keyPrefix}size`],
            'date': bundle.inputData?.[`${keyPrefix}date`],
        }
    },
}
