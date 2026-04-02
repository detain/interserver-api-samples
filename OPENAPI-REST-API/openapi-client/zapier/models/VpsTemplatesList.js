const utils = require('../utils/utils');
const VpsTemplateRow = require('../models/VpsTemplateRow');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}templates`,
                label: `[${labelPrefix}templates]`,
                children: VpsTemplateRow.fields(`${keyPrefix}templates${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'templates': utils.childMapping(bundle.inputData?.[`${keyPrefix}templates`], `${keyPrefix}templates`, VpsTemplateRow),
        }
    },
}
