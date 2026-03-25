const utils = require('../utils/utils');
const buyItNowServerOrder_200_response_bandwidth_inner = require('../models/buyItNowServerOrder_200_response_bandwidth_inner');
const buyItNowServerOrder_200_response_cp_inner = require('../models/buyItNowServerOrder_200_response_cp_inner');
const buyItNowServerOrder_200_response_ips_inner = require('../models/buyItNowServerOrder_200_response_ips_inner');
const buyItNowServerOrder_200_response_os_inner = require('../models/buyItNowServerOrder_200_response_os_inner');
const buyItNowServerOrder_200_response_raid_inner = require('../models/buyItNowServerOrder_200_response_raid_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}bandwidth`,
                label: `[${labelPrefix}bandwidth]`,
                children: buyItNowServerOrder_200_response_bandwidth_inner.fields(`${keyPrefix}bandwidth${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}ips`,
                label: `[${labelPrefix}ips]`,
                children: buyItNowServerOrder_200_response_ips_inner.fields(`${keyPrefix}ips${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}os`,
                label: `[${labelPrefix}os]`,
                children: buyItNowServerOrder_200_response_os_inner.fields(`${keyPrefix}os${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}cp`,
                label: `[${labelPrefix}cp]`,
                children: buyItNowServerOrder_200_response_cp_inner.fields(`${keyPrefix}cp${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}raid`,
                label: `[${labelPrefix}raid]`,
                children: buyItNowServerOrder_200_response_raid_inner.fields(`${keyPrefix}raid${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'bandwidth': utils.childMapping(bundle.inputData?.[`${keyPrefix}bandwidth`], `${keyPrefix}bandwidth`, buyItNowServerOrder_200_response_bandwidth_inner),
            'ips': utils.childMapping(bundle.inputData?.[`${keyPrefix}ips`], `${keyPrefix}ips`, buyItNowServerOrder_200_response_ips_inner),
            'os': utils.childMapping(bundle.inputData?.[`${keyPrefix}os`], `${keyPrefix}os`, buyItNowServerOrder_200_response_os_inner),
            'cp': utils.childMapping(bundle.inputData?.[`${keyPrefix}cp`], `${keyPrefix}cp`, buyItNowServerOrder_200_response_cp_inner),
            'raid': utils.childMapping(bundle.inputData?.[`${keyPrefix}raid`], `${keyPrefix}raid`, buyItNowServerOrder_200_response_raid_inner),
        }
    },
}
