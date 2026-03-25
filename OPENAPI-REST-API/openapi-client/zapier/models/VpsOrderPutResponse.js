const utils = require('../utils/utils');
const AnyType = require('../models/AnyType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}continue`,
                label: `[${labelPrefix}continue]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}errors`,
                label: `[${labelPrefix}errors]`,
                children: .fields(`${keyPrefix}errors${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}coupon_code`,
                label: `[${labelPrefix}coupon_code]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}service_cost`,
                label: `[${labelPrefix}service_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}slice_cost`,
                label: `[${labelPrefix}slice_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}service_type`,
                label: `[${labelPrefix}service_type]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}repeat_slice_cost`,
                label: `[${labelPrefix}repeat_slice_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}original_slice_cost`,
                label: `[${labelPrefix}original_slice_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}original_cost`,
                label: `[${labelPrefix}original_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}repeat_service_cost`,
                label: `[${labelPrefix}repeat_service_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}monthly_service_cost`,
                label: `[${labelPrefix}monthly_service_cost]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}custid`,
                label: `[${labelPrefix}custid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}os`,
                label: `[${labelPrefix}os]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}slices`,
                label: `[${labelPrefix}slices]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}platform`,
                label: `[${labelPrefix}platform]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}controlpanel`,
                label: `[${labelPrefix}controlpanel]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}period`,
                label: `[${labelPrefix}period]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}location`,
                label: `[${labelPrefix}location]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}version`,
                label: `[${labelPrefix}version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}hostname`,
                label: `[${labelPrefix}hostname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}coupon`,
                label: `[${labelPrefix}coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}rootpass`,
                label: `[${labelPrefix}rootpass]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'continue': bundle.inputData?.[`${keyPrefix}continue`],
            'errors': utils.childMapping(bundle.inputData?.[`${keyPrefix}errors`], `${keyPrefix}errors`, AnyType),
            'coupon_code': bundle.inputData?.[`${keyPrefix}coupon_code`],
            'service_cost': bundle.inputData?.[`${keyPrefix}service_cost`],
            'slice_cost': bundle.inputData?.[`${keyPrefix}slice_cost`],
            'service_type': bundle.inputData?.[`${keyPrefix}service_type`],
            'repeat_slice_cost': bundle.inputData?.[`${keyPrefix}repeat_slice_cost`],
            'original_slice_cost': bundle.inputData?.[`${keyPrefix}original_slice_cost`],
            'original_cost': bundle.inputData?.[`${keyPrefix}original_cost`],
            'repeat_service_cost': bundle.inputData?.[`${keyPrefix}repeat_service_cost`],
            'monthly_service_cost': bundle.inputData?.[`${keyPrefix}monthly_service_cost`],
            'custid': bundle.inputData?.[`${keyPrefix}custid`],
            'os': bundle.inputData?.[`${keyPrefix}os`],
            'slices': bundle.inputData?.[`${keyPrefix}slices`],
            'platform': bundle.inputData?.[`${keyPrefix}platform`],
            'controlpanel': bundle.inputData?.[`${keyPrefix}controlpanel`],
            'period': bundle.inputData?.[`${keyPrefix}period`],
            'location': bundle.inputData?.[`${keyPrefix}location`],
            'version': bundle.inputData?.[`${keyPrefix}version`],
            'hostname': bundle.inputData?.[`${keyPrefix}hostname`],
            'coupon': bundle.inputData?.[`${keyPrefix}coupon`],
            'rootpass': bundle.inputData?.[`${keyPrefix}rootpass`],
        }
    },
}
