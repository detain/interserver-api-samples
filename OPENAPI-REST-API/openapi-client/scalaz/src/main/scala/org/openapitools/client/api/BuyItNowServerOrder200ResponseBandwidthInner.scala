package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200ResponseBandwidthInner._

case class BuyItNowServerOrder200ResponseBandwidthInner (
  id: Option[String],
short_desc: Option[String],
long_desc: Option[String],
monthly_price: Option[String])

object BuyItNowServerOrder200ResponseBandwidthInner {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseBandwidthInnerCodecJson: CodecJson[BuyItNowServerOrder200ResponseBandwidthInner] = CodecJson.derive[BuyItNowServerOrder200ResponseBandwidthInner]
  implicit val BuyItNowServerOrder200ResponseBandwidthInnerDecoder: EntityDecoder[BuyItNowServerOrder200ResponseBandwidthInner] = jsonOf[BuyItNowServerOrder200ResponseBandwidthInner]
  implicit val BuyItNowServerOrder200ResponseBandwidthInnerEncoder: EntityEncoder[BuyItNowServerOrder200ResponseBandwidthInner] = jsonEncoderOf[BuyItNowServerOrder200ResponseBandwidthInner]
}
