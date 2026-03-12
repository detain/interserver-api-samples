package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import AccountInfoDataCcs._

case class AccountInfoDataCcs (
  
object AccountInfoDataCcs {
  import DateTimeCodecs._

  implicit val AccountInfoDataCcsCodecJson: CodecJson[AccountInfoDataCcs] = CodecJson.derive[AccountInfoDataCcs]
  implicit val AccountInfoDataCcsDecoder: EntityDecoder[AccountInfoDataCcs] = jsonOf[AccountInfoDataCcs]
  implicit val AccountInfoDataCcsEncoder: EntityEncoder[AccountInfoDataCcs] = jsonEncoderOf[AccountInfoDataCcs]
}
