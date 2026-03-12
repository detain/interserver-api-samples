package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderPackageCosts._

case class VpsOrderPackageCosts (
  `57`: Option[BigDecimal])

object VpsOrderPackageCosts {
  import DateTimeCodecs._

  implicit val VpsOrderPackageCostsCodecJson: CodecJson[VpsOrderPackageCosts] = CodecJson.derive[VpsOrderPackageCosts]
  implicit val VpsOrderPackageCostsDecoder: EntityDecoder[VpsOrderPackageCosts] = jsonOf[VpsOrderPackageCosts]
  implicit val VpsOrderPackageCostsEncoder: EntityEncoder[VpsOrderPackageCosts] = jsonEncoderOf[VpsOrderPackageCosts]
}
