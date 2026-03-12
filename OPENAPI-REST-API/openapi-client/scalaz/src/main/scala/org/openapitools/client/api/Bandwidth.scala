package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Bandwidth._

case class Bandwidth (
  id: Option[Integer],
short_desc: Option[String],
monthly_price: Option[BigDecimal],
monthly_price_display: Option[String])

object Bandwidth {
  import DateTimeCodecs._

  implicit val BandwidthCodecJson: CodecJson[Bandwidth] = CodecJson.derive[Bandwidth]
  implicit val BandwidthDecoder: EntityDecoder[Bandwidth] = jsonOf[Bandwidth]
  implicit val BandwidthEncoder: EntityEncoder[Bandwidth] = jsonEncoderOf[Bandwidth]
}
