package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import OperatingSystem._

case class OperatingSystem (
  id: Option[Integer],
short_desc: Option[String],
monthly_price: Option[BigDecimal])

object OperatingSystem {
  import DateTimeCodecs._

  implicit val OperatingSystemCodecJson: CodecJson[OperatingSystem] = CodecJson.derive[OperatingSystem]
  implicit val OperatingSystemDecoder: EntityDecoder[OperatingSystem] = jsonOf[OperatingSystem]
  implicit val OperatingSystemEncoder: EntityEncoder[OperatingSystem] = jsonEncoderOf[OperatingSystem]
}
