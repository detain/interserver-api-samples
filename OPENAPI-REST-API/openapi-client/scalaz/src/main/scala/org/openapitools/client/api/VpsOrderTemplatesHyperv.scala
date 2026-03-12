package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderTemplatesHyperv._

case class VpsOrderTemplatesHyperv (
  windows: Option[VpsOrderTemplatesHypervWindows])

object VpsOrderTemplatesHyperv {
  import DateTimeCodecs._

  implicit val VpsOrderTemplatesHypervCodecJson: CodecJson[VpsOrderTemplatesHyperv] = CodecJson.derive[VpsOrderTemplatesHyperv]
  implicit val VpsOrderTemplatesHypervDecoder: EntityDecoder[VpsOrderTemplatesHyperv] = jsonOf[VpsOrderTemplatesHyperv]
  implicit val VpsOrderTemplatesHypervEncoder: EntityEncoder[VpsOrderTemplatesHyperv] = jsonEncoderOf[VpsOrderTemplatesHyperv]
}
