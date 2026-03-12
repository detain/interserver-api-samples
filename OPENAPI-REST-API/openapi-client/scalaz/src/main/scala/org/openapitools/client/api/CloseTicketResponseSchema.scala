package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CloseTicketResponseSchema._

case class CloseTicketResponseSchema (
  success: Option[Boolean],
text: Option[String])

object CloseTicketResponseSchema {
  import DateTimeCodecs._

  implicit val CloseTicketResponseSchemaCodecJson: CodecJson[CloseTicketResponseSchema] = CodecJson.derive[CloseTicketResponseSchema]
  implicit val CloseTicketResponseSchemaDecoder: EntityDecoder[CloseTicketResponseSchema] = jsonOf[CloseTicketResponseSchema]
  implicit val CloseTicketResponseSchemaEncoder: EntityEncoder[CloseTicketResponseSchema] = jsonEncoderOf[CloseTicketResponseSchema]
}
