package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfo._

case class AccountInfo (
  custid: Option[String],
ima: Option[String],
data: Option[AccountInfoData],
ip: Option[String],
oauthproviders: Option[AccountInfoOauthproviders],
oauthconfig: Option[AccountInfoOauthConfig],
oauthadapters: Option[List[String]],
limits: Option[AccountInfoLimits],
language: Option[String],
countryCurrencies: Option[AccountInfoCountryCurrencies],
enableLocales: Option[Boolean],
enableCurrencies: Option[Boolean],
gravatar: Option[String])

object AccountInfo {
  import DateTimeCodecs._

  implicit val AccountInfoCodecJson: CodecJson[AccountInfo] = CodecJson.derive[AccountInfo]
  implicit val AccountInfoDecoder: EntityDecoder[AccountInfo] = jsonOf[AccountInfo]
  implicit val AccountInfoEncoder: EntityEncoder[AccountInfo] = jsonEncoderOf[AccountInfo]
}
