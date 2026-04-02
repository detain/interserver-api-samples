const utils = require('../utils/utils');
const TicketCustomFieldDetails = require('../models/TicketCustomFieldDetails');
const TicketDetails = require('../models/TicketDetails');
const TicketPostDetails = require('../models/TicketPostDetails');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}success`,
                label: `[${labelPrefix}success]`,
                required: true,
                type: 'boolean',
            },
            ...TicketDetails.fields(`${keyPrefix}ticket`, isInput),
            ...TicketCustomFieldDetails.fields(`${keyPrefix}ticket_custom_fields`, isInput),
            ...TicketPostDetails.fields(`${keyPrefix}ticket_posts`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'success': bundle.inputData?.[`${keyPrefix}success`],
            'ticket': utils.removeIfEmpty(TicketDetails.mapping(bundle, `${keyPrefix}ticket`)),
            'ticket_custom_fields': utils.removeIfEmpty(TicketCustomFieldDetails.mapping(bundle, `${keyPrefix}ticket_custom_fields`)),
            'ticket_posts': utils.removeIfEmpty(TicketPostDetails.mapping(bundle, `${keyPrefix}ticket_posts`)),
        }
    },
}
