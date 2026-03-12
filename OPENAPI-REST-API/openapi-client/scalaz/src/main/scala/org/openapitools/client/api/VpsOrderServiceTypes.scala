package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderServiceTypes._

case class VpsOrderServiceTypes (
  `32`: Option[VpsOrderServiceTypes32])

object VpsOrderServiceTypes {
  import DateTimeCodecs._

  implicit val VpsOrderServiceTypesCodecJson: CodecJson[VpsOrderServiceTypes] = CodecJson.derive[VpsOrderServiceTypes]
  implicit val VpsOrderServiceTypesDecoder: EntityDecoder[VpsOrderServiceTypes] = jsonOf[VpsOrderServiceTypes]
  implicit val VpsOrderServiceTypesEncoder: EntityEncoder[VpsOrderServiceTypes] = jsonEncoderOf[VpsOrderServiceTypes]
}
