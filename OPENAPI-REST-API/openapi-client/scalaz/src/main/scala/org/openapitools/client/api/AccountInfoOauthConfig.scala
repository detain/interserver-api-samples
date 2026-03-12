package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoOauthConfig._

case class AccountInfoOauthConfig (
  callback: String,
providers: AccountInfoOauthConfigProviders)

object AccountInfoOauthConfig {
  import DateTimeCodecs._

  implicit val AccountInfoOauthConfigCodecJson: CodecJson[AccountInfoOauthConfig] = CodecJson.derive[AccountInfoOauthConfig]
  implicit val AccountInfoOauthConfigDecoder: EntityDecoder[AccountInfoOauthConfig] = jsonOf[AccountInfoOauthConfig]
  implicit val AccountInfoOauthConfigEncoder: EntityEncoder[AccountInfoOauthConfig] = jsonEncoderOf[AccountInfoOauthConfig]
}
