package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostOauthCallbackRequest._

case class PostOauthCallbackRequest (
  /* The OAuth provider name (e.g. `Google`). */
  provider: Option[String])

object PostOauthCallbackRequest {
  import DateTimeCodecs._

  implicit val PostOauthCallbackRequestCodecJson: CodecJson[PostOauthCallbackRequest] = CodecJson.derive[PostOauthCallbackRequest]
  implicit val PostOauthCallbackRequestDecoder: EntityDecoder[PostOauthCallbackRequest] = jsonOf[PostOauthCallbackRequest]
  implicit val PostOauthCallbackRequestEncoder: EntityEncoder[PostOauthCallbackRequest] = jsonEncoderOf[PostOauthCallbackRequest]
}
