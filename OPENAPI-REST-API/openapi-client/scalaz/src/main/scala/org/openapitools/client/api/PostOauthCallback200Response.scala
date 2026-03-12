package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostOauthCallback200Response._

case class PostOauthCallback200Response (
  /* Whether the user was logged in to an existing account. */
  login: Option[Boolean],
/* Whether a new account was created. */
  signup: Option[Boolean],
/* Whether the OAuth provider was linked to an existing account. */
  linked: Option[Boolean],
/* The account ID associated with the OAuth login. */
  account_id: Option[Integer],
/* Error code if additional verification is needed (e.g. `2fa_required`). */
  error_code: Option[String])

object PostOauthCallback200Response {
  import DateTimeCodecs._

  implicit val PostOauthCallback200ResponseCodecJson: CodecJson[PostOauthCallback200Response] = CodecJson.derive[PostOauthCallback200Response]
  implicit val PostOauthCallback200ResponseDecoder: EntityDecoder[PostOauthCallback200Response] = jsonOf[PostOauthCallback200Response]
  implicit val PostOauthCallback200ResponseEncoder: EntityEncoder[PostOauthCallback200Response] = jsonEncoderOf[PostOauthCallback200Response]
}
