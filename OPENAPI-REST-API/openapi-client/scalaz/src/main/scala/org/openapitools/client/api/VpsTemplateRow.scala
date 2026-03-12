package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTemplateRow._

case class VpsTemplateRow (
  template_id: Option[String],
template_type: Option[String],
template_os: Option[String],
template_version: Option[String],
template_bits: Option[String],
template_file: Option[String],
template_available: Option[String],
template_name: Option[String],
template_dir: Option[String])

object VpsTemplateRow {
  import DateTimeCodecs._

  implicit val VpsTemplateRowCodecJson: CodecJson[VpsTemplateRow] = CodecJson.derive[VpsTemplateRow]
  implicit val VpsTemplateRowDecoder: EntityDecoder[VpsTemplateRow] = jsonOf[VpsTemplateRow]
  implicit val VpsTemplateRowEncoder: EntityEncoder[VpsTemplateRow] = jsonEncoderOf[VpsTemplateRow]
}
