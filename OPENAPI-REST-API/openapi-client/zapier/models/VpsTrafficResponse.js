const utils = require('../utils/utils');
const VpsTrafficDataSectionResponse = require('../models/VpsTrafficDataSectionResponse');
const VpsTrafficHistoryResponse = require('../models/VpsTrafficHistoryResponse');
const VpsTrafficTotalsResposne = require('../models/VpsTrafficTotalsResposne');
const VpsTrafficUsageResponse = require('../models/VpsTrafficUsageResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}target`,
                label: `[${labelPrefix}target]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}interval`,
                label: `[${labelPrefix}interval]`,
                required: true,
                type: 'integer',
            },
            ...VpsTrafficHistoryResponse.fields(`${keyPrefix}history`, isInput),
            {
                key: `${keyPrefix}last`,
                label: `[${labelPrefix}last]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}times`,
                label: `[${labelPrefix}times]`,
                required: true,
                list: true,
                type: 'string',
            },
            ...VpsTrafficTotalsResposne.fields(`${keyPrefix}totals`, isInput),
            ...VpsTrafficUsageResponse.fields(`${keyPrefix}usage`, isInput),
            {
                key: `${keyPrefix}data`,
                label: `[${labelPrefix}data]`,
                children: VpsTrafficDataSectionResponse.fields(`${keyPrefix}data${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'target': bundle.inputData?.[`${keyPrefix}target`],
            'interval': bundle.inputData?.[`${keyPrefix}interval`],
            'history': utils.removeIfEmpty(VpsTrafficHistoryResponse.mapping(bundle, `${keyPrefix}history`)),
            'last': bundle.inputData?.[`${keyPrefix}last`],
            'times': bundle.inputData?.[`${keyPrefix}times`],
            'totals': utils.removeIfEmpty(VpsTrafficTotalsResposne.mapping(bundle, `${keyPrefix}totals`)),
            'usage': utils.removeIfEmpty(VpsTrafficUsageResponse.mapping(bundle, `${keyPrefix}usage`)),
            'data': utils.childMapping(bundle.inputData?.[`${keyPrefix}data`], `${keyPrefix}data`, VpsTrafficDataSectionResponse),
        }
    },
}
