const utils = require('../utils/utils');
const AccountInfoMaxMindResponse_riskScore = require('../models/AccountInfoMaxMindResponse_riskScore');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}distance`,
                label: `[${labelPrefix}distance]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}countryMatch`,
                label: `[${labelPrefix}countryMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}countryCode`,
                label: `[${labelPrefix}countryCode]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}freeMail`,
                label: `[${labelPrefix}freeMail]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}anonymousProxy`,
                label: `[${labelPrefix}anonymousProxy]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}score`,
                label: `[${labelPrefix}score]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binMatch`,
                label: `[${labelPrefix}binMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binCountry`,
                label: `[${labelPrefix}binCountry]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}err`,
                label: `[${labelPrefix}err]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}proxyScore`,
                label: `[${labelPrefix}proxyScore]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_region`,
                label: `[${labelPrefix}ip_region]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_city`,
                label: `[${labelPrefix}ip_city]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_latitude`,
                label: `[${labelPrefix}ip_latitude]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_longitude`,
                label: `[${labelPrefix}ip_longitude]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binName`,
                label: `[${labelPrefix}binName]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_isp`,
                label: `[${labelPrefix}ip_isp]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_org`,
                label: `[${labelPrefix}ip_org]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binNameMatch`,
                label: `[${labelPrefix}binNameMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binPhoneMatch`,
                label: `[${labelPrefix}binPhoneMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}binPhone`,
                label: `[${labelPrefix}binPhone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}custPhoneInBillingLoc`,
                label: `[${labelPrefix}custPhoneInBillingLoc]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}highRiskCountry`,
                label: `[${labelPrefix}highRiskCountry]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}queriesRemaining`,
                label: `[${labelPrefix}queriesRemaining]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}cityPostalMatch`,
                label: `[${labelPrefix}cityPostalMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}shipCityPostalMatch`,
                label: `[${labelPrefix}shipCityPostalMatch]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}maxmindID`,
                label: `[${labelPrefix}maxmindID]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_asnum`,
                label: `[${labelPrefix}ip_asnum]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_userType`,
                label: `[${labelPrefix}ip_userType]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_countryConf`,
                label: `[${labelPrefix}ip_countryConf]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_regionConf`,
                label: `[${labelPrefix}ip_regionConf]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_cityConf`,
                label: `[${labelPrefix}ip_cityConf]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_postalCode`,
                label: `[${labelPrefix}ip_postalCode]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_postalConf`,
                label: `[${labelPrefix}ip_postalConf]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_accuracyRadius`,
                label: `[${labelPrefix}ip_accuracyRadius]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_netSpeedCell`,
                label: `[${labelPrefix}ip_netSpeedCell]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_metroCode`,
                label: `[${labelPrefix}ip_metroCode]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_areaCode`,
                label: `[${labelPrefix}ip_areaCode]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_timeZone`,
                label: `[${labelPrefix}ip_timeZone]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_regionName`,
                label: `[${labelPrefix}ip_regionName]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_domain`,
                label: `[${labelPrefix}ip_domain]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_countryName`,
                label: `[${labelPrefix}ip_countryName]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_continentCode`,
                label: `[${labelPrefix}ip_continentCode]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}ip_corporateProxy`,
                label: `[${labelPrefix}ip_corporateProxy]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}carderEmail`,
                label: `[${labelPrefix}carderEmail]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}highRiskUsername`,
                label: `[${labelPrefix}highRiskUsername]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}highRiskPassword`,
                label: `[${labelPrefix}highRiskPassword]`,
                type: 'string',
            },
            ...AccountInfoMaxMindResponse_riskScore.fields(`${keyPrefix}riskScore`, isInput),
            {
                key: `${keyPrefix}isTransProxy`,
                label: `[${labelPrefix}isTransProxy]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}prepaid`,
                label: `[${labelPrefix}prepaid]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}minfraud_version`,
                label: `[${labelPrefix}minfraud_version]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}service_level`,
                label: `[${labelPrefix}service_level]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}explanation`,
                label: `[${labelPrefix}explanation]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}female_name`,
                label: `[${labelPrefix}female_name]`,
                type: 'string',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'distance': bundle.inputData?.[`${keyPrefix}distance`],
            'countryMatch': bundle.inputData?.[`${keyPrefix}countryMatch`],
            'countryCode': bundle.inputData?.[`${keyPrefix}countryCode`],
            'freeMail': bundle.inputData?.[`${keyPrefix}freeMail`],
            'anonymousProxy': bundle.inputData?.[`${keyPrefix}anonymousProxy`],
            'score': bundle.inputData?.[`${keyPrefix}score`],
            'binMatch': bundle.inputData?.[`${keyPrefix}binMatch`],
            'binCountry': bundle.inputData?.[`${keyPrefix}binCountry`],
            'err': bundle.inputData?.[`${keyPrefix}err`],
            'proxyScore': bundle.inputData?.[`${keyPrefix}proxyScore`],
            'ip_region': bundle.inputData?.[`${keyPrefix}ip_region`],
            'ip_city': bundle.inputData?.[`${keyPrefix}ip_city`],
            'ip_latitude': bundle.inputData?.[`${keyPrefix}ip_latitude`],
            'ip_longitude': bundle.inputData?.[`${keyPrefix}ip_longitude`],
            'binName': bundle.inputData?.[`${keyPrefix}binName`],
            'ip_isp': bundle.inputData?.[`${keyPrefix}ip_isp`],
            'ip_org': bundle.inputData?.[`${keyPrefix}ip_org`],
            'binNameMatch': bundle.inputData?.[`${keyPrefix}binNameMatch`],
            'binPhoneMatch': bundle.inputData?.[`${keyPrefix}binPhoneMatch`],
            'binPhone': bundle.inputData?.[`${keyPrefix}binPhone`],
            'custPhoneInBillingLoc': bundle.inputData?.[`${keyPrefix}custPhoneInBillingLoc`],
            'highRiskCountry': bundle.inputData?.[`${keyPrefix}highRiskCountry`],
            'queriesRemaining': bundle.inputData?.[`${keyPrefix}queriesRemaining`],
            'cityPostalMatch': bundle.inputData?.[`${keyPrefix}cityPostalMatch`],
            'shipCityPostalMatch': bundle.inputData?.[`${keyPrefix}shipCityPostalMatch`],
            'maxmindID': bundle.inputData?.[`${keyPrefix}maxmindID`],
            'ip_asnum': bundle.inputData?.[`${keyPrefix}ip_asnum`],
            'ip_userType': bundle.inputData?.[`${keyPrefix}ip_userType`],
            'ip_countryConf': bundle.inputData?.[`${keyPrefix}ip_countryConf`],
            'ip_regionConf': bundle.inputData?.[`${keyPrefix}ip_regionConf`],
            'ip_cityConf': bundle.inputData?.[`${keyPrefix}ip_cityConf`],
            'ip_postalCode': bundle.inputData?.[`${keyPrefix}ip_postalCode`],
            'ip_postalConf': bundle.inputData?.[`${keyPrefix}ip_postalConf`],
            'ip_accuracyRadius': bundle.inputData?.[`${keyPrefix}ip_accuracyRadius`],
            'ip_netSpeedCell': bundle.inputData?.[`${keyPrefix}ip_netSpeedCell`],
            'ip_metroCode': bundle.inputData?.[`${keyPrefix}ip_metroCode`],
            'ip_areaCode': bundle.inputData?.[`${keyPrefix}ip_areaCode`],
            'ip_timeZone': bundle.inputData?.[`${keyPrefix}ip_timeZone`],
            'ip_regionName': bundle.inputData?.[`${keyPrefix}ip_regionName`],
            'ip_domain': bundle.inputData?.[`${keyPrefix}ip_domain`],
            'ip_countryName': bundle.inputData?.[`${keyPrefix}ip_countryName`],
            'ip_continentCode': bundle.inputData?.[`${keyPrefix}ip_continentCode`],
            'ip_corporateProxy': bundle.inputData?.[`${keyPrefix}ip_corporateProxy`],
            'carderEmail': bundle.inputData?.[`${keyPrefix}carderEmail`],
            'highRiskUsername': bundle.inputData?.[`${keyPrefix}highRiskUsername`],
            'highRiskPassword': bundle.inputData?.[`${keyPrefix}highRiskPassword`],
            'riskScore': utils.removeIfEmpty(AccountInfoMaxMindResponse_riskScore.mapping(bundle, `${keyPrefix}riskScore`)),
            'isTransProxy': bundle.inputData?.[`${keyPrefix}isTransProxy`],
            'prepaid': bundle.inputData?.[`${keyPrefix}prepaid`],
            'minfraud_version': bundle.inputData?.[`${keyPrefix}minfraud_version`],
            'service_level': bundle.inputData?.[`${keyPrefix}service_level`],
            'explanation': bundle.inputData?.[`${keyPrefix}explanation`],
            'female_name': bundle.inputData?.[`${keyPrefix}female_name`],
        }
    },
}
