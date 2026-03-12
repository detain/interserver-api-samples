package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import EmailAddressName._

case class EmailAddressName (
  /* The email address. */
  email: String,
/* Name to use for the sending contact. */
  name: Option[String])

object EmailAddressName {
  import DateTimeCodecs._

  implicit val EmailAddressNameCodecJson: CodecJson[EmailAddressName] = CodecJson.derive[EmailAddressName]
  implicit val EmailAddressNameDecoder: EntityDecoder[EmailAddressName] = jsonOf[EmailAddressName]
  implicit val EmailAddressNameEncoder: EntityEncoder[EmailAddressName] = jsonEncoderOf[EmailAddressName]
}
