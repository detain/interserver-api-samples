const utils = require('../utils/utils');
const AssetServer_CPU_inner = require('../models/AssetServer_CPU_inner');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `[${labelPrefix}id]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}Region`,
                label: `[${labelPrefix}Region]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `[${labelPrefix}price]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}CPU`,
                label: `[${labelPrefix}CPU]`,
                children: AssetServer_CPU_inner.fields(`${keyPrefix}CPU${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}Memory`,
                label: `[${labelPrefix}Memory]`,
                children: AssetServer_CPU_inner.fields(`${keyPrefix}Memory${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}Bandwidth`,
                label: `[${labelPrefix}Bandwidth]`,
                children: AssetServer_CPU_inner.fields(`${keyPrefix}Bandwidth${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}IPs`,
                label: `[${labelPrefix}IPs]`,
                children: AssetServer_CPU_inner.fields(`${keyPrefix}IPs${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}HD`,
                label: `[${labelPrefix}HD]`,
                type: 'object',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'Region': bundle.inputData?.[`${keyPrefix}Region`],
            'price': bundle.inputData?.[`${keyPrefix}price`],
            'CPU': utils.childMapping(bundle.inputData?.[`${keyPrefix}CPU`], `${keyPrefix}CPU`, AssetServer_CPU_inner),
            'Memory': utils.childMapping(bundle.inputData?.[`${keyPrefix}Memory`], `${keyPrefix}Memory`, AssetServer_CPU_inner),
            'Bandwidth': utils.childMapping(bundle.inputData?.[`${keyPrefix}Bandwidth`], `${keyPrefix}Bandwidth`, AssetServer_CPU_inner),
            'IPs': utils.childMapping(bundle.inputData?.[`${keyPrefix}IPs`], `${keyPrefix}IPs`, AssetServer_CPU_inner),
            'HD': bundle.inputData?.[`${keyPrefix}HD`],
        }
    },
}
