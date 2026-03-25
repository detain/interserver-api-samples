const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `Snapshot name. - [${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}used`,
                label: `Disk space used by this snapshot in bytes. - [${labelPrefix}used]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}date`,
                label: `Unix timestamp of when the snapshot was created. - [${labelPrefix}date]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'used': bundle.inputData?.[`${keyPrefix}used`],
            'date': bundle.inputData?.[`${keyPrefix}date`],
        }
    },
}
