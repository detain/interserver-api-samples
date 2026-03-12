package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpsLogRowSchema._

case class ScrubIpsLogRowSchema (
  date: Option[String],
filter: Option[String],
blocked_ip: Option[String],
target_ip: Option[String],
target_port: Option[BigDecimal],
protocol: Option[String],
byte_count: Option[BigDecimal],
xdp_action: Option[String])

object ScrubIpsLogRowSchema {
  import DateTimeCodecs._

  implicit val ScrubIpsLogRowSchemaCodecJson: CodecJson[ScrubIpsLogRowSchema] = CodecJson.derive[ScrubIpsLogRowSchema]
  implicit val ScrubIpsLogRowSchemaDecoder: EntityDecoder[ScrubIpsLogRowSchema] = jsonOf[ScrubIpsLogRowSchema]
  implicit val ScrubIpsLogRowSchemaEncoder: EntityEncoder[ScrubIpsLogRowSchema] = jsonEncoderOf[ScrubIpsLogRowSchema]
}
