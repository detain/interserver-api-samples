package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowServerOrder200Response._

case class BuyItNowServerOrder200Response (
  bandwidth: Option[List[BuyItNowServerOrder200ResponseBandwidthInner]],
ips: Option[List[BuyItNowServerOrder200ResponseIpsInner]],
os: Option[List[BuyItNowServerOrder200ResponseOsInner]],
cp: Option[List[BuyItNowServerOrder200ResponseCpInner]],
raid: Option[List[BuyItNowServerOrder200ResponseRaidInner]])

object BuyItNowServerOrder200Response {
  import DateTimeCodecs._

  implicit val BuyItNowServerOrder200ResponseCodecJson: CodecJson[BuyItNowServerOrder200Response] = CodecJson.derive[BuyItNowServerOrder200Response]
  implicit val BuyItNowServerOrder200ResponseDecoder: EntityDecoder[BuyItNowServerOrder200Response] = jsonOf[BuyItNowServerOrder200Response]
  implicit val BuyItNowServerOrder200ResponseEncoder: EntityEncoder[BuyItNowServerOrder200Response] = jsonEncoderOf[BuyItNowServerOrder200Response]
}
