const utils = require('../utils/utils');
const TicketsRow = require('../models/TicketsRow');
const Tickets_countArray = require('../models/Tickets_countArray');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ima`,
                label: `[${labelPrefix}ima]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}custid`,
                label: `[${labelPrefix}custid]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}view`,
                label: `[${labelPrefix}view]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}currentPage`,
                label: `[${labelPrefix}currentPage]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}limit`,
                label: `[${labelPrefix}limit]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sortcol`,
                label: `[${labelPrefix}sortcol]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}sortdir`,
                label: `[${labelPrefix}sortdir]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}rowsOffset`,
                label: `[${labelPrefix}rowsOffset]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}tickets`,
                label: `[${labelPrefix}tickets]`,
                children: TicketsRow.fields(`${keyPrefix}tickets${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}pages`,
                label: `[${labelPrefix}pages]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}rowsTotal`,
                label: `[${labelPrefix}rowsTotal]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}inboxCount`,
                label: `[${labelPrefix}inboxCount]`,
                required: true,
                type: 'integer',
            },
            ...Tickets_countArray.fields(`${keyPrefix}countArray`, isInput),
            {
                key: `${keyPrefix}viewText`,
                label: `[${labelPrefix}viewText]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ima': bundle.inputData?.[`${keyPrefix}ima`],
            'custid': bundle.inputData?.[`${keyPrefix}custid`],
            'view': bundle.inputData?.[`${keyPrefix}view`],
            'currentPage': bundle.inputData?.[`${keyPrefix}currentPage`],
            'limit': bundle.inputData?.[`${keyPrefix}limit`],
            'sortcol': bundle.inputData?.[`${keyPrefix}sortcol`],
            'sortdir': bundle.inputData?.[`${keyPrefix}sortdir`],
            'rowsOffset': bundle.inputData?.[`${keyPrefix}rowsOffset`],
            'tickets': utils.childMapping(bundle.inputData?.[`${keyPrefix}tickets`], `${keyPrefix}tickets`, TicketsRow),
            'pages': bundle.inputData?.[`${keyPrefix}pages`],
            'rowsTotal': bundle.inputData?.[`${keyPrefix}rowsTotal`],
            'inboxCount': bundle.inputData?.[`${keyPrefix}inboxCount`],
            'countArray': utils.removeIfEmpty(Tickets_countArray.mapping(bundle, `${keyPrefix}countArray`)),
            'viewText': bundle.inputData?.[`${keyPrefix}viewText`],
        }
    },
}
