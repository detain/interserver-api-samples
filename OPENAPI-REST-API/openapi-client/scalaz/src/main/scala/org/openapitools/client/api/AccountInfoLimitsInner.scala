package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoLimitsInner._

case class AccountInfoLimitsInner (
  start: Option[String],
end: Option[String])

object AccountInfoLimitsInner {
  import DateTimeCodecs._

  implicit val AccountInfoLimitsInnerCodecJson: CodecJson[AccountInfoLimitsInner] = CodecJson.derive[AccountInfoLimitsInner]
  implicit val AccountInfoLimitsInnerDecoder: EntityDecoder[AccountInfoLimitsInner] = jsonOf[AccountInfoLimitsInner]
  implicit val AccountInfoLimitsInnerEncoder: EntityEncoder[AccountInfoLimitsInner] = jsonEncoderOf[AccountInfoLimitsInner]
}
