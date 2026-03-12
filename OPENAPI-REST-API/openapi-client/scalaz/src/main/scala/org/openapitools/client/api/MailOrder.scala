package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailOrder._

case class MailOrder (
  /* The ID of the order. */
  id: Integer,
/* The order status. */
  status: String,
/* The username to use for this order. */
  username: String,
/* Optional order comment. */
  comment: Option[String])

object MailOrder {
  import DateTimeCodecs._

  implicit val MailOrderCodecJson: CodecJson[MailOrder] = CodecJson.derive[MailOrder]
  implicit val MailOrderDecoder: EntityDecoder[MailOrder] = jsonOf[MailOrder]
  implicit val MailOrderEncoder: EntityEncoder[MailOrder] = jsonEncoderOf[MailOrder]
}
