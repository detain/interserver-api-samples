const utils = require('../utils/utils');
const DomainAllInfo_attributes_contact_set = require('../models/DomainAllInfo_attributes_contact_set');
const DomainNameServer = require('../models/DomainNameServer');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...DomainAllInfo_attributes_contact_set.fields(`${keyPrefix}contact_set`, isInput),
            {
                key: `${keyPrefix}registry_createdate`,
                label: `[${labelPrefix}registry_createdate]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}registry_expiredate`,
                label: `[${labelPrefix}registry_expiredate]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}tld_data`,
                label: `[${labelPrefix}tld_data]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}let_expire`,
                label: `[${labelPrefix}let_expire]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}auto_renew`,
                label: `[${labelPrefix}auto_renew]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}sponsoring_rsp`,
                label: `[${labelPrefix}sponsoring_rsp]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}gdpr_consent_status`,
                label: `[${labelPrefix}gdpr_consent_status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}nameserver_list`,
                label: `[${labelPrefix}nameserver_list]`,
                children: DomainNameServer.fields(`${keyPrefix}nameserver_list${!isInput ? '[]' : ''}`, isInput, true), 
            },
            {
                key: `${keyPrefix}registry_updatedate`,
                label: `[${labelPrefix}registry_updatedate]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_id`,
                label: `[${labelPrefix}affiliate_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}expiredate`,
                label: `[${labelPrefix}expiredate]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'contact_set': utils.removeIfEmpty(DomainAllInfo_attributes_contact_set.mapping(bundle, `${keyPrefix}contact_set`)),
            'registry_createdate': bundle.inputData?.[`${keyPrefix}registry_createdate`],
            'registry_expiredate': bundle.inputData?.[`${keyPrefix}registry_expiredate`],
            'tld_data': bundle.inputData?.[`${keyPrefix}tld_data`],
            'let_expire': bundle.inputData?.[`${keyPrefix}let_expire`],
            'auto_renew': bundle.inputData?.[`${keyPrefix}auto_renew`],
            'sponsoring_rsp': bundle.inputData?.[`${keyPrefix}sponsoring_rsp`],
            'gdpr_consent_status': bundle.inputData?.[`${keyPrefix}gdpr_consent_status`],
            'nameserver_list': utils.childMapping(bundle.inputData?.[`${keyPrefix}nameserver_list`], `${keyPrefix}nameserver_list`, DomainNameServer),
            'registry_updatedate': bundle.inputData?.[`${keyPrefix}registry_updatedate`],
            'affiliate_id': bundle.inputData?.[`${keyPrefix}affiliate_id`],
            'expiredate': bundle.inputData?.[`${keyPrefix}expiredate`],
        }
    },
}
