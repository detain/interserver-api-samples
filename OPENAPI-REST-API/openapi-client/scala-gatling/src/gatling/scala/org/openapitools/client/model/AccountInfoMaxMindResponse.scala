
package org.openapitools.client.model


case class AccountInfoMaxMindResponse (
    _distance: Option[String],
    _countryMatch: Option[String],
    _countryCode: Option[String],
    _freeMail: Option[String],
    _anonymousProxy: Option[String],
    _score: Option[String],
    _binMatch: Option[String],
    _binCountry: Option[String],
    _err: Option[String],
    _proxyScore: Option[String],
    _ip_region: Option[String],
    _ip_city: Option[String],
    _ip_latitude: Option[String],
    _ip_longitude: Option[String],
    _binName: Option[String],
    _ip_isp: Option[String],
    _ip_org: Option[String],
    _binNameMatch: Option[String],
    _binPhoneMatch: Option[String],
    _binPhone: Option[String],
    _custPhoneInBillingLoc: Option[String],
    _highRiskCountry: Option[String],
    _queriesRemaining: Option[String],
    _cityPostalMatch: Option[String],
    _shipCityPostalMatch: Option[String],
    _maxmindID: Option[String],
    _ip_asnum: Option[String],
    _ip_userType: Option[String],
    _ip_countryConf: Option[String],
    _ip_regionConf: Option[String],
    _ip_cityConf: Option[String],
    _ip_postalCode: Option[String],
    _ip_postalConf: Option[String],
    _ip_accuracyRadius: Option[String],
    _ip_netSpeedCell: Option[String],
    _ip_metroCode: Option[String],
    _ip_areaCode: Option[String],
    _ip_timeZone: Option[String],
    _ip_regionName: Option[String],
    _ip_domain: Option[String],
    _ip_countryName: Option[String],
    _ip_continentCode: Option[String],
    _ip_corporateProxy: Option[String],
    _carderEmail: Option[String],
    _highRiskUsername: Option[String],
    _highRiskPassword: Option[String],
    _riskScore: Option[AccountInfoMaxMindResponseRiskScore],
    _isTransProxy: Option[String],
    _prepaid: Option[String],
    _minfraud_version: Option[String],
    _service_level: Option[String],
    _explanation: Option[String],
    _female_name: Option[String]
)
object AccountInfoMaxMindResponse {
    def toStringBody(var_distance: Object, var_countryMatch: Object, var_countryCode: Object, var_freeMail: Object, var_anonymousProxy: Object, var_score: Object, var_binMatch: Object, var_binCountry: Object, var_err: Object, var_proxyScore: Object, var_ip_region: Object, var_ip_city: Object, var_ip_latitude: Object, var_ip_longitude: Object, var_binName: Object, var_ip_isp: Object, var_ip_org: Object, var_binNameMatch: Object, var_binPhoneMatch: Object, var_binPhone: Object, var_custPhoneInBillingLoc: Object, var_highRiskCountry: Object, var_queriesRemaining: Object, var_cityPostalMatch: Object, var_shipCityPostalMatch: Object, var_maxmindID: Object, var_ip_asnum: Object, var_ip_userType: Object, var_ip_countryConf: Object, var_ip_regionConf: Object, var_ip_cityConf: Object, var_ip_postalCode: Object, var_ip_postalConf: Object, var_ip_accuracyRadius: Object, var_ip_netSpeedCell: Object, var_ip_metroCode: Object, var_ip_areaCode: Object, var_ip_timeZone: Object, var_ip_regionName: Object, var_ip_domain: Object, var_ip_countryName: Object, var_ip_continentCode: Object, var_ip_corporateProxy: Object, var_carderEmail: Object, var_highRiskUsername: Object, var_highRiskPassword: Object, var_riskScore: Object, var_isTransProxy: Object, var_prepaid: Object, var_minfraud_version: Object, var_service_level: Object, var_explanation: Object, var_female_name: Object) =
        s"""
        | {
        | "distance":$var_distance,"countryMatch":$var_countryMatch,"countryCode":$var_countryCode,"freeMail":$var_freeMail,"anonymousProxy":$var_anonymousProxy,"score":$var_score,"binMatch":$var_binMatch,"binCountry":$var_binCountry,"err":$var_err,"proxyScore":$var_proxyScore,"ip_region":$var_ip_region,"ip_city":$var_ip_city,"ip_latitude":$var_ip_latitude,"ip_longitude":$var_ip_longitude,"binName":$var_binName,"ip_isp":$var_ip_isp,"ip_org":$var_ip_org,"binNameMatch":$var_binNameMatch,"binPhoneMatch":$var_binPhoneMatch,"binPhone":$var_binPhone,"custPhoneInBillingLoc":$var_custPhoneInBillingLoc,"highRiskCountry":$var_highRiskCountry,"queriesRemaining":$var_queriesRemaining,"cityPostalMatch":$var_cityPostalMatch,"shipCityPostalMatch":$var_shipCityPostalMatch,"maxmindID":$var_maxmindID,"ip_asnum":$var_ip_asnum,"ip_userType":$var_ip_userType,"ip_countryConf":$var_ip_countryConf,"ip_regionConf":$var_ip_regionConf,"ip_cityConf":$var_ip_cityConf,"ip_postalCode":$var_ip_postalCode,"ip_postalConf":$var_ip_postalConf,"ip_accuracyRadius":$var_ip_accuracyRadius,"ip_netSpeedCell":$var_ip_netSpeedCell,"ip_metroCode":$var_ip_metroCode,"ip_areaCode":$var_ip_areaCode,"ip_timeZone":$var_ip_timeZone,"ip_regionName":$var_ip_regionName,"ip_domain":$var_ip_domain,"ip_countryName":$var_ip_countryName,"ip_continentCode":$var_ip_continentCode,"ip_corporateProxy":$var_ip_corporateProxy,"carderEmail":$var_carderEmail,"highRiskUsername":$var_highRiskUsername,"highRiskPassword":$var_highRiskPassword,"riskScore":$var_riskScore,"isTransProxy":$var_isTransProxy,"prepaid":$var_prepaid,"minfraud_version":$var_minfraud_version,"service_level":$var_service_level,"explanation":$var_explanation,"female_name":$var_female_name
        | }
        """.stripMargin
}
