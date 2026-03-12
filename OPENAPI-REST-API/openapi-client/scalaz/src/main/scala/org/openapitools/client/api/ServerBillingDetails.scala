package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerBillingDetails._

case class ServerBillingDetails (
  service_last_invoice_date: Option[String],
service_payment_status: Option[String],
service_frequency: Option[String],
next_date: Option[String],
service_next_invoice_date: Option[String],
service_currency: Option[String],
service_currency_symbol: Option[String],
service_cost_info: Option[String],
service_extra: Option[List[String]],
service_extra_json: Option[String])

object ServerBillingDetails {
  import DateTimeCodecs._

  implicit val ServerBillingDetailsCodecJson: CodecJson[ServerBillingDetails] = CodecJson.derive[ServerBillingDetails]
  implicit val ServerBillingDetailsDecoder: EntityDecoder[ServerBillingDetails] = jsonOf[ServerBillingDetails]
  implicit val ServerBillingDetailsEncoder: EntityEncoder[ServerBillingDetails] = jsonEncoderOf[ServerBillingDetails]
}
