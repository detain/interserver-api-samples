package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpPlaceOrder._

case class ScrubIpPlaceOrder (
  service_type: Integer,
ip: String)

object ScrubIpPlaceOrder {
  import DateTimeCodecs._

  implicit val ScrubIpPlaceOrderCodecJson: CodecJson[ScrubIpPlaceOrder] = CodecJson.derive[ScrubIpPlaceOrder]
  implicit val ScrubIpPlaceOrderDecoder: EntityDecoder[ScrubIpPlaceOrder] = jsonOf[ScrubIpPlaceOrder]
  implicit val ScrubIpPlaceOrderEncoder: EntityEncoder[ScrubIpPlaceOrder] = jsonEncoderOf[ScrubIpPlaceOrder]
}
