const utils = require('../utils/utils');
const ScrubIpFilterTypes_filters_value = require('../models/ScrubIpFilterTypes_filters_value');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `[${labelPrefix}success]`,
                type: 'boolean',
            },
            ...ScrubIpFilterTypes_filters_value.fields(`${keyPrefix}filters`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'filters': utils.removeIfEmpty(ScrubIpFilterTypes_filters_value.mapping(bundle, `${keyPrefix}filters`)),
        }
    },
}
