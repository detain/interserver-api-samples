package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeTicketStatusView._

case class HomeTicketStatusView (
  /* Status corresponding to view number 4. */
  `4`: Option[String],
/* Status corresponding to view number 5. */
  `5`: Option[String],
/* Status corresponding to view number 6. */
  `6`: Option[String])

object HomeTicketStatusView {
  import DateTimeCodecs._

  implicit val HomeTicketStatusViewCodecJson: CodecJson[HomeTicketStatusView] = CodecJson.derive[HomeTicketStatusView]
  implicit val HomeTicketStatusViewDecoder: EntityDecoder[HomeTicketStatusView] = jsonOf[HomeTicketStatusView]
  implicit val HomeTicketStatusViewEncoder: EntityEncoder[HomeTicketStatusView] = jsonEncoderOf[HomeTicketStatusView]
}
