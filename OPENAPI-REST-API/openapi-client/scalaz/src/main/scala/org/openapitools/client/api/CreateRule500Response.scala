package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateRule500Response._

case class CreateRule500Response (
  success: Option[Boolean],
text: Option[String])

object CreateRule500Response {
  import DateTimeCodecs._

  implicit val CreateRule500ResponseCodecJson: CodecJson[CreateRule500Response] = CodecJson.derive[CreateRule500Response]
  implicit val CreateRule500ResponseDecoder: EntityDecoder[CreateRule500Response] = jsonOf[CreateRule500Response]
  implicit val CreateRule500ResponseEncoder: EntityEncoder[CreateRule500Response] = jsonEncoderOf[CreateRule500Response]
}
