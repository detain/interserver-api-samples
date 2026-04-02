const utils = require('../utils/utils');
const WebsiteTableRow = require('../models/WebsiteTableRow');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `Title of the table - [${labelPrefix}title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}rows`,
                label: `[${labelPrefix}rows]`,
                children: WebsiteTableRow.fields(`${keyPrefix}rows${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'rows': utils.childMapping(bundle.inputData?.[`${keyPrefix}rows`], `${keyPrefix}rows`, WebsiteTableRow),
        }
    },
}
