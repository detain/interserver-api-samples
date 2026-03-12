package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoOauthproviders._

case class AccountInfoOauthproviders (
  
object AccountInfoOauthproviders {
  import DateTimeCodecs._

  implicit val AccountInfoOauthprovidersCodecJson: CodecJson[AccountInfoOauthproviders] = CodecJson.derive[AccountInfoOauthproviders]
  implicit val AccountInfoOauthprovidersDecoder: EntityDecoder[AccountInfoOauthproviders] = jsonOf[AccountInfoOauthproviders]
  implicit val AccountInfoOauthprovidersEncoder: EntityEncoder[AccountInfoOauthproviders] = jsonEncoderOf[AccountInfoOauthproviders]
}
