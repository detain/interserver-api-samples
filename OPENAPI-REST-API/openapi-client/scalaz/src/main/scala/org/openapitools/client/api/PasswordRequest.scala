package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PasswordRequest._

case class PasswordRequest (
  password: String)

object PasswordRequest {
  import DateTimeCodecs._

  implicit val PasswordRequestCodecJson: CodecJson[PasswordRequest] = CodecJson.derive[PasswordRequest]
  implicit val PasswordRequestDecoder: EntityDecoder[PasswordRequest] = jsonOf[PasswordRequest]
  implicit val PasswordRequestEncoder: EntityEncoder[PasswordRequest] = jsonEncoderOf[PasswordRequest]
}
