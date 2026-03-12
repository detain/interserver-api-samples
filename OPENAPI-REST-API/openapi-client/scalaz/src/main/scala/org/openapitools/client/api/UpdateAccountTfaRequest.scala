package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import UpdateAccountTfaRequest._

case class UpdateAccountTfaRequest (
  /* The 6-digit verification code from your authenticator app. */
  `2fa_google_code`: String)

object UpdateAccountTfaRequest {
  import DateTimeCodecs._

  implicit val UpdateAccountTfaRequestCodecJson: CodecJson[UpdateAccountTfaRequest] = CodecJson.derive[UpdateAccountTfaRequest]
  implicit val UpdateAccountTfaRequestDecoder: EntityDecoder[UpdateAccountTfaRequest] = jsonOf[UpdateAccountTfaRequest]
  implicit val UpdateAccountTfaRequestEncoder: EntityEncoder[UpdateAccountTfaRequest] = jsonEncoderOf[UpdateAccountTfaRequest]
}
