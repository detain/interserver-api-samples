package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import FieldLabel._

case class FieldLabel (
  name: Option[String],
active: Option[Integer])

object FieldLabel {
  import DateTimeCodecs._

  implicit val FieldLabelCodecJson: CodecJson[FieldLabel] = CodecJson.derive[FieldLabel]
  implicit val FieldLabelDecoder: EntityDecoder[FieldLabel] = jsonOf[FieldLabel]
  implicit val FieldLabelEncoder: EntityEncoder[FieldLabel] = jsonEncoderOf[FieldLabel]
}
