package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MemoryOption._

case class MemoryOption (
  id: Option[Integer],
short_desc: Option[String],
monthly_price: Option[BigDecimal],
monthly_price_display: Option[String])

object MemoryOption {
  import DateTimeCodecs._

  implicit val MemoryOptionCodecJson: CodecJson[MemoryOption] = CodecJson.derive[MemoryOption]
  implicit val MemoryOptionDecoder: EntityDecoder[MemoryOption] = jsonOf[MemoryOption]
  implicit val MemoryOptionEncoder: EntityEncoder[MemoryOption] = jsonEncoderOf[MemoryOption]
}
