const utils = require('../utils/utils');
const BackupIPInfoRow = require('../models/BackupIPInfoRow');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `Title of the IP information table. - [${labelPrefix}title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}rows`,
                label: `[${labelPrefix}rows]`,
                children: BackupIPInfoRow.fields(`${keyPrefix}rows${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'rows': utils.childMapping(bundle.inputData?.[`${keyPrefix}rows`], `${keyPrefix}rows`, BackupIPInfoRow),
        }
    },
}
