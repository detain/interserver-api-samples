package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import UpdateTicketResponseSchema._

case class UpdateTicketResponseSchema (
  success: Option[Boolean],
message: Option[String])

object UpdateTicketResponseSchema {
  import DateTimeCodecs._

  implicit val UpdateTicketResponseSchemaCodecJson: CodecJson[UpdateTicketResponseSchema] = CodecJson.derive[UpdateTicketResponseSchema]
  implicit val UpdateTicketResponseSchemaDecoder: EntityDecoder[UpdateTicketResponseSchema] = jsonOf[UpdateTicketResponseSchema]
  implicit val UpdateTicketResponseSchemaEncoder: EntityEncoder[UpdateTicketResponseSchema] = jsonEncoderOf[UpdateTicketResponseSchema]
}
