const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}custPortal`,
                label: `URL of the customer's current hosting portal. - [${labelPrefix}custPortal]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}regEmail`,
                label: `Registered email address at the current host. - [${labelPrefix}regEmail]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}password`,
                label: `Password for the current hosting account. - [${labelPrefix}password]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ctrlPanel`,
                label: `URL of the current control panel. - [${labelPrefix}ctrlPanel]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ftpUsername`,
                label: `FTP username at the current host. - [${labelPrefix}ftpUsername]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ftpPassword`,
                label: `FTP password at the current host. - [${labelPrefix}ftpPassword]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}siteBusyMig`,
                label: `Information about site traffic during migration. - [${labelPrefix}siteBusyMig]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}splReqMig`,
                label: `Special requirements for the migration. - [${labelPrefix}splReqMig]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domainReg`,
                label: `Whether domain registration assistance is needed. - [${labelPrefix}domainReg]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}dataMig`,
                label: `Data migration timing preference. - [${labelPrefix}dataMig]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domainRegPortal`,
                label: `Domain registrar portal URL. - [${labelPrefix}domainRegPortal]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domainRegEmail`,
                label: `Email for the domain registrar account. - [${labelPrefix}domainRegEmail]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}domainRegPassword`,
                label: `Password for the domain registrar account. - [${labelPrefix}domainRegPassword]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'custPortal': bundle.inputData?.[`${keyPrefix}custPortal`],
            'regEmail': bundle.inputData?.[`${keyPrefix}regEmail`],
            'password': bundle.inputData?.[`${keyPrefix}password`],
            'ctrlPanel': bundle.inputData?.[`${keyPrefix}ctrlPanel`],
            'ftpUsername': bundle.inputData?.[`${keyPrefix}ftpUsername`],
            'ftpPassword': bundle.inputData?.[`${keyPrefix}ftpPassword`],
            'siteBusyMig': bundle.inputData?.[`${keyPrefix}siteBusyMig`],
            'splReqMig': bundle.inputData?.[`${keyPrefix}splReqMig`],
            'domainReg': bundle.inputData?.[`${keyPrefix}domainReg`],
            'dataMig': bundle.inputData?.[`${keyPrefix}dataMig`],
            'domainRegPortal': bundle.inputData?.[`${keyPrefix}domainRegPortal`],
            'domainRegEmail': bundle.inputData?.[`${keyPrefix}domainRegEmail`],
            'domainRegPassword': bundle.inputData?.[`${keyPrefix}domainRegPassword`],
        }
    },
}
