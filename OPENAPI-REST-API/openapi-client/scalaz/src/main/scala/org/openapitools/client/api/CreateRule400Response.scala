package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateRule400Response._

case class CreateRule400Response (
  success: Option[Boolean],
text: Option[String],
errors: Option[List[String]])

object CreateRule400Response {
  import DateTimeCodecs._

  implicit val CreateRule400ResponseCodecJson: CodecJson[CreateRule400Response] = CodecJson.derive[CreateRule400Response]
  implicit val CreateRule400ResponseDecoder: EntityDecoder[CreateRule400Response] = jsonOf[CreateRule400Response]
  implicit val CreateRule400ResponseEncoder: EntityEncoder[CreateRule400Response] = jsonEncoderOf[CreateRule400Response]
}
