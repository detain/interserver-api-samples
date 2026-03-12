package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Invoice._

case class Invoice (
  id: Option[Long])

object Invoice {
  import DateTimeCodecs._

  implicit val InvoiceCodecJson: CodecJson[Invoice] = CodecJson.derive[Invoice]
  implicit val InvoiceDecoder: EntityDecoder[Invoice] = jsonOf[Invoice]
  implicit val InvoiceEncoder: EntityEncoder[Invoice] = jsonEncoderOf[Invoice]
}
