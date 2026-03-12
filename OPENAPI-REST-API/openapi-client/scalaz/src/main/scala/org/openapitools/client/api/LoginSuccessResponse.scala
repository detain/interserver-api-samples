package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginSuccessResponse._

case class LoginSuccessResponse (
  sessionId: Option[String],
account_id: Option[Integer],
account_lid: Option[String],
ima: Option[String],
gravatar: Option[String])

object LoginSuccessResponse {
  import DateTimeCodecs._

  implicit val LoginSuccessResponseCodecJson: CodecJson[LoginSuccessResponse] = CodecJson.derive[LoginSuccessResponse]
  implicit val LoginSuccessResponseDecoder: EntityDecoder[LoginSuccessResponse] = jsonOf[LoginSuccessResponse]
  implicit val LoginSuccessResponseEncoder: EntityEncoder[LoginSuccessResponse] = jsonEncoderOf[LoginSuccessResponse]
}
