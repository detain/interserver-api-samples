package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200ResponseIpsInner._

case class BuyItNowServerOrder200ResponseIpsInner (
  id: Option[String],
short_desc: Option[String],
long_desc: Option[String],
monthly_price: Option[String])

object BuyItNowServerOrder200ResponseIpsInner {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseIpsInnerCodecJson: CodecJson[BuyItNowServerOrder200ResponseIpsInner] = CodecJson.derive[BuyItNowServerOrder200ResponseIpsInner]
  implicit val BuyItNowServerOrder200ResponseIpsInnerDecoder: EntityDecoder[BuyItNowServerOrder200ResponseIpsInner] = jsonOf[BuyItNowServerOrder200ResponseIpsInner]
  implicit val BuyItNowServerOrder200ResponseIpsInnerEncoder: EntityEncoder[BuyItNowServerOrder200ResponseIpsInner] = jsonEncoderOf[BuyItNowServerOrder200ResponseIpsInner]
}
