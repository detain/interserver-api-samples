package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountInfoDataFraudrecord._

case class AccountInfoDataFraudrecord (
  score: Option[String],
count: Option[String],
reliability: Option[String],
code: Option[String])

object AccountInfoDataFraudrecord {
  import DateTimeCodecs._

  implicit val AccountInfoDataFraudrecordCodecJson: CodecJson[AccountInfoDataFraudrecord] = CodecJson.derive[AccountInfoDataFraudrecord]
  implicit val AccountInfoDataFraudrecordDecoder: EntityDecoder[AccountInfoDataFraudrecord] = jsonOf[AccountInfoDataFraudrecord]
  implicit val AccountInfoDataFraudrecordEncoder: EntityEncoder[AccountInfoDataFraudrecord] = jsonEncoderOf[AccountInfoDataFraudrecord]
}
