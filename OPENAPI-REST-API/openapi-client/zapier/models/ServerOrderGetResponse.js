const utils = require('../utils/utils');
const AssetServer = require('../models/AssetServer');
const ConfigIds = require('../models/ConfigIds');
const ConfigLists = require('../models/ConfigLists');
const Cpu = require('../models/Cpu');
const CpuWithDefaults = require('../models/CpuWithDefaults');
const FieldLabel = require('../models/FieldLabel');
const FormValues = require('../models/FormValues');
const Region = require('../models/Region');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...FormValues.fields(`${keyPrefix}form_values`, isInput),
            ...ConfigIds.fields(`${keyPrefix}config_ids`, isInput),
            {
                key: `${keyPrefix}cpu`,
                label: `[${labelPrefix}cpu]`,
                required: true,
                type: 'integer',
            },
            ...Cpu.fields(`${keyPrefix}cpu_li`, isInput),
            ...ConfigLists.fields(`${keyPrefix}config_li`, isInput),
            {
                key: `${keyPrefix}frequency`,
                label: `[${labelPrefix}frequency]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}currency`,
                label: `[${labelPrefix}currency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}step`,
                label: `[${labelPrefix}step]`,
                required: true,
                type: 'string',
            },
            ...FieldLabel.fields(`${keyPrefix}field_label`, isInput),
            {
                key: `${keyPrefix}cpu_cores`,
                label: `[${labelPrefix}cpu_cores]`,
                type: 'object',
            },
            {
                key: `${keyPrefix}currencySymbol`,
                label: `[${labelPrefix}currencySymbol]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custid`,
                label: `[${labelPrefix}custid]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ima`,
                label: `[${labelPrefix}ima]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}regions`,
                label: `[${labelPrefix}regions]`,
                children: Region.fields(`${keyPrefix}regions${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}asset_servers`,
                label: `[${labelPrefix}asset_servers]`,
                children: AssetServer.fields(`${keyPrefix}asset_servers${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}buy_it_servers`,
                label: `[${labelPrefix}buy_it_servers]`,
                list: true,
                type: 'object',
            },
            {
                key: `${keyPrefix}display_showmore`,
                label: `[${labelPrefix}display_showmore]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cust_discount`,
                label: `[${labelPrefix}cust_discount]`,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'form_values': utils.removeIfEmpty(FormValues.mapping(bundle, `${keyPrefix}form_values`)),
            'config_ids': utils.removeIfEmpty(ConfigIds.mapping(bundle, `${keyPrefix}config_ids`)),
            'cpu': bundle.inputData?.[`${keyPrefix}cpu`],
            'cpu_li': utils.removeIfEmpty(Cpu.mapping(bundle, `${keyPrefix}cpu_li`)),
            'config_li': utils.removeIfEmpty(ConfigLists.mapping(bundle, `${keyPrefix}config_li`)),
            'frequency': bundle.inputData?.[`${keyPrefix}frequency`],
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'step': bundle.inputData?.[`${keyPrefix}step`],
            'field_label': utils.removeIfEmpty(FieldLabel.mapping(bundle, `${keyPrefix}field_label`)),
            'cpu_cores': bundle.inputData?.[`${keyPrefix}cpu_cores`],
            'currencySymbol': bundle.inputData?.[`${keyPrefix}currencySymbol`],
            'custid': bundle.inputData?.[`${keyPrefix}custid`],
            'ima': bundle.inputData?.[`${keyPrefix}ima`],
            'regions': utils.childMapping(bundle.inputData?.[`${keyPrefix}regions`], `${keyPrefix}regions`, Region),
            'asset_servers': utils.childMapping(bundle.inputData?.[`${keyPrefix}asset_servers`], `${keyPrefix}asset_servers`, AssetServer),
            'buy_it_servers': bundle.inputData?.[`${keyPrefix}buy_it_servers`],
            'display_showmore': bundle.inputData?.[`${keyPrefix}display_showmore`],
            'cust_discount': bundle.inputData?.[`${keyPrefix}cust_discount`],
        }
    },
}
