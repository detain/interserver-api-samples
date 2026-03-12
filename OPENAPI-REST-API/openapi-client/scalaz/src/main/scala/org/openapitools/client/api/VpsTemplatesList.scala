package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTemplatesList._

case class VpsTemplatesList (
  /* A listing of the templates. */
  templates: List[VpsTemplateRow])

object VpsTemplatesList {
  import DateTimeCodecs._

  implicit val VpsTemplatesListCodecJson: CodecJson[VpsTemplatesList] = CodecJson.derive[VpsTemplatesList]
  implicit val VpsTemplatesListDecoder: EntityDecoder[VpsTemplatesList] = jsonOf[VpsTemplatesList]
  implicit val VpsTemplatesListEncoder: EntityEncoder[VpsTemplatesList] = jsonEncoderOf[VpsTemplatesList]
}
