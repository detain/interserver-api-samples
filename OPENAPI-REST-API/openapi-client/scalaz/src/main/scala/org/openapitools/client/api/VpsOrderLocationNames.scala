package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderLocationNames._

case class VpsOrderLocationNames (
  `3`: Option[String])

object VpsOrderLocationNames {
  import DateTimeCodecs._

  implicit val VpsOrderLocationNamesCodecJson: CodecJson[VpsOrderLocationNames] = CodecJson.derive[VpsOrderLocationNames]
  implicit val VpsOrderLocationNamesDecoder: EntityDecoder[VpsOrderLocationNames] = jsonOf[VpsOrderLocationNames]
  implicit val VpsOrderLocationNamesEncoder: EntityEncoder[VpsOrderLocationNames] = jsonEncoderOf[VpsOrderLocationNames]
}
