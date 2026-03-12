package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateFilter201Response._

case class CreateFilter201Response (
  success: Option[Boolean],
text: Option[String])

object CreateFilter201Response {
  import DateTimeCodecs._

  implicit val CreateFilter201ResponseCodecJson: CodecJson[CreateFilter201Response] = CodecJson.derive[CreateFilter201Response]
  implicit val CreateFilter201ResponseDecoder: EntityDecoder[CreateFilter201Response] = jsonOf[CreateFilter201Response]
  implicit val CreateFilter201ResponseEncoder: EntityEncoder[CreateFilter201Response] = jsonEncoderOf[CreateFilter201Response]
}
