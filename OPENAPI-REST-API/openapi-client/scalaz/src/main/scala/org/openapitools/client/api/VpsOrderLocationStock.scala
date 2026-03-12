package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderLocationStock._

case class VpsOrderLocationStock (
  `1`: Option[VpsOrderLocationStock1])

object VpsOrderLocationStock {
  import DateTimeCodecs._

  implicit val VpsOrderLocationStockCodecJson: CodecJson[VpsOrderLocationStock] = CodecJson.derive[VpsOrderLocationStock]
  implicit val VpsOrderLocationStockDecoder: EntityDecoder[VpsOrderLocationStock] = jsonOf[VpsOrderLocationStock]
  implicit val VpsOrderLocationStockEncoder: EntityEncoder[VpsOrderLocationStock] = jsonEncoderOf[VpsOrderLocationStock]
}
