const utils = require('../utils/utils');
const VpsTrafficHistorySectionDataResponse = require('../models/VpsTrafficHistorySectionDataResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}data`,
                label: `[${labelPrefix}data]`,
                children: VpsTrafficHistorySectionDataResponse.fields(`${keyPrefix}data${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}times`,
                label: `[${labelPrefix}times]`,
                required: true,
                list: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'data': utils.childMapping(bundle.inputData?.[`${keyPrefix}data`], `${keyPrefix}data`, VpsTrafficHistorySectionDataResponse),
            'times': bundle.inputData?.[`${keyPrefix}times`],
        }
    },
}
