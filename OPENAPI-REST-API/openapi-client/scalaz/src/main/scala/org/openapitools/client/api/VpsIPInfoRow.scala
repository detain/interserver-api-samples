package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsIPInfoRow._

case class VpsIPInfoRow (
  /* Description */
  desc: Option[String],
/* Value */
  value: Option[String])

object VpsIPInfoRow {
  import DateTimeCodecs._

  implicit val VpsIPInfoRowCodecJson: CodecJson[VpsIPInfoRow] = CodecJson.derive[VpsIPInfoRow]
  implicit val VpsIPInfoRowDecoder: EntityDecoder[VpsIPInfoRow] = jsonOf[VpsIPInfoRow]
  implicit val VpsIPInfoRowEncoder: EntityEncoder[VpsIPInfoRow] = jsonEncoderOf[VpsIPInfoRow]
}
