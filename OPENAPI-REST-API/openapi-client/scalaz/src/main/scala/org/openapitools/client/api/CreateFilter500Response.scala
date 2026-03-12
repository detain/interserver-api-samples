package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateFilter500Response._

case class CreateFilter500Response (
  success: Option[Boolean],
text: Option[String])

object CreateFilter500Response {
  import DateTimeCodecs._

  implicit val CreateFilter500ResponseCodecJson: CodecJson[CreateFilter500Response] = CodecJson.derive[CreateFilter500Response]
  implicit val CreateFilter500ResponseDecoder: EntityDecoder[CreateFilter500Response] = jsonOf[CreateFilter500Response]
  implicit val CreateFilter500ResponseEncoder: EntityEncoder[CreateFilter500Response] = jsonEncoderOf[CreateFilter500Response]
}
