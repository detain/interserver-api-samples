package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginErrorResponse._

case class LoginErrorResponse (
  message: Option[String],
field: Option[String])

object LoginErrorResponse {
  import DateTimeCodecs._

  implicit val LoginErrorResponseCodecJson: CodecJson[LoginErrorResponse] = CodecJson.derive[LoginErrorResponse]
  implicit val LoginErrorResponseDecoder: EntityDecoder[LoginErrorResponse] = jsonOf[LoginErrorResponse]
  implicit val LoginErrorResponseEncoder: EntityEncoder[LoginErrorResponse] = jsonEncoderOf[LoginErrorResponse]
}
