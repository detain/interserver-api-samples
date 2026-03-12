package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import PaymentInvoiceRows._

case class PaymentInvoiceRows (
  
object PaymentInvoiceRows {
  import DateTimeCodecs._

  implicit val PaymentInvoiceRowsCodecJson: CodecJson[PaymentInvoiceRows] = CodecJson.derive[PaymentInvoiceRows]
  implicit val PaymentInvoiceRowsDecoder: EntityDecoder[PaymentInvoiceRows] = jsonOf[PaymentInvoiceRows]
  implicit val PaymentInvoiceRowsEncoder: EntityEncoder[PaymentInvoiceRows] = jsonEncoderOf[PaymentInvoiceRows]
}
