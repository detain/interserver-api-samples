package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginSubmissionExampleGRecaptchaResponse._

case class LoginSubmissionExampleGRecaptchaResponse (
  __v_isShallow: Option[Boolean],
dep: Option[LoginSubmissionExampleGRecaptchaResponseDep],
__v_isRef: Option[Boolean],
_rawValue: Option[String],
_value: Option[String])

object LoginSubmissionExampleGRecaptchaResponse {
  import DateTimeCodecs._

  implicit val LoginSubmissionExampleGRecaptchaResponseCodecJson: CodecJson[LoginSubmissionExampleGRecaptchaResponse] = CodecJson.derive[LoginSubmissionExampleGRecaptchaResponse]
  implicit val LoginSubmissionExampleGRecaptchaResponseDecoder: EntityDecoder[LoginSubmissionExampleGRecaptchaResponse] = jsonOf[LoginSubmissionExampleGRecaptchaResponse]
  implicit val LoginSubmissionExampleGRecaptchaResponseEncoder: EntityEncoder[LoginSubmissionExampleGRecaptchaResponse] = jsonEncoderOf[LoginSubmissionExampleGRecaptchaResponse]
}
