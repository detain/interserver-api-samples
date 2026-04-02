const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}osDistro`,
                label: `OS Distribution - [${labelPrefix}osDistro]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}slices`,
                label: `Number of slices - [${labelPrefix}slices]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}vpsPlatform`,
                label: `VPS Platform - [${labelPrefix}vpsPlatform]`,
                required: true,
                type: 'string',
                choices: [
                    'kvm',
                    'hyperv',
                    'kvmstorage',
                ],
            },
            {
                key: `${keyPrefix}period`,
                label: `Billing Period or Frequency - [${labelPrefix}period]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}location`,
                label: `Location - [${labelPrefix}location]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}osVersion`,
                label: `OS Version - [${labelPrefix}osVersion]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}hostname`,
                label: `The hostname to assign to the VPS - [${labelPrefix}hostname]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}rootpass`,
                label: `Root password to assign to the VVPS - [${labelPrefix}rootpass]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}controlpanel`,
                label: `Control Panel - [${labelPrefix}controlpanel]`,
                type: 'string',
                choices: [
                    'none',
                    'cpanel',
                    'da',
                ],
            },
            {
                key: `${keyPrefix}coupon`,
                label: `Coupon - [${labelPrefix}coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}comment`,
                label: `Order comments or notes - [${labelPrefix}comment]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'osDistro': bundle.inputData?.[`${keyPrefix}osDistro`],
            'slices': bundle.inputData?.[`${keyPrefix}slices`],
            'vpsPlatform': bundle.inputData?.[`${keyPrefix}vpsPlatform`],
            'period': bundle.inputData?.[`${keyPrefix}period`],
            'location': bundle.inputData?.[`${keyPrefix}location`],
            'osVersion': bundle.inputData?.[`${keyPrefix}osVersion`],
            'hostname': bundle.inputData?.[`${keyPrefix}hostname`],
            'rootpass': bundle.inputData?.[`${keyPrefix}rootpass`],
            'controlpanel': bundle.inputData?.[`${keyPrefix}controlpanel`],
            'coupon': bundle.inputData?.[`${keyPrefix}coupon`],
            'comment': bundle.inputData?.[`${keyPrefix}comment`],
        }
    },
}
