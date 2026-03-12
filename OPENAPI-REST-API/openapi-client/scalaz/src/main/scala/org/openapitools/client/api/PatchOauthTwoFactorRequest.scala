package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PatchOauthTwoFactorRequest._

case class PatchOauthTwoFactorRequest (
  /* The account ID returned from the POST callback. */
  account_id: Integer,
/* The 6-digit two-factor authentication code. */
  code: String)

object PatchOauthTwoFactorRequest {
  import DateTimeCodecs._

  implicit val PatchOauthTwoFactorRequestCodecJson: CodecJson[PatchOauthTwoFactorRequest] = CodecJson.derive[PatchOauthTwoFactorRequest]
  implicit val PatchOauthTwoFactorRequestDecoder: EntityDecoder[PatchOauthTwoFactorRequest] = jsonOf[PatchOauthTwoFactorRequest]
  implicit val PatchOauthTwoFactorRequestEncoder: EntityEncoder[PatchOauthTwoFactorRequest] = jsonEncoderOf[PatchOauthTwoFactorRequest]
}
