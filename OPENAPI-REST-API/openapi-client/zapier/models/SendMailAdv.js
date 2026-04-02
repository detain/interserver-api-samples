const utils = require('../utils/utils');
const EmailAddressName = require('../models/EmailAddressName');
const MailAttachment = require('../models/MailAttachment');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}subject`,
                label: `The subject or title of the email - [${labelPrefix}subject]`,
                required: true,
                type: 'string',
            },
            {
                key: `${keyPrefix}body`,
                label: `The main email contents. - [${labelPrefix}body]`,
                required: true,
                type: 'string',
            },
            ...EmailAddressName.fields(`${keyPrefix}from`, isInput),
            {
                key: `${keyPrefix}to`,
                label: `[${labelPrefix}to]`,
                children: EmailAddressName.fields(`${keyPrefix}to${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}replyto`,
                label: `[${labelPrefix}replyto]`,
                children: EmailAddressName.fields(`${keyPrefix}replyto${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}cc`,
                label: `[${labelPrefix}cc]`,
                children: EmailAddressName.fields(`${keyPrefix}cc${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}bcc`,
                label: `[${labelPrefix}bcc]`,
                children: EmailAddressName.fields(`${keyPrefix}bcc${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}attachments`,
                label: `[${labelPrefix}attachments]`,
                children: MailAttachment.fields(`${keyPrefix}attachments${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}id`,
                label: `(optional)  ID of the Mail order within our system to use as the Mail Account. - [${labelPrefix}id]`,
                type: 'number',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'subject': bundle.inputData?.[`${keyPrefix}subject`],
            'body': bundle.inputData?.[`${keyPrefix}body`],
            'from': utils.removeIfEmpty(EmailAddressName.mapping(bundle, `${keyPrefix}from`)),
            'to': utils.childMapping(bundle.inputData?.[`${keyPrefix}to`], `${keyPrefix}to`, EmailAddressName),
            'replyto': utils.childMapping(bundle.inputData?.[`${keyPrefix}replyto`], `${keyPrefix}replyto`, EmailAddressName),
            'cc': utils.childMapping(bundle.inputData?.[`${keyPrefix}cc`], `${keyPrefix}cc`, EmailAddressName),
            'bcc': utils.childMapping(bundle.inputData?.[`${keyPrefix}bcc`], `${keyPrefix}bcc`, EmailAddressName),
            'attachments': utils.childMapping(bundle.inputData?.[`${keyPrefix}attachments`], `${keyPrefix}attachments`, MailAttachment),
            'id': bundle.inputData?.[`${keyPrefix}id`],
        }
    },
}
