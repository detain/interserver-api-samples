package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServersBuyNowResponse._

case class ServersBuyNowResponse (
  /* Whether the order was placed successfully. */
  success: Option[Boolean],
/* Human-readable status message. */
  text: Option[String],
order_details: Option[ServersBuyNowResponseOrderDetails])

object ServersBuyNowResponse {
  import DateTimeCodecs._

  implicit val ServersBuyNowResponseCodecJson: CodecJson[ServersBuyNowResponse] = CodecJson.derive[ServersBuyNowResponse]
  implicit val ServersBuyNowResponseDecoder: EntityDecoder[ServersBuyNowResponse] = jsonOf[ServersBuyNowResponse]
  implicit val ServersBuyNowResponseEncoder: EntityEncoder[ServersBuyNowResponse] = jsonEncoderOf[ServersBuyNowResponse]
}
