const utils = require('../utils/utils');
const HardDrive = require('../models/HardDrive');
const MemoryOption = require('../models/MemoryOption');

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
                key: `${keyPrefix}short_desc`,
                label: `[${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `[${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                label: `[${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}speed`,
                label: `[${labelPrefix}speed]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cores`,
                label: `[${labelPrefix}num_cores]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cpus`,
                label: `[${labelPrefix}num_cpus]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}benchmark`,
                label: `[${labelPrefix}benchmark]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `[${labelPrefix}monthly_price]`,
                type: 'number',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `[${labelPrefix}monthly_price_display]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_ram`,
                label: `[${labelPrefix}max_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}min_ram`,
                label: `[${labelPrefix}min_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_lff`,
                label: `[${labelPrefix}max_lff]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_sff`,
                label: `[${labelPrefix}max_sff]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_nve`,
                label: `[${labelPrefix}max_nve]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}visible`,
                label: `[${labelPrefix}visible]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}active`,
                label: `[${labelPrefix}active]`,
                type: 'string',
            },
            ...MemoryOption.fields(`${keyPrefix}memory_det`, isInput),
            ...HardDrive.fields(`${keyPrefix}hd_det`, isInput),
            {
                key: `${keyPrefix}monthly_fee`,
                label: `[${labelPrefix}monthly_fee]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'long_desc': bundle.inputData?.[`${keyPrefix}long_desc`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'speed': bundle.inputData?.[`${keyPrefix}speed`],
            'num_cores': bundle.inputData?.[`${keyPrefix}num_cores`],
            'num_cpus': bundle.inputData?.[`${keyPrefix}num_cpus`],
            'benchmark': bundle.inputData?.[`${keyPrefix}benchmark`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
            'max_ram': bundle.inputData?.[`${keyPrefix}max_ram`],
            'min_ram': bundle.inputData?.[`${keyPrefix}min_ram`],
            'max_lff': bundle.inputData?.[`${keyPrefix}max_lff`],
            'max_sff': bundle.inputData?.[`${keyPrefix}max_sff`],
            'max_nve': bundle.inputData?.[`${keyPrefix}max_nve`],
            'visible': bundle.inputData?.[`${keyPrefix}visible`],
            'active': bundle.inputData?.[`${keyPrefix}active`],
            'memory_det': utils.removeIfEmpty(MemoryOption.mapping(bundle, `${keyPrefix}memory_det`)),
            'hd_det': utils.removeIfEmpty(HardDrive.mapping(bundle, `${keyPrefix}hd_det`)),
            'monthly_fee': bundle.inputData?.[`${keyPrefix}monthly_fee`],
        }
    },
}
