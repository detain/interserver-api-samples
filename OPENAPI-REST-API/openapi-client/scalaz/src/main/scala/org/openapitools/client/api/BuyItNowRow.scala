package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowRow._

case class BuyItNowRow (
  /* Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. */
  server_id: Option[String],
cpu: Option[List[BuyItNowRowCpuInner]],
memory: Option[String],
disk: Option[Map[String, String]],
bandwidth: Option[String],
ips: Option[String],
location: Option[String],
price: Option[Integer])

object BuyItNowRow {
  import DateTimeCodecs._

  implicit val BuyItNowRowCodecJson: CodecJson[BuyItNowRow] = CodecJson.derive[BuyItNowRow]
  implicit val BuyItNowRowDecoder: EntityDecoder[BuyItNowRow] = jsonOf[BuyItNowRow]
  implicit val BuyItNowRowEncoder: EntityEncoder[BuyItNowRow] = jsonEncoderOf[BuyItNowRow]
}
