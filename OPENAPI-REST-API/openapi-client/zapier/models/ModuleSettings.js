const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}SERVICE_ID_OFFSET`,
                label: `[${labelPrefix}SERVICE_ID_OFFSET]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}USE_REPEAT_INVOICE`,
                label: `[${labelPrefix}USE_REPEAT_INVOICE]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}USE_PACKAGES`,
                label: `[${labelPrefix}USE_PACKAGES]`,
                required: true,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}BILLING_DAYS_OFFSET`,
                label: `[${labelPrefix}BILLING_DAYS_OFFSET]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}IMGNAME`,
                label: `[${labelPrefix}IMGNAME]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}REPEAT_BILLING_METHOD`,
                label: `[${labelPrefix}REPEAT_BILLING_METHOD]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}DELETE_PENDING_DAYS`,
                label: `[${labelPrefix}DELETE_PENDING_DAYS]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SUSPEND_DAYS`,
                label: `[${labelPrefix}SUSPEND_DAYS]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SUSPEND_WARNING_DAYS`,
                label: `[${labelPrefix}SUSPEND_WARNING_DAYS]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}TITLE`,
                label: `[${labelPrefix}TITLE]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}MENUNAME`,
                label: `[${labelPrefix}MENUNAME]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}EMAIL_FROM`,
                label: `[${labelPrefix}EMAIL_FROM]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}TBLNAME`,
                label: `[${labelPrefix}TBLNAME]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}TABLE`,
                label: `[${labelPrefix}TABLE]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}TITLE_FIELD`,
                label: `[${labelPrefix}TITLE_FIELD]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}PREFIX`,
                label: `[${labelPrefix}PREFIX]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}TITLE_FIELD2`,
                label: `[${labelPrefix}TITLE_FIELD2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}TITLE_FIELD3`,
                label: `[${labelPrefix}TITLE_FIELD3]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'SERVICE_ID_OFFSET': bundle.inputData?.[`${keyPrefix}SERVICE_ID_OFFSET`],
            'USE_REPEAT_INVOICE': bundle.inputData?.[`${keyPrefix}USE_REPEAT_INVOICE`],
            'USE_PACKAGES': bundle.inputData?.[`${keyPrefix}USE_PACKAGES`],
            'BILLING_DAYS_OFFSET': bundle.inputData?.[`${keyPrefix}BILLING_DAYS_OFFSET`],
            'IMGNAME': bundle.inputData?.[`${keyPrefix}IMGNAME`],
            'REPEAT_BILLING_METHOD': bundle.inputData?.[`${keyPrefix}REPEAT_BILLING_METHOD`],
            'DELETE_PENDING_DAYS': bundle.inputData?.[`${keyPrefix}DELETE_PENDING_DAYS`],
            'SUSPEND_DAYS': bundle.inputData?.[`${keyPrefix}SUSPEND_DAYS`],
            'SUSPEND_WARNING_DAYS': bundle.inputData?.[`${keyPrefix}SUSPEND_WARNING_DAYS`],
            'TITLE': bundle.inputData?.[`${keyPrefix}TITLE`],
            'MENUNAME': bundle.inputData?.[`${keyPrefix}MENUNAME`],
            'EMAIL_FROM': bundle.inputData?.[`${keyPrefix}EMAIL_FROM`],
            'TBLNAME': bundle.inputData?.[`${keyPrefix}TBLNAME`],
            'TABLE': bundle.inputData?.[`${keyPrefix}TABLE`],
            'TITLE_FIELD': bundle.inputData?.[`${keyPrefix}TITLE_FIELD`],
            'PREFIX': bundle.inputData?.[`${keyPrefix}PREFIX`],
            'TITLE_FIELD2': bundle.inputData?.[`${keyPrefix}TITLE_FIELD2`],
            'TITLE_FIELD3': bundle.inputData?.[`${keyPrefix}TITLE_FIELD3`],
        }
    },
}
