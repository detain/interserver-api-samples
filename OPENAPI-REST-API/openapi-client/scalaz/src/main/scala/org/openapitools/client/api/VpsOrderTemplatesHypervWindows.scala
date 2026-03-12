package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderTemplatesHypervWindows._

case class VpsOrderTemplatesHypervWindows (
  Windows2019Standard: Option[String],
Windows2022: Option[String])

object VpsOrderTemplatesHypervWindows {
  import DateTimeCodecs._

  implicit val VpsOrderTemplatesHypervWindowsCodecJson: CodecJson[VpsOrderTemplatesHypervWindows] = CodecJson.derive[VpsOrderTemplatesHypervWindows]
  implicit val VpsOrderTemplatesHypervWindowsDecoder: EntityDecoder[VpsOrderTemplatesHypervWindows] = jsonOf[VpsOrderTemplatesHypervWindows]
  implicit val VpsOrderTemplatesHypervWindowsEncoder: EntityEncoder[VpsOrderTemplatesHypervWindows] = jsonEncoderOf[VpsOrderTemplatesHypervWindows]
}
