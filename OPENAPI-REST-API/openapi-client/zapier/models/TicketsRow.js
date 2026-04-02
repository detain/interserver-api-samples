const utils = require('../utils/utils');
const AnyType = require('../models/AnyType');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}title`,
                label: `[${labelPrefix}title]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ticketmaskid`,
                label: `[${labelPrefix}ticketmaskid]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}lastreplier`,
                label: `[${labelPrefix}lastreplier]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}status`,
                label: `[${labelPrefix}status]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}priority`,
                label: `[${labelPrefix}priority]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}total_replies`,
                label: `[${labelPrefix}total_replies]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}lastactivity`,
                label: `[${labelPrefix}lastactivity]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}departmenttitle`,
                label: `[${labelPrefix}departmenttitle]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}ticketid`,
                label: `[${labelPrefix}ticketid]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}can_close`,
                label: `[${labelPrefix}can_close]`,
                required: true,
                type: 'string',
            },
            ....fields(`${keyPrefix}attachments`, isInput),
            {
                key: `${keyPrefix}status_text`,
                label: `[${labelPrefix}status_text]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}checked`,
                label: `[${labelPrefix}checked]`,
                required: true,
                type: 'boolean',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'title': bundle.inputData?.[`${keyPrefix}title`],
            'ticketmaskid': bundle.inputData?.[`${keyPrefix}ticketmaskid`],
            'lastreplier': bundle.inputData?.[`${keyPrefix}lastreplier`],
            'status': bundle.inputData?.[`${keyPrefix}status`],
            'priority': bundle.inputData?.[`${keyPrefix}priority`],
            'total_replies': bundle.inputData?.[`${keyPrefix}total_replies`],
            'lastactivity': bundle.inputData?.[`${keyPrefix}lastactivity`],
            'departmenttitle': bundle.inputData?.[`${keyPrefix}departmenttitle`],
            'ticketid': bundle.inputData?.[`${keyPrefix}ticketid`],
            'can_close': bundle.inputData?.[`${keyPrefix}can_close`],
            'attachments': utils.removeIfEmpty(.mapping(bundle, `${keyPrefix}attachments`)),
            'status_text': bundle.inputData?.[`${keyPrefix}status_text`],
            'checked': bundle.inputData?.[`${keyPrefix}checked`],
        }
    },
}
