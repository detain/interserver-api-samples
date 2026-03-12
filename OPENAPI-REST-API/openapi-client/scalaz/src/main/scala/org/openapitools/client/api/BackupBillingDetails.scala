package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupBillingDetails._

case class BackupBillingDetails (
  /* Last invoice date of the service. */
  service_last_invoice_date: Option[String],
/* Payment status of the service. */
  service_payment_status: Option[String],
/* Billing frequency of the service. */
  service_frequency: Option[String],
/* Next billing date of the service. */
  next_date: Option[String],
/* Next invoice date of the service. */
  service_next_invoice_date: Option[String],
/* Currency of the service. */
  service_currency: Option[String],
/* Currency symbol of the service. */
  service_currency_symbol: Option[String],
/* Cost information of the service. */
  service_cost_info: Option[String],
/* Service Extra Info */
  service_extra: Option[String],
/* JSON representation of extra service information. */
  service_extra_json: Option[String])

object BackupBillingDetails {
  import DateTimeCodecs._

  implicit val BackupBillingDetailsCodecJson: CodecJson[BackupBillingDetails] = CodecJson.derive[BackupBillingDetails]
  implicit val BackupBillingDetailsDecoder: EntityDecoder[BackupBillingDetails] = jsonOf[BackupBillingDetails]
  implicit val BackupBillingDetailsEncoder: EntityEncoder[BackupBillingDetails] = jsonEncoderOf[BackupBillingDetails]
}
