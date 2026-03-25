const utils = require('../utils/utils');
const MonthlyCounts = require('../models/MonthlyCounts');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...MonthlyCounts.fields(`${keyPrefix}default`, isInput),
            ...MonthlyCounts.fields(`${keyPrefix}failed`, isInput),
            ...MonthlyCounts.fields(`${keyPrefix}rejected`, isInput),
            ...MonthlyCounts.fields(`${keyPrefix}pending`, isInput),
            ...MonthlyCounts.fields(`${keyPrefix}locked`, isInput),
            ...MonthlyCounts.fields(`${keyPrefix}paid`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'default': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}default`)),
            'failed': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}failed`)),
            'rejected': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}rejected`)),
            'pending': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}pending`)),
            'locked': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}locked`)),
            'paid': utils.removeIfEmpty(MonthlyCounts.mapping(bundle, `${keyPrefix}paid`)),
        }
    },
}
