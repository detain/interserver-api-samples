package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import RaidOption._

case class RaidOption (
  id: Option[Integer],
short_desc: Option[String],
monthly_price: Option[BigDecimal])

object RaidOption {
  import DateTimeCodecs._

  implicit val RaidOptionCodecJson: CodecJson[RaidOption] = CodecJson.derive[RaidOption]
  implicit val RaidOptionDecoder: EntityDecoder[RaidOption] = jsonOf[RaidOption]
  implicit val RaidOptionEncoder: EntityEncoder[RaidOption] = jsonEncoderOf[RaidOption]
}
