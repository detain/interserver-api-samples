package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LoginSubmissionExampleGRecaptchaResponseDep._

case class LoginSubmissionExampleGRecaptchaResponseDep (
  w: Option[Integer],
n: Option[Integer])

object LoginSubmissionExampleGRecaptchaResponseDep {
  import DateTimeCodecs._

  implicit val LoginSubmissionExampleGRecaptchaResponseDepCodecJson: CodecJson[LoginSubmissionExampleGRecaptchaResponseDep] = CodecJson.derive[LoginSubmissionExampleGRecaptchaResponseDep]
  implicit val LoginSubmissionExampleGRecaptchaResponseDepDecoder: EntityDecoder[LoginSubmissionExampleGRecaptchaResponseDep] = jsonOf[LoginSubmissionExampleGRecaptchaResponseDep]
  implicit val LoginSubmissionExampleGRecaptchaResponseDepEncoder: EntityEncoder[LoginSubmissionExampleGRecaptchaResponseDep] = jsonEncoderOf[LoginSubmissionExampleGRecaptchaResponseDep]
}
