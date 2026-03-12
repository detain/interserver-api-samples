package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200ResponseCpInner._

case class BuyItNowServerOrder200ResponseCpInner (
  id: Option[String],
short_desc: Option[String],
long_desc: Option[String],
os_type: Option[String],
monthly_price: Option[String])

object BuyItNowServerOrder200ResponseCpInner {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseCpInnerCodecJson: CodecJson[BuyItNowServerOrder200ResponseCpInner] = CodecJson.derive[BuyItNowServerOrder200ResponseCpInner]
  implicit val BuyItNowServerOrder200ResponseCpInnerDecoder: EntityDecoder[BuyItNowServerOrder200ResponseCpInner] = jsonOf[BuyItNowServerOrder200ResponseCpInner]
  implicit val BuyItNowServerOrder200ResponseCpInnerEncoder: EntityEncoder[BuyItNowServerOrder200ResponseCpInner] = jsonEncoderOf[BuyItNowServerOrder200ResponseCpInner]
}
