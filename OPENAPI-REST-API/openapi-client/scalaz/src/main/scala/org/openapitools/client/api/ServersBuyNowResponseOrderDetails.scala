package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServersBuyNowResponseOrderDetails._

case class ServersBuyNowResponseOrderDetails (
  /* The newly created service ID for the ordered server. */
  service_id: Option[BigDecimal],
/* The invoice ID generated for the order. */
  invoice_id: Option[BigDecimal])

object ServersBuyNowResponseOrderDetails {
  import DateTimeCodecs._

  implicit val ServersBuyNowResponseOrderDetailsCodecJson: CodecJson[ServersBuyNowResponseOrderDetails] = CodecJson.derive[ServersBuyNowResponseOrderDetails]
  implicit val ServersBuyNowResponseOrderDetailsDecoder: EntityDecoder[ServersBuyNowResponseOrderDetails] = jsonOf[ServersBuyNowResponseOrderDetails]
  implicit val ServersBuyNowResponseOrderDetailsEncoder: EntityEncoder[ServersBuyNowResponseOrderDetails] = jsonEncoderOf[ServersBuyNowResponseOrderDetails]
}
