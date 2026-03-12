package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PlaceBuyNowServerRequest._

case class PlaceBuyNowServerRequest (
  /* The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs. */
  server_id: Option[BigDecimal],
/* The fully-qualified hostname to assign to the server. */
  server_hostname: Option[String],
/* The root or administrator password to set on the server. */
  server_root_password: Option[String])

object PlaceBuyNowServerRequest {
  import DateTimeCodecs._

  implicit val PlaceBuyNowServerRequestCodecJson: CodecJson[PlaceBuyNowServerRequest] = CodecJson.derive[PlaceBuyNowServerRequest]
  implicit val PlaceBuyNowServerRequestDecoder: EntityDecoder[PlaceBuyNowServerRequest] = jsonOf[PlaceBuyNowServerRequest]
  implicit val PlaceBuyNowServerRequestEncoder: EntityEncoder[PlaceBuyNowServerRequest] = jsonEncoderOf[PlaceBuyNowServerRequest]
}
