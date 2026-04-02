const utils = require('../utils/utils');
const Home_details = require('../models/Home_details');
const Home_services = require('../models/Home_services');
const Home_ticketStatus = require('../models/Home_ticketStatus');
const Home_ticketStatusView = require('../models/Home_ticketStatusView');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}last_login_ip`,
                label: `Last login IP. - [${labelPrefix}last_login_ip]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}last_login`,
                label: `Last login time. - [${labelPrefix}last_login]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}currency`,
                label: `Currency symbol. - [${labelPrefix}currency]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}amount`,
                label: `Amount with currency. - [${labelPrefix}amount]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}invoice_list`,
                label: `Number of invoices. - [${labelPrefix}invoice_list]`,
                required: true,
                type: 'integer',
            },
            {
                key: `${keyPrefix}balance`,
                label: `Balance with currency. - [${labelPrefix}balance]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}full_name`,
                label: `Users full name. - [${labelPrefix}full_name]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}email`,
                label: `User email address. - [${labelPrefix}email]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}tickets`,
                label: `List of tickets. - [${labelPrefix}tickets]`,
                required: true,
                list: true,
                type: 'string',
            },
            ...Home_ticketStatus.fields(`${keyPrefix}ticketStatus`, isInput),
            ...Home_ticketStatusView.fields(`${keyPrefix}ticketStatusView`, isInput),
            ...Home_details.fields(`${keyPrefix}details`, isInput),
            ...Home_services.fields(`${keyPrefix}services`, isInput),
            {
                key: `${keyPrefix}AFFILIATE_AMOUNT`,
                label: `Affiliate amount with currency. - [${labelPrefix}AFFILIATE_AMOUNT]`,
                required: true,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'last_login_ip': bundle.inputData?.[`${keyPrefix}last_login_ip`],
            'last_login': bundle.inputData?.[`${keyPrefix}last_login`],
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'amount': bundle.inputData?.[`${keyPrefix}amount`],
            'invoice_list': bundle.inputData?.[`${keyPrefix}invoice_list`],
            'balance': bundle.inputData?.[`${keyPrefix}balance`],
            'full_name': bundle.inputData?.[`${keyPrefix}full_name`],
            'email': bundle.inputData?.[`${keyPrefix}email`],
            'tickets': bundle.inputData?.[`${keyPrefix}tickets`],
            'ticketStatus': utils.removeIfEmpty(Home_ticketStatus.mapping(bundle, `${keyPrefix}ticketStatus`)),
            'ticketStatusView': utils.removeIfEmpty(Home_ticketStatusView.mapping(bundle, `${keyPrefix}ticketStatusView`)),
            'details': utils.removeIfEmpty(Home_details.mapping(bundle, `${keyPrefix}details`)),
            'services': utils.removeIfEmpty(Home_services.mapping(bundle, `${keyPrefix}services`)),
            'AFFILIATE_AMOUNT': bundle.inputData?.[`${keyPrefix}AFFILIATE_AMOUNT`],
        }
    },
}
