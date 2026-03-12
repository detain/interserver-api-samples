package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoOauthConfigProvidersValue._

case class AccountInfoOauthConfigProvidersValue (
  enabled: Option[Boolean],
linked: Option[Boolean],
account: Option[String],
url: Option[String])

object AccountInfoOauthConfigProvidersValue {
  import DateTimeCodecs._

  implicit val AccountInfoOauthConfigProvidersValueCodecJson: CodecJson[AccountInfoOauthConfigProvidersValue] = CodecJson.derive[AccountInfoOauthConfigProvidersValue]
  implicit val AccountInfoOauthConfigProvidersValueDecoder: EntityDecoder[AccountInfoOauthConfigProvidersValue] = jsonOf[AccountInfoOauthConfigProvidersValue]
  implicit val AccountInfoOauthConfigProvidersValueEncoder: EntityEncoder[AccountInfoOauthConfigProvidersValue] = jsonEncoderOf[AccountInfoOauthConfigProvidersValue]
}
