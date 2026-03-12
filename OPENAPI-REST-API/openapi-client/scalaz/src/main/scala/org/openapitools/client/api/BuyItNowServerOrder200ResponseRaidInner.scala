package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200ResponseRaidInner._

case class BuyItNowServerOrder200ResponseRaidInner (
  id: Option[String],
short_desc: Option[String],
long_desc: Option[String],
monthly_price: Option[String])

object BuyItNowServerOrder200ResponseRaidInner {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseRaidInnerCodecJson: CodecJson[BuyItNowServerOrder200ResponseRaidInner] = CodecJson.derive[BuyItNowServerOrder200ResponseRaidInner]
  implicit val BuyItNowServerOrder200ResponseRaidInnerDecoder: EntityDecoder[BuyItNowServerOrder200ResponseRaidInner] = jsonOf[BuyItNowServerOrder200ResponseRaidInner]
  implicit val BuyItNowServerOrder200ResponseRaidInnerEncoder: EntityEncoder[BuyItNowServerOrder200ResponseRaidInner] = jsonEncoderOf[BuyItNowServerOrder200ResponseRaidInner]
}
