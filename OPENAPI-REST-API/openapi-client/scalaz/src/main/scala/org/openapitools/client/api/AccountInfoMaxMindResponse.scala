package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoMaxMindResponse._

case class AccountInfoMaxMindResponse (
  distance: Option[String],
countryMatch: Option[String],
countryCode: Option[String],
freeMail: Option[String],
anonymousProxy: Option[String],
score: Option[String],
binMatch: Option[String],
binCountry: Option[String],
err: Option[String],
proxyScore: Option[String],
ip_region: Option[String],
ip_city: Option[String],
ip_latitude: Option[String],
ip_longitude: Option[String],
binName: Option[String],
ip_isp: Option[String],
ip_org: Option[String],
binNameMatch: Option[String],
binPhoneMatch: Option[String],
binPhone: Option[String],
custPhoneInBillingLoc: Option[String],
highRiskCountry: Option[String],
queriesRemaining: Option[String],
cityPostalMatch: Option[String],
shipCityPostalMatch: Option[String],
maxmindID: Option[String],
ip_asnum: Option[String],
ip_userType: Option[String],
ip_countryConf: Option[String],
ip_regionConf: Option[String],
ip_cityConf: Option[String],
ip_postalCode: Option[String],
ip_postalConf: Option[String],
ip_accuracyRadius: Option[String],
ip_netSpeedCell: Option[String],
ip_metroCode: Option[String],
ip_areaCode: Option[String],
ip_timeZone: Option[String],
ip_regionName: Option[String],
ip_domain: Option[String],
ip_countryName: Option[String],
ip_continentCode: Option[String],
ip_corporateProxy: Option[String],
carderEmail: Option[String],
highRiskUsername: Option[String],
highRiskPassword: Option[String],
riskScore: Option[AccountInfoMaxMindResponseRiskScore],
isTransProxy: Option[String],
prepaid: Option[String],
minfraud_version: Option[String],
service_level: Option[String],
explanation: Option[String],
female_name: Option[String])

object AccountInfoMaxMindResponse {
  import DateTimeCodecs._

  implicit val AccountInfoMaxMindResponseCodecJson: CodecJson[AccountInfoMaxMindResponse] = CodecJson.derive[AccountInfoMaxMindResponse]
  implicit val AccountInfoMaxMindResponseDecoder: EntityDecoder[AccountInfoMaxMindResponse] = jsonOf[AccountInfoMaxMindResponse]
  implicit val AccountInfoMaxMindResponseEncoder: EntityEncoder[AccountInfoMaxMindResponse] = jsonEncoderOf[AccountInfoMaxMindResponse]
}
