package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteBillingDetails._

case class WebsiteBillingDetails (
  /* Last invoice date for the service */
  service_last_invoice_date: Option[String],
/* Payment status for the service */
  service_payment_status: Option[String],
/* Frequency of the service */
  service_frequency: Option[String],
/* Next date for the service */
  next_date: Option[String],
/* Next invoice date for the service */
  service_next_invoice_date: Option[String],
/* Currency for the service */
  service_currency: Option[String],
/* Currency symbol for the service */
  service_currency_symbol: Option[String],
/* Coupon for the service */
  service_coupon: Option[String],
/* Cost information for the service */
  service_cost_info: Option[String],
/* Extra information for the service */
  service_extra: Option[Any],
/* Extra information in JSON format for the service */
  service_extra_json: Option[String])

object WebsiteBillingDetails {
  import DateTimeCodecs._

  implicit val WebsiteBillingDetailsCodecJson: CodecJson[WebsiteBillingDetails] = CodecJson.derive[WebsiteBillingDetails]
  implicit val WebsiteBillingDetailsDecoder: EntityDecoder[WebsiteBillingDetails] = jsonOf[WebsiteBillingDetails]
  implicit val WebsiteBillingDetailsEncoder: EntityEncoder[WebsiteBillingDetails] = jsonEncoderOf[WebsiteBillingDetails]
}
