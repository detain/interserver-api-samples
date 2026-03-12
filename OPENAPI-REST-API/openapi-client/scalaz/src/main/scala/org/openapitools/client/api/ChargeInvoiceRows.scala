package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ChargeInvoiceRows._

case class ChargeInvoiceRows (
  /* Whether the invoice retrieval was successful. */
  success: Option[Boolean],
/* List of invoices for the service. */
  invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValue]])

object ChargeInvoiceRows {
  import DateTimeCodecs._

  implicit val ChargeInvoiceRowsCodecJson: CodecJson[ChargeInvoiceRows] = CodecJson.derive[ChargeInvoiceRows]
  implicit val ChargeInvoiceRowsDecoder: EntityDecoder[ChargeInvoiceRows] = jsonOf[ChargeInvoiceRows]
  implicit val ChargeInvoiceRowsEncoder: EntityEncoder[ChargeInvoiceRows] = jsonEncoderOf[ChargeInvoiceRows]
}
