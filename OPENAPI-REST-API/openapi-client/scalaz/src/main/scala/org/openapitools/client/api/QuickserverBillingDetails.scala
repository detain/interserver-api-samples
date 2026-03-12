package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverBillingDetails._

case class QuickserverBillingDetails (
  /* Last invoice date */
  service_last_invoice_date: Option[String],
/* Payment status */
  service_payment_status: Option[String],
/* Service frequency */
  service_frequency: Option[String],
/* Next date */
  next_date: Option[String],
/* Next invoice date */
  service_next_invoice_date: Option[String],
/* Currency */
  service_currency: Option[String],
/* Currency symbol */
  service_currency_symbol: Option[String],
/* Cost information */
  service_cost_info: Option[String],
service_extra: Option[QuickserverServiceExtra],
/* Extra information (JSON format) */
  service_extra_json: Option[String])

object QuickserverBillingDetails {
  import DateTimeCodecs._

  implicit val QuickserverBillingDetailsCodecJson: CodecJson[QuickserverBillingDetails] = CodecJson.derive[QuickserverBillingDetails]
  implicit val QuickserverBillingDetailsDecoder: EntityDecoder[QuickserverBillingDetails] = jsonOf[QuickserverBillingDetails]
  implicit val QuickserverBillingDetailsEncoder: EntityEncoder[QuickserverBillingDetails] = jsonEncoderOf[QuickserverBillingDetails]
}
