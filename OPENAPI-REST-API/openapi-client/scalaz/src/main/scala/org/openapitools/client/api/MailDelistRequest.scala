package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailDelistRequest._

case class MailDelistRequest (
  /* Email address to delist. */
  unblock: Option[String])

object MailDelistRequest {
  import DateTimeCodecs._

  implicit val MailDelistRequestCodecJson: CodecJson[MailDelistRequest] = CodecJson.derive[MailDelistRequest]
  implicit val MailDelistRequestDecoder: EntityDecoder[MailDelistRequest] = jsonOf[MailDelistRequest]
  implicit val MailDelistRequestEncoder: EntityEncoder[MailDelistRequest] = jsonEncoderOf[MailDelistRequest]
}
