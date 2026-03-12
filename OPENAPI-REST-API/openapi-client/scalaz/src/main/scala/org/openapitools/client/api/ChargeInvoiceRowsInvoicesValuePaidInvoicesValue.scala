package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ChargeInvoiceRowsInvoicesValuePaidInvoicesValue._

case class ChargeInvoiceRowsInvoicesValuePaidInvoicesValue (
  invoices_id: Option[String],
invoices_description: Option[String],
invoices_amount: Option[BigDecimal],
invoices_date: Option[String],
invoices_currency: Option[String],
currency_symbol: Option[String],
invoices_date_formatted: Option[String],
payment_type: Option[String],
/* This is optional when refund is present this will show */
  refund_invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue]])

object ChargeInvoiceRowsInvoicesValuePaidInvoicesValue {
  import DateTimeCodecs._

  implicit val ChargeInvoiceRowsInvoicesValuePaidInvoicesValueCodecJson: CodecJson[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue] = CodecJson.derive[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue]
  implicit val ChargeInvoiceRowsInvoicesValuePaidInvoicesValueDecoder: EntityDecoder[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue] = jsonOf[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue]
  implicit val ChargeInvoiceRowsInvoicesValuePaidInvoicesValueEncoder: EntityEncoder[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue] = jsonEncoderOf[ChargeInvoiceRowsInvoicesValuePaidInvoicesValue]
}
