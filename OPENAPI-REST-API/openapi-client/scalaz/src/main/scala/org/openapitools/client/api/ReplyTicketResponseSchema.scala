package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ReplyTicketResponseSchema._

case class ReplyTicketResponseSchema (
  success: Option[Boolean],
post_id: Option[Integer])

object ReplyTicketResponseSchema {
  import DateTimeCodecs._

  implicit val ReplyTicketResponseSchemaCodecJson: CodecJson[ReplyTicketResponseSchema] = CodecJson.derive[ReplyTicketResponseSchema]
  implicit val ReplyTicketResponseSchemaDecoder: EntityDecoder[ReplyTicketResponseSchema] = jsonOf[ReplyTicketResponseSchema]
  implicit val ReplyTicketResponseSchemaEncoder: EntityEncoder[ReplyTicketResponseSchema] = jsonEncoderOf[ReplyTicketResponseSchema]
}
