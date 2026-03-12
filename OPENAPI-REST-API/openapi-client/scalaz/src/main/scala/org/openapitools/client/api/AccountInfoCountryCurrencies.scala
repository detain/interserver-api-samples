package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import AccountInfoCountryCurrencies._

case class AccountInfoCountryCurrencies (
  
object AccountInfoCountryCurrencies {
  import DateTimeCodecs._

  implicit val AccountInfoCountryCurrenciesCodecJson: CodecJson[AccountInfoCountryCurrencies] = CodecJson.derive[AccountInfoCountryCurrencies]
  implicit val AccountInfoCountryCurrenciesDecoder: EntityDecoder[AccountInfoCountryCurrencies] = jsonOf[AccountInfoCountryCurrencies]
  implicit val AccountInfoCountryCurrenciesEncoder: EntityEncoder[AccountInfoCountryCurrencies] = jsonEncoderOf[AccountInfoCountryCurrencies]
}
