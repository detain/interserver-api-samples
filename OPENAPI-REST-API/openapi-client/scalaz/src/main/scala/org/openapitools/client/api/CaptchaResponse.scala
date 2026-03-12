package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CaptchaResponse._

case class CaptchaResponse (
  /* The base64 encoded captcha image. */
  captcha: String)

object CaptchaResponse {
  import DateTimeCodecs._

  implicit val CaptchaResponseCodecJson: CodecJson[CaptchaResponse] = CodecJson.derive[CaptchaResponse]
  implicit val CaptchaResponseDecoder: EntityDecoder[CaptchaResponse] = jsonOf[CaptchaResponse]
  implicit val CaptchaResponseEncoder: EntityEncoder[CaptchaResponse] = jsonEncoderOf[CaptchaResponse]
}
