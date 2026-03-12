package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginInfo._

case class LoginInfo (
  /* A base64 encoded image to use for rendering the alternateive captcha. */
  captcha: String,
counts: LoginServiceCounts,
/* A logo image url. */
  logo: Option[String],
/* The desired langauge to render the site with. */
  language: Option[String])

object LoginInfo {
  import DateTimeCodecs._

  implicit val LoginInfoCodecJson: CodecJson[LoginInfo] = CodecJson.derive[LoginInfo]
  implicit val LoginInfoDecoder: EntityDecoder[LoginInfo] = jsonOf[LoginInfo]
  implicit val LoginInfoEncoder: EntityEncoder[LoginInfo] = jsonEncoderOf[LoginInfo]
}
