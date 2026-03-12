package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateGeoRule400Response._

case class CreateGeoRule400Response (
  success: Option[Boolean],
text: Option[String],
errors: Option[List[String]])

object CreateGeoRule400Response {
  import DateTimeCodecs._

  implicit val CreateGeoRule400ResponseCodecJson: CodecJson[CreateGeoRule400Response] = CodecJson.derive[CreateGeoRule400Response]
  implicit val CreateGeoRule400ResponseDecoder: EntityDecoder[CreateGeoRule400Response] = jsonOf[CreateGeoRule400Response]
  implicit val CreateGeoRule400ResponseEncoder: EntityEncoder[CreateGeoRule400Response] = jsonEncoderOf[CreateGeoRule400Response]
}
