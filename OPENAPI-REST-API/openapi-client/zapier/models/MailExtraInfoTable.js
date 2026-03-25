const utils = require('../utils/utils');
const MailExtraInfoTableRow = require('../models/MailExtraInfoTableRow');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `The title of the extra info table. - [${labelPrefix}title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}rows`,
                label: `[${labelPrefix}rows]`,
                children: MailExtraInfoTableRow.fields(`${keyPrefix}rows${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'rows': utils.childMapping(bundle.inputData?.[`${keyPrefix}rows`], `${keyPrefix}rows`, MailExtraInfoTableRow),
        }
    },
}
