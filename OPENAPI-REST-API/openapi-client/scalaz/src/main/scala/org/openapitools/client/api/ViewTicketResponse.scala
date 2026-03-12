package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ViewTicketResponse._

case class ViewTicketResponse (
  success: Boolean,
ticket: TicketDetails,
ticket_custom_fields: Option[TicketCustomFieldDetails],
ticket_posts: Option[TicketPostDetails])

object ViewTicketResponse {
  import DateTimeCodecs._

  implicit val ViewTicketResponseCodecJson: CodecJson[ViewTicketResponse] = CodecJson.derive[ViewTicketResponse]
  implicit val ViewTicketResponseDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]
  implicit val ViewTicketResponseEncoder: EntityEncoder[ViewTicketResponse] = jsonEncoderOf[ViewTicketResponse]
}
