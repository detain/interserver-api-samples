package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoDataCc._

case class AccountInfoDataCc (
  cc: Option[String],
cc_exp: Option[String],
name: Option[String],
address: Option[String],
city: Option[String],
state: Option[String],
zip: Option[String],
country: Option[String],
maxmind_riskscore: Option[String],
maxmind: Option[AccountInfoMaxMindResponse],
verified: Option[Boolean])

object AccountInfoDataCc {
  import DateTimeCodecs._

  implicit val AccountInfoDataCcCodecJson: CodecJson[AccountInfoDataCc] = CodecJson.derive[AccountInfoDataCc]
  implicit val AccountInfoDataCcDecoder: EntityDecoder[AccountInfoDataCc] = jsonOf[AccountInfoDataCc]
  implicit val AccountInfoDataCcEncoder: EntityEncoder[AccountInfoDataCc] = jsonEncoderOf[AccountInfoDataCc]
}
