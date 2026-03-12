package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetAccountTfaSetup200Response._

case class GetAccountTfaSetup200Response (
  /* Base64-encoded secret key for TOTP setup. */
  `2fa_google_key`: Option[String],
/* Human-readable formatted key (chunks of 4 characters). */
  `2fa_google_split`: Option[String])

object GetAccountTfaSetup200Response {
  import DateTimeCodecs._

  implicit val GetAccountTfaSetup200ResponseCodecJson: CodecJson[GetAccountTfaSetup200Response] = CodecJson.derive[GetAccountTfaSetup200Response]
  implicit val GetAccountTfaSetup200ResponseDecoder: EntityDecoder[GetAccountTfaSetup200Response] = jsonOf[GetAccountTfaSetup200Response]
  implicit val GetAccountTfaSetup200ResponseEncoder: EntityEncoder[GetAccountTfaSetup200Response] = jsonEncoderOf[GetAccountTfaSetup200Response]
}
