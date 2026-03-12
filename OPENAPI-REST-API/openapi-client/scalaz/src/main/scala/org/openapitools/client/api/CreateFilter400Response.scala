package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateFilter400Response._

case class CreateFilter400Response (
  success: Option[Boolean],
text: Option[String],
errors: Option[List[String]])

object CreateFilter400Response {
  import DateTimeCodecs._

  implicit val CreateFilter400ResponseCodecJson: CodecJson[CreateFilter400Response] = CodecJson.derive[CreateFilter400Response]
  implicit val CreateFilter400ResponseDecoder: EntityDecoder[CreateFilter400Response] = jsonOf[CreateFilter400Response]
  implicit val CreateFilter400ResponseEncoder: EntityEncoder[CreateFilter400Response] = jsonEncoderOf[CreateFilter400Response]
}
