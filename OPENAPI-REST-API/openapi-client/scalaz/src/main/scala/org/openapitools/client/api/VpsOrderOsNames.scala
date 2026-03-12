package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderOsNames._

case class VpsOrderOsNames (
  opensuse: Option[String],
ubuntu: Option[String])

object VpsOrderOsNames {
  import DateTimeCodecs._

  implicit val VpsOrderOsNamesCodecJson: CodecJson[VpsOrderOsNames] = CodecJson.derive[VpsOrderOsNames]
  implicit val VpsOrderOsNamesDecoder: EntityDecoder[VpsOrderOsNames] = jsonOf[VpsOrderOsNames]
  implicit val VpsOrderOsNamesEncoder: EntityEncoder[VpsOrderOsNames] = jsonEncoderOf[VpsOrderOsNames]
}
