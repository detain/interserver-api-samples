const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}id`,
                label: `CPU ID. - [${labelPrefix}id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price`,
                label: `CPU price. - [${labelPrefix}price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}img`,
                label: `CPU image. - [${labelPrefix}img]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}short_desc`,
                label: `Short description of the CPU. - [${labelPrefix}short_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}long_desc`,
                label: `Long description of the CPU. - [${labelPrefix}long_desc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}location`,
                label: `Location of the CPU. - [${labelPrefix}location]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}fsb`,
                label: `Front Side Bus information. - [${labelPrefix}fsb]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}manu`,
                label: `Manufacturer information. - [${labelPrefix}manu]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}type`,
                label: `CPU type. - [${labelPrefix}type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}speed`,
                label: `CPU speed. - [${labelPrefix}speed]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cache`,
                label: `Cache information. - [${labelPrefix}cache]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}active`,
                label: `Active status. - [${labelPrefix}active]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cores`,
                label: `Number of cores. - [${labelPrefix}num_cores]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}num_cpus`,
                label: `Number of CPUs. - [${labelPrefix}num_cpus]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}benchmark`,
                label: `CPU benchmark. - [${labelPrefix}benchmark]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price`,
                label: `Monthly price. - [${labelPrefix}monthly_price]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}max_ram`,
                label: `Maximum RAM supported. - [${labelPrefix}max_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}min_ram`,
                label: `Minimum RAM required. - [${labelPrefix}min_ram]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_lff`,
                label: `Maximum LFF (Large Form Factor) supported. - [${labelPrefix}max_lff]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_sff`,
                label: `Maximum SFF (Small Form Factor) supported. - [${labelPrefix}max_sff]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}max_nve`,
                label: `Maximum NVMe drives supported. - [${labelPrefix}max_nve]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}visible`,
                label: `Visibility status. - [${labelPrefix}visible]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hd_ids`,
                label: `Hard drive IDs. - [${labelPrefix}hd_ids]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}price_display`,
                label: `Display of CPU price. - [${labelPrefix}price_display]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}monthly_price_display`,
                label: `Display of monthly CPU price. - [${labelPrefix}monthly_price_display]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'id': bundle.inputData?.[`${keyPrefix}id`],
            'price': bundle.inputData?.[`${keyPrefix}price`],
            'img': bundle.inputData?.[`${keyPrefix}img`],
            'short_desc': bundle.inputData?.[`${keyPrefix}short_desc`],
            'long_desc': bundle.inputData?.[`${keyPrefix}long_desc`],
            'location': bundle.inputData?.[`${keyPrefix}location`],
            'fsb': bundle.inputData?.[`${keyPrefix}fsb`],
            'manu': bundle.inputData?.[`${keyPrefix}manu`],
            'type': bundle.inputData?.[`${keyPrefix}type`],
            'speed': bundle.inputData?.[`${keyPrefix}speed`],
            'cache': bundle.inputData?.[`${keyPrefix}cache`],
            'active': bundle.inputData?.[`${keyPrefix}active`],
            'num_cores': bundle.inputData?.[`${keyPrefix}num_cores`],
            'num_cpus': bundle.inputData?.[`${keyPrefix}num_cpus`],
            'benchmark': bundle.inputData?.[`${keyPrefix}benchmark`],
            'monthly_price': bundle.inputData?.[`${keyPrefix}monthly_price`],
            'max_ram': bundle.inputData?.[`${keyPrefix}max_ram`],
            'min_ram': bundle.inputData?.[`${keyPrefix}min_ram`],
            'max_lff': bundle.inputData?.[`${keyPrefix}max_lff`],
            'max_sff': bundle.inputData?.[`${keyPrefix}max_sff`],
            'max_nve': bundle.inputData?.[`${keyPrefix}max_nve`],
            'visible': bundle.inputData?.[`${keyPrefix}visible`],
            'hd_ids': bundle.inputData?.[`${keyPrefix}hd_ids`],
            'price_display': bundle.inputData?.[`${keyPrefix}price_display`],
            'monthly_price_display': bundle.inputData?.[`${keyPrefix}monthly_price_display`],
        }
    },
}
