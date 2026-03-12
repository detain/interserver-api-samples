package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200ResponseOsInner._

case class BuyItNowServerOrder200ResponseOsInner (
  id: Option[String],
short_desc: Option[String],
long_desc: Option[String],
monthly_price: Option[String])

object BuyItNowServerOrder200ResponseOsInner {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseOsInnerCodecJson: CodecJson[BuyItNowServerOrder200ResponseOsInner] = CodecJson.derive[BuyItNowServerOrder200ResponseOsInner]
  implicit val BuyItNowServerOrder200ResponseOsInnerDecoder: EntityDecoder[BuyItNowServerOrder200ResponseOsInner] = jsonOf[BuyItNowServerOrder200ResponseOsInner]
  implicit val BuyItNowServerOrder200ResponseOsInnerEncoder: EntityEncoder[BuyItNowServerOrder200ResponseOsInner] = jsonEncoderOf[BuyItNowServerOrder200ResponseOsInner]
}
