package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import InvoiceRow._

case class InvoiceRow (
  
object InvoiceRow {
  import DateTimeCodecs._

  implicit val InvoiceRowCodecJson: CodecJson[InvoiceRow] = CodecJson.derive[InvoiceRow]
  implicit val InvoiceRowDecoder: EntityDecoder[InvoiceRow] = jsonOf[InvoiceRow]
  implicit val InvoiceRowEncoder: EntityEncoder[InvoiceRow] = jsonEncoderOf[InvoiceRow]
}
