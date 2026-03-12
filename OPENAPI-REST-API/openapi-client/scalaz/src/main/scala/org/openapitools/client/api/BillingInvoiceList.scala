package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BillingInvoiceList._

case class BillingInvoiceList (
  /* Invoice rows returned for the account. */
  rows: Option[List[Any]],
/* Totals and summary data for the invoices list. */
  summary: Option[Any])

object BillingInvoiceList {
  import DateTimeCodecs._

  implicit val BillingInvoiceListCodecJson: CodecJson[BillingInvoiceList] = CodecJson.derive[BillingInvoiceList]
  implicit val BillingInvoiceListDecoder: EntityDecoder[BillingInvoiceList] = jsonOf[BillingInvoiceList]
  implicit val BillingInvoiceListEncoder: EntityEncoder[BillingInvoiceList] = jsonEncoderOf[BillingInvoiceList]
}
