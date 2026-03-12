package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateRule201Response._

case class CreateRule201Response (
  success: Option[Boolean],
text: Option[String])

object CreateRule201Response {
  import DateTimeCodecs._

  implicit val CreateRule201ResponseCodecJson: CodecJson[CreateRule201Response] = CodecJson.derive[CreateRule201Response]
  implicit val CreateRule201ResponseDecoder: EntityDecoder[CreateRule201Response] = jsonOf[CreateRule201Response]
  implicit val CreateRule201ResponseEncoder: EntityEncoder[CreateRule201Response] = jsonEncoderOf[CreateRule201Response]
}
