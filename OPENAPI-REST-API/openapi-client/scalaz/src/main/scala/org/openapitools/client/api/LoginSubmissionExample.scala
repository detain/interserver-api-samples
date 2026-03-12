package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginSubmissionExample._

case class LoginSubmissionExample (
  login: String,
passwd: String,
remember: Option[String],
g_recaptcha_response: Option[LoginSubmissionExampleGRecaptchaResponse],
/* Two Factor Authentication Response. */
  tfa: Option[String])

object LoginSubmissionExample {
  import DateTimeCodecs._

  implicit val LoginSubmissionExampleCodecJson: CodecJson[LoginSubmissionExample] = CodecJson.derive[LoginSubmissionExample]
  implicit val LoginSubmissionExampleDecoder: EntityDecoder[LoginSubmissionExample] = jsonOf[LoginSubmissionExample]
  implicit val LoginSubmissionExampleEncoder: EntityEncoder[LoginSubmissionExample] = jsonEncoderOf[LoginSubmissionExample]
}
