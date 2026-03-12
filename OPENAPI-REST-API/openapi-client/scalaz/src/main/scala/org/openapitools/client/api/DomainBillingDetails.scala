package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainBillingDetails._

case class DomainBillingDetails (
  /* Date of the last invoice for the domain. */
  service_last_invoice_date: Option[String],
/* Current payment status (e.g., Paid, Unpaid). */
  service_payment_status: Option[String],
/* Billing frequency (e.g., Yearly, Monthly). */
  service_frequency: Option[String],
/* Next billing date (ISO 8601). */
  next_date: Option[String],
/* Human-readable next invoice date. */
  service_next_invoice_date: Option[String],
/* Billing currency code. */
  service_currency: Option[String],
/* Billing currency symbol. */
  service_currency_symbol: Option[String],
/* Cost breakdown information. */
  service_cost_info: Option[String],
service_extra: Option[DomainBillingExtra],
/* Raw JSON string of extra billing data. */
  service_extra_json: Option[String])

object DomainBillingDetails {
  import DateTimeCodecs._

  implicit val DomainBillingDetailsCodecJson: CodecJson[DomainBillingDetails] = CodecJson.derive[DomainBillingDetails]
  implicit val DomainBillingDetailsDecoder: EntityDecoder[DomainBillingDetails] = jsonOf[DomainBillingDetails]
  implicit val DomainBillingDetailsEncoder: EntityEncoder[DomainBillingDetails] = jsonEncoderOf[DomainBillingDetails]
}
