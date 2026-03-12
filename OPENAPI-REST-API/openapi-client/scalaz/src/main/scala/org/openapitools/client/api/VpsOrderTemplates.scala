package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderTemplates._

case class VpsOrderTemplates (
  hyperv: Option[VpsOrderTemplatesHyperv])

object VpsOrderTemplates {
  import DateTimeCodecs._

  implicit val VpsOrderTemplatesCodecJson: CodecJson[VpsOrderTemplates] = CodecJson.derive[VpsOrderTemplates]
  implicit val VpsOrderTemplatesDecoder: EntityDecoder[VpsOrderTemplates] = jsonOf[VpsOrderTemplates]
  implicit val VpsOrderTemplatesEncoder: EntityEncoder[VpsOrderTemplates] = jsonEncoderOf[VpsOrderTemplates]
}
