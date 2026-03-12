package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoData._

case class AccountInfoData (
  group: Option[String],
address: Option[String],
city: Option[String],
country: Option[String],
disable_cc: Option[String],
fraudrecord_score: Option[String],
ima: Option[String],
name: Option[String],
payment_method: Option[String],
phone: Option[String],
pin: Option[String],
state: Option[String],
status: Option[String],
zip: Option[String],
account_id: Option[String],
account_lid: Option[String],
address2: Option[String],
affiliate_dock_description: Option[String],
affiliate_dock_title: Option[String],
affiliate_payment_method: Option[String],
affiliate_paypal: Option[String],
cc: Option[String],
cc_auto: Option[String],
cc_exp: Option[String],
cc_type: Option[String],
cc_whitelist: Option[String],
ccs: Option[AccountInfoDataCcs],
ccs_added: Option[String],
company: Option[String],
currency: Option[String],
disable_reinstall: Option[String],
disable_reset: Option[String],
email: Option[String],
email_abuse: Option[String],
email_settings: Option[AccountInfoDataEmailSettings],
extra: Option[AccountInfoDataExtra],
facebook_id: Option[String],
facebook_url: Option[String],
firstname: Option[String],
fraudrecord: Option[AccountInfoDataFraudrecord],
github_id: Option[String],
github_url: Option[String],
google_id: Option[String],
google_url: Option[String],
innertell_id: Option[String],
lastname: Option[String],
locale: Option[String],
maxmind: Option[AccountInfoMaxMindResponse],
maxmind_score: Option[String],
mb_id: Option[String],
modernbill_id: Option[String],
picture: Option[String],
referrer_coupon: Option[String],
reseller_markup: Option[String],
username: Option[String],
ssh_key: Option[String],
ssh_key_wrapped: Option[String],
api_key: Option[String],
api_key_wrapped: Option[String],
`2fa_google_key`: Option[String],
`2fa_google_enabled`: Option[Boolean],
`2fa_google`: Option[Integer],
`2fa_google_split`: Option[String],
`2fa_google_qr`: Option[String])

object AccountInfoData {
  import DateTimeCodecs._

  implicit val AccountInfoDataCodecJson: CodecJson[AccountInfoData] = CodecJson.derive[AccountInfoData]
  implicit val AccountInfoDataDecoder: EntityDecoder[AccountInfoData] = jsonOf[AccountInfoData]
  implicit val AccountInfoDataEncoder: EntityEncoder[AccountInfoData] = jsonEncoderOf[AccountInfoData]
}
