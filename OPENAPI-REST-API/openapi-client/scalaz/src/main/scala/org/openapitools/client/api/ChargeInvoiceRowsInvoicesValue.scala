package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ChargeInvoiceRowsInvoicesValue._

case class ChargeInvoiceRowsInvoicesValue (
  /* Unique invoice ID. */
  invoices_id: Option[BigDecimal],
/* Description of the invoice charge. */
  invoices_description: Option[String],
/* Invoice amount. */
  invoices_amount: Option[BigDecimal],
/* Invoice date. */
  invoices_date: Option[String],
invoices_paid: Option[InvoicesPaid],
invoices_due_date: Option[String],
invoices_currency: Option[String],
currency_symbol: Option[String],
invoices_date_formatted: Option[String],
/* This is optional when invoices_paid = 1 this array will show */
  paid_invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue]])

object ChargeInvoiceRowsInvoicesValue {
  import DateTimeCodecs._
  sealed trait InvoicesPaid
  case object `0` extends InvoicesPaid
  case object `1` extends InvoicesPaid

  object InvoicesPaid {
    def toInvoicesPaid(s: String): Option[InvoicesPaid] = s match {
      case "`0`" => Some(`0`)
      case "`1`" => Some(`1`)
      case _ => None
    }

    def fromInvoicesPaid(x: InvoicesPaid): String = x match {
      case `0` => "`0`"
      case `1` => "`1`"
    }
  }

  implicit val InvoicesPaidEnumEncoder: EncodeJson[InvoicesPaid] =
    EncodeJson[InvoicesPaid](is => StringEncodeJson(InvoicesPaid.fromInvoicesPaid(is)))

  implicit val InvoicesPaidEnumDecoder: DecodeJson[InvoicesPaid] =
    DecodeJson.optionDecoder[InvoicesPaid](n => n.string.flatMap(jStr => InvoicesPaid.toInvoicesPaid(jStr)), "InvoicesPaid failed to de-serialize")

  implicit val ChargeInvoiceRowsInvoicesValueCodecJson: CodecJson[ChargeInvoiceRowsInvoicesValue] = CodecJson.derive[ChargeInvoiceRowsInvoicesValue]
  implicit val ChargeInvoiceRowsInvoicesValueDecoder: EntityDecoder[ChargeInvoiceRowsInvoicesValue] = jsonOf[ChargeInvoiceRowsInvoicesValue]
  implicit val ChargeInvoiceRowsInvoicesValueEncoder: EntityEncoder[ChargeInvoiceRowsInvoicesValue] = jsonEncoderOf[ChargeInvoiceRowsInvoicesValue]
}
