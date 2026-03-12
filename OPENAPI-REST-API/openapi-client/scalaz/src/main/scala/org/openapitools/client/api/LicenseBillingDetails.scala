package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import LicenseBillingDetails._

case class LicenseBillingDetails (
  /* Last invoice date */
  service_last_invoice_date: Option[String],
/* Payment status */
  service_payment_status: Option[String],
/* Service frequency */
  service_frequency: Option[String],
/* Next date */
  next_date: Option[OffsetDateTime],
/* Next invoice date */
  service_next_invoice_date: Option[String],
/* Service currency */
  service_currency: Option[String],
/* Service currency symbol */
  service_currency_symbol: Option[String],
/* Service coupon */
  service_coupon: Option[String],
/* Service cost information */
  service_cost_info: Option[String],
/* Additional service information */
  service_extra: Option[List[String]],
/* Additional service information in JSON format */
  service_extra_json: Option[String])

object LicenseBillingDetails {
  import DateTimeCodecs._

  implicit val LicenseBillingDetailsCodecJson: CodecJson[LicenseBillingDetails] = CodecJson.derive[LicenseBillingDetails]
  implicit val LicenseBillingDetailsDecoder: EntityDecoder[LicenseBillingDetails] = jsonOf[LicenseBillingDetails]
  implicit val LicenseBillingDetailsEncoder: EntityEncoder[LicenseBillingDetails] = jsonEncoderOf[LicenseBillingDetails]
}
