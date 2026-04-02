const utils = require('../utils/utils');
const VpsSnapshot = require('../models/VpsSnapshot');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}spice`,
                label: `Spice - [${labelPrefix}spice]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}snapshots`,
                label: `[${labelPrefix}snapshots]`,
                children: VpsSnapshot.fields(`${keyPrefix}snapshots${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'spice': bundle.inputData?.[`${keyPrefix}spice`],
            'snapshots': utils.childMapping(bundle.inputData?.[`${keyPrefix}snapshots`], `${keyPrefix}snapshots`, VpsSnapshot),
        }
    },
}
