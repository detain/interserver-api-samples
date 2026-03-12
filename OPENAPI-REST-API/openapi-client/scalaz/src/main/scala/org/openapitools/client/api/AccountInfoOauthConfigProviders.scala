package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import AccountInfoOauthConfigProviders._

case class AccountInfoOauthConfigProviders (
  
object AccountInfoOauthConfigProviders {
  import DateTimeCodecs._

  implicit val AccountInfoOauthConfigProvidersCodecJson: CodecJson[AccountInfoOauthConfigProviders] = CodecJson.derive[AccountInfoOauthConfigProviders]
  implicit val AccountInfoOauthConfigProvidersDecoder: EntityDecoder[AccountInfoOauthConfigProviders] = jsonOf[AccountInfoOauthConfigProviders]
  implicit val AccountInfoOauthConfigProvidersEncoder: EntityEncoder[AccountInfoOauthConfigProviders] = jsonEncoderOf[AccountInfoOauthConfigProviders]
}
