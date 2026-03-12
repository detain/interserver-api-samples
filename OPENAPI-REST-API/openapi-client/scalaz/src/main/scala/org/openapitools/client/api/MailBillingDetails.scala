package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailBillingDetails._

case class MailBillingDetails (
  /* The last invoice date of the service. */
  service_last_invoice_date: Option[String],
/* The payment status of the service. */
  service_payment_status: Option[String],
/* The frequency of the service payment. */
  service_frequency: Option[String],
/* The next payment date of the service. */
  next_date: Option[String],
/* The next invoice date of the service. */
  service_next_invoice_date: Option[String],
/* The currency of the service. */
  service_currency: Option[String],
/* The currency symbol of the service. */
  service_currency_symbol: Option[String],
/* The cost information of the service. */
  service_cost_info: Option[String],
/* Extra information for the service. */
  service_extra: Option[List[String]],
/* Extra JSON information for the service. */
  service_extra_json: Option[String])

object MailBillingDetails {
  import DateTimeCodecs._

  implicit val MailBillingDetailsCodecJson: CodecJson[MailBillingDetails] = CodecJson.derive[MailBillingDetails]
  implicit val MailBillingDetailsDecoder: EntityDecoder[MailBillingDetails] = jsonOf[MailBillingDetails]
  implicit val MailBillingDetailsEncoder: EntityEncoder[MailBillingDetails] = jsonEncoderOf[MailBillingDetails]
}
