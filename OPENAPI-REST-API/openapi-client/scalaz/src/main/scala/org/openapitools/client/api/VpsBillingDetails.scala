package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsBillingDetails._

case class VpsBillingDetails (
  /* Last invoice date */
  service_last_invoice_date: Option[String],
/* Payment status */
  service_payment_status: Option[String],
/* Billing frequency */
  service_frequency: Option[String],
/* Next billing date */
  next_date: Option[String],
/* Next invoice date */
  service_next_invoice_date: Option[String],
/* Currency used for billing */
  service_currency: Option[String],
/* Currency symbol */
  service_currency_symbol: Option[String],
/* Billing coupon code */
  service_coupon: Option[String],
/* Cost information */
  service_cost_info: Option[String],
service_extra: Option[VpsServiceExtra],
/* Additional information in JSON format */
  service_extra_json: Option[String])

object VpsBillingDetails {
  import DateTimeCodecs._

  implicit val VpsBillingDetailsCodecJson: CodecJson[VpsBillingDetails] = CodecJson.derive[VpsBillingDetails]
  implicit val VpsBillingDetailsDecoder: EntityDecoder[VpsBillingDetails] = jsonOf[VpsBillingDetails]
  implicit val VpsBillingDetailsEncoder: EntityEncoder[VpsBillingDetails] = jsonEncoderOf[VpsBillingDetails]
}
