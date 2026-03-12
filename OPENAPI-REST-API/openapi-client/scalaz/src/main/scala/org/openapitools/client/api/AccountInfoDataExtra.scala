package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoDataExtra._

case class AccountInfoDataExtra (
  private_whois: Option[String])

object AccountInfoDataExtra {
  import DateTimeCodecs._

  implicit val AccountInfoDataExtraCodecJson: CodecJson[AccountInfoDataExtra] = CodecJson.derive[AccountInfoDataExtra]
  implicit val AccountInfoDataExtraDecoder: EntityDecoder[AccountInfoDataExtra] = jsonOf[AccountInfoDataExtra]
  implicit val AccountInfoDataExtraEncoder: EntityEncoder[AccountInfoDataExtra] = jsonEncoderOf[AccountInfoDataExtra]
}
