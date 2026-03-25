const utils = require('../utils/utils');
const AccountInfoDataCcs = require('../models/AccountInfoDataCcs');
const AccountInfoData_email_settings = require('../models/AccountInfoData_email_settings');
const AccountInfoData_extra = require('../models/AccountInfoData_extra');
const AccountInfoData_fraudrecord = require('../models/AccountInfoData_fraudrecord');
const AccountInfoMaxMindResponse = require('../models/AccountInfoMaxMindResponse');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}group`,
                label: `[${labelPrefix}group]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address`,
                label: `[${labelPrefix}address]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}city`,
                label: `[${labelPrefix}city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}country`,
                label: `[${labelPrefix}country]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disable_cc`,
                label: `[${labelPrefix}disable_cc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}fraudrecord_score`,
                label: `[${labelPrefix}fraudrecord_score]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ima`,
                label: `[${labelPrefix}ima]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}name`,
                label: `[${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}payment_method`,
                label: `[${labelPrefix}payment_method]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}phone`,
                label: `[${labelPrefix}phone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}pin`,
                label: `[${labelPrefix}pin]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}state`,
                label: `[${labelPrefix}state]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}status`,
                label: `[${labelPrefix}status]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}zip`,
                label: `[${labelPrefix}zip]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}account_id`,
                label: `[${labelPrefix}account_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}account_lid`,
                label: `[${labelPrefix}account_lid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}address2`,
                label: `[${labelPrefix}address2]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_dock_description`,
                label: `[${labelPrefix}affiliate_dock_description]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_dock_title`,
                label: `[${labelPrefix}affiliate_dock_title]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_payment_method`,
                label: `[${labelPrefix}affiliate_payment_method]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}affiliate_paypal`,
                label: `[${labelPrefix}affiliate_paypal]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc`,
                label: `[${labelPrefix}cc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_auto`,
                label: `[${labelPrefix}cc_auto]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_exp`,
                label: `[${labelPrefix}cc_exp]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_type`,
                label: `[${labelPrefix}cc_type]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cc_whitelist`,
                label: `[${labelPrefix}cc_whitelist]`,
                type: 'string',
            },
            ...AccountInfoDataCcs.fields(`${keyPrefix}ccs`, isInput),
            {
                key: `${keyPrefix}ccs_added`,
                label: `[${labelPrefix}ccs_added]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}company`,
                label: `[${labelPrefix}company]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}currency`,
                label: `[${labelPrefix}currency]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disable_reinstall`,
                label: `[${labelPrefix}disable_reinstall]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}disable_reset`,
                label: `[${labelPrefix}disable_reset]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}email`,
                label: `[${labelPrefix}email]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}email_abuse`,
                label: `[${labelPrefix}email_abuse]`,
                type: 'string',
            },
            ...AccountInfoData_email_settings.fields(`${keyPrefix}email_settings`, isInput),
            ...AccountInfoData_extra.fields(`${keyPrefix}extra`, isInput),
            {
                key: `${keyPrefix}facebook_id`,
                label: `[${labelPrefix}facebook_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}facebook_url`,
                label: `[${labelPrefix}facebook_url]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}firstname`,
                label: `[${labelPrefix}firstname]`,
                type: 'string',
            },
            ...AccountInfoData_fraudrecord.fields(`${keyPrefix}fraudrecord`, isInput),
            {
                key: `${keyPrefix}github_id`,
                label: `[${labelPrefix}github_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}github_url`,
                label: `[${labelPrefix}github_url]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}google_id`,
                label: `[${labelPrefix}google_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}google_url`,
                label: `[${labelPrefix}google_url]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}innertell_id`,
                label: `[${labelPrefix}innertell_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}lastname`,
                label: `[${labelPrefix}lastname]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}locale`,
                label: `[${labelPrefix}locale]`,
                type: 'string',
            },
            ...AccountInfoMaxMindResponse.fields(`${keyPrefix}maxmind`, isInput),
            {
                key: `${keyPrefix}maxmind_score`,
                label: `[${labelPrefix}maxmind_score]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}mb_id`,
                label: `[${labelPrefix}mb_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}modernbill_id`,
                label: `[${labelPrefix}modernbill_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}picture`,
                label: `[${labelPrefix}picture]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}referrer_coupon`,
                label: `[${labelPrefix}referrer_coupon]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}reseller_markup`,
                label: `[${labelPrefix}reseller_markup]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}username`,
                label: `[${labelPrefix}username]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ssh_key`,
                label: `[${labelPrefix}ssh_key]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ssh_key_wrapped`,
                label: `[${labelPrefix}ssh_key_wrapped]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}api_key`,
                label: `[${labelPrefix}api_key]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}api_key_wrapped`,
                label: `[${labelPrefix}api_key_wrapped]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2fa_google_key`,
                label: `[${labelPrefix}2fa_google_key]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2fa_google_enabled`,
                label: `[${labelPrefix}2fa_google_enabled]`,
                type: 'boolean',
            },
            {
                key: `${keyPrefix}2fa_google`,
                label: `[${labelPrefix}2fa_google]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}2fa_google_split`,
                label: `[${labelPrefix}2fa_google_split]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}2fa_google_qr`,
                label: `[${labelPrefix}2fa_google_qr]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'group': bundle.inputData?.[`${keyPrefix}group`],
            'address': bundle.inputData?.[`${keyPrefix}address`],
            'city': bundle.inputData?.[`${keyPrefix}city`],
            'country': bundle.inputData?.[`${keyPrefix}country`],
            'disable_cc': bundle.inputData?.[`${keyPrefix}disable_cc`],
            'fraudrecord_score': bundle.inputData?.[`${keyPrefix}fraudrecord_score`],
            'ima': bundle.inputData?.[`${keyPrefix}ima`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'payment_method': bundle.inputData?.[`${keyPrefix}payment_method`],
            'phone': bundle.inputData?.[`${keyPrefix}phone`],
            'pin': bundle.inputData?.[`${keyPrefix}pin`],
            'state': bundle.inputData?.[`${keyPrefix}state`],
            'status': bundle.inputData?.[`${keyPrefix}status`],
            'zip': bundle.inputData?.[`${keyPrefix}zip`],
            'account_id': bundle.inputData?.[`${keyPrefix}account_id`],
            'account_lid': bundle.inputData?.[`${keyPrefix}account_lid`],
            'address2': bundle.inputData?.[`${keyPrefix}address2`],
            'affiliate_dock_description': bundle.inputData?.[`${keyPrefix}affiliate_dock_description`],
            'affiliate_dock_title': bundle.inputData?.[`${keyPrefix}affiliate_dock_title`],
            'affiliate_payment_method': bundle.inputData?.[`${keyPrefix}affiliate_payment_method`],
            'affiliate_paypal': bundle.inputData?.[`${keyPrefix}affiliate_paypal`],
            'cc': bundle.inputData?.[`${keyPrefix}cc`],
            'cc_auto': bundle.inputData?.[`${keyPrefix}cc_auto`],
            'cc_exp': bundle.inputData?.[`${keyPrefix}cc_exp`],
            'cc_type': bundle.inputData?.[`${keyPrefix}cc_type`],
            'cc_whitelist': bundle.inputData?.[`${keyPrefix}cc_whitelist`],
            'ccs': utils.removeIfEmpty(AccountInfoDataCcs.mapping(bundle, `${keyPrefix}ccs`)),
            'ccs_added': bundle.inputData?.[`${keyPrefix}ccs_added`],
            'company': bundle.inputData?.[`${keyPrefix}company`],
            'currency': bundle.inputData?.[`${keyPrefix}currency`],
            'disable_reinstall': bundle.inputData?.[`${keyPrefix}disable_reinstall`],
            'disable_reset': bundle.inputData?.[`${keyPrefix}disable_reset`],
            'email': bundle.inputData?.[`${keyPrefix}email`],
            'email_abuse': bundle.inputData?.[`${keyPrefix}email_abuse`],
            'email_settings': utils.removeIfEmpty(AccountInfoData_email_settings.mapping(bundle, `${keyPrefix}email_settings`)),
            'extra': utils.removeIfEmpty(AccountInfoData_extra.mapping(bundle, `${keyPrefix}extra`)),
            'facebook_id': bundle.inputData?.[`${keyPrefix}facebook_id`],
            'facebook_url': bundle.inputData?.[`${keyPrefix}facebook_url`],
            'firstname': bundle.inputData?.[`${keyPrefix}firstname`],
            'fraudrecord': utils.removeIfEmpty(AccountInfoData_fraudrecord.mapping(bundle, `${keyPrefix}fraudrecord`)),
            'github_id': bundle.inputData?.[`${keyPrefix}github_id`],
            'github_url': bundle.inputData?.[`${keyPrefix}github_url`],
            'google_id': bundle.inputData?.[`${keyPrefix}google_id`],
            'google_url': bundle.inputData?.[`${keyPrefix}google_url`],
            'innertell_id': bundle.inputData?.[`${keyPrefix}innertell_id`],
            'lastname': bundle.inputData?.[`${keyPrefix}lastname`],
            'locale': bundle.inputData?.[`${keyPrefix}locale`],
            'maxmind': utils.removeIfEmpty(AccountInfoMaxMindResponse.mapping(bundle, `${keyPrefix}maxmind`)),
            'maxmind_score': bundle.inputData?.[`${keyPrefix}maxmind_score`],
            'mb_id': bundle.inputData?.[`${keyPrefix}mb_id`],
            'modernbill_id': bundle.inputData?.[`${keyPrefix}modernbill_id`],
            'picture': bundle.inputData?.[`${keyPrefix}picture`],
            'referrer_coupon': bundle.inputData?.[`${keyPrefix}referrer_coupon`],
            'reseller_markup': bundle.inputData?.[`${keyPrefix}reseller_markup`],
            'username': bundle.inputData?.[`${keyPrefix}username`],
            'ssh_key': bundle.inputData?.[`${keyPrefix}ssh_key`],
            'ssh_key_wrapped': bundle.inputData?.[`${keyPrefix}ssh_key_wrapped`],
            'api_key': bundle.inputData?.[`${keyPrefix}api_key`],
            'api_key_wrapped': bundle.inputData?.[`${keyPrefix}api_key_wrapped`],
            '2fa_google_key': bundle.inputData?.[`${keyPrefix}2fa_google_key`],
            '2fa_google_enabled': bundle.inputData?.[`${keyPrefix}2fa_google_enabled`],
            '2fa_google': bundle.inputData?.[`${keyPrefix}2fa_google`],
            '2fa_google_split': bundle.inputData?.[`${keyPrefix}2fa_google_split`],
            '2fa_google_qr': bundle.inputData?.[`${keyPrefix}2fa_google_qr`],
        }
    },
}
