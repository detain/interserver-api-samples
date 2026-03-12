package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PatchOauthTwoFactor200Response._

case class PatchOauthTwoFactor200Response (
  /* Whether the 2FA verification succeeded and the user is now logged in. */
  login: Option[Boolean])

object PatchOauthTwoFactor200Response {
  import DateTimeCodecs._

  implicit val PatchOauthTwoFactor200ResponseCodecJson: CodecJson[PatchOauthTwoFactor200Response] = CodecJson.derive[PatchOauthTwoFactor200Response]
  implicit val PatchOauthTwoFactor200ResponseDecoder: EntityDecoder[PatchOauthTwoFactor200Response] = jsonOf[PatchOauthTwoFactor200Response]
  implicit val PatchOauthTwoFactor200ResponseEncoder: EntityEncoder[PatchOauthTwoFactor200Response] = jsonEncoderOf[PatchOauthTwoFactor200Response]
}
