package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetOauthRedirect200Response._

case class GetOauthRedirect200Response (
  /* The URL to redirect the user to for OAuth authentication. */
  redirect_url: Option[String])

object GetOauthRedirect200Response {
  import DateTimeCodecs._

  implicit val GetOauthRedirect200ResponseCodecJson: CodecJson[GetOauthRedirect200Response] = CodecJson.derive[GetOauthRedirect200Response]
  implicit val GetOauthRedirect200ResponseDecoder: EntityDecoder[GetOauthRedirect200Response] = jsonOf[GetOauthRedirect200Response]
  implicit val GetOauthRedirect200ResponseEncoder: EntityEncoder[GetOauthRedirect200Response] = jsonEncoderOf[GetOauthRedirect200Response]
}
