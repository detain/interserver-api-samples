package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoDataEmailSettings._

case class AccountInfoDataEmailSettings (
  admin_cc_bad_response: Option[String],
admin_mass_communications_tpl: Option[String])

object AccountInfoDataEmailSettings {
  import DateTimeCodecs._

  implicit val AccountInfoDataEmailSettingsCodecJson: CodecJson[AccountInfoDataEmailSettings] = CodecJson.derive[AccountInfoDataEmailSettings]
  implicit val AccountInfoDataEmailSettingsDecoder: EntityDecoder[AccountInfoDataEmailSettings] = jsonOf[AccountInfoDataEmailSettings]
  implicit val AccountInfoDataEmailSettingsEncoder: EntityEncoder[AccountInfoDataEmailSettings] = jsonEncoderOf[AccountInfoDataEmailSettings]
}
