package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseBillingDetails._

case class GetScrubIpDetails200ResponseBillingDetails (
  service_last_invoice_date: Option[String],
service_payment_status: Option[String],
service_frequency: Option[String],
next_date: Option[String],
service_next_invoice_date: Option[String],
service_currency: Option[String],
service_currency_symbol: Option[String],
service_cost_info: Option[String])

object GetScrubIpDetails200ResponseBillingDetails {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseBillingDetailsCodecJson: CodecJson[GetScrubIpDetails200ResponseBillingDetails] = CodecJson.derive[GetScrubIpDetails200ResponseBillingDetails]
  implicit val GetScrubIpDetails200ResponseBillingDetailsDecoder: EntityDecoder[GetScrubIpDetails200ResponseBillingDetails] = jsonOf[GetScrubIpDetails200ResponseBillingDetails]
  implicit val GetScrubIpDetails200ResponseBillingDetailsEncoder: EntityEncoder[GetScrubIpDetails200ResponseBillingDetails] = jsonEncoderOf[GetScrubIpDetails200ResponseBillingDetails]
}
