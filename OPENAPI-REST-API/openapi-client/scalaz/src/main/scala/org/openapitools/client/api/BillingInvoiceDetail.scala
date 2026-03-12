package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import BillingInvoiceDetail._

case class BillingInvoiceDetail (
  
object BillingInvoiceDetail {
  import DateTimeCodecs._

  implicit val BillingInvoiceDetailCodecJson: CodecJson[BillingInvoiceDetail] = CodecJson.derive[BillingInvoiceDetail]
  implicit val BillingInvoiceDetailDecoder: EntityDecoder[BillingInvoiceDetail] = jsonOf[BillingInvoiceDetail]
  implicit val BillingInvoiceDetailEncoder: EntityEncoder[BillingInvoiceDetail] = jsonEncoderOf[BillingInvoiceDetail]
}
