const utils = require('../utils/utils');
const BackupOrderPostResponse_cj_params = require('../models/BackupOrderPostResponse_cj_params');

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
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}total_cost`,
                label: `[${labelPrefix}total_cost]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}iid`,
                label: `[${labelPrefix}iid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}iids`,
                label: `[${labelPrefix}iids]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}real_iids`,
                label: `[${labelPrefix}real_iids]`,
                list: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}serviceId`,
                label: `[${labelPrefix}serviceId]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}invoice_description`,
                label: `[${labelPrefix}invoice_description]`,
                type: 'string',
            },
            ...BackupOrderPostResponse_cj_params.fields(`${keyPrefix}cj_params`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'continue': bundle.inputData?.[`${keyPrefix}continue`],
            'errors': bundle.inputData?.[`${keyPrefix}errors`],
            'total_cost': bundle.inputData?.[`${keyPrefix}total_cost`],
            'iid': bundle.inputData?.[`${keyPrefix}iid`],
            'iids': bundle.inputData?.[`${keyPrefix}iids`],
            'real_iids': bundle.inputData?.[`${keyPrefix}real_iids`],
            'serviceId': bundle.inputData?.[`${keyPrefix}serviceId`],
            'invoice_description': bundle.inputData?.[`${keyPrefix}invoice_description`],
            'cj_params': utils.removeIfEmpty(BackupOrderPostResponse_cj_params.mapping(bundle, `${keyPrefix}cj_params`)),
        }
    },
}
