package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderServiceTypes32._

case class VpsOrderServiceTypes32 (
  services_id: Option[String],
services_name: Option[String],
services_cost: Option[String],
services_category: Option[String],
services_buyable: Option[String],
services_type: Option[String],
services_field1: Option[String],
services_field2: Option[String],
services_module: Option[String])

object VpsOrderServiceTypes32 {
  import DateTimeCodecs._

  implicit val VpsOrderServiceTypes32CodecJson: CodecJson[VpsOrderServiceTypes32] = CodecJson.derive[VpsOrderServiceTypes32]
  implicit val VpsOrderServiceTypes32Decoder: EntityDecoder[VpsOrderServiceTypes32] = jsonOf[VpsOrderServiceTypes32]
  implicit val VpsOrderServiceTypes32Encoder: EntityEncoder[VpsOrderServiceTypes32] = jsonEncoderOf[VpsOrderServiceTypes32]
}
