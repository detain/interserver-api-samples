package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import EmailAddress._

case class EmailAddress (
  /* an email address */
  email: Option[String])

object EmailAddress {
  import DateTimeCodecs._

  implicit val EmailAddressCodecJson: CodecJson[EmailAddress] = CodecJson.derive[EmailAddress]
  implicit val EmailAddressDecoder: EntityDecoder[EmailAddress] = jsonOf[EmailAddress]
  implicit val EmailAddressEncoder: EntityEncoder[EmailAddress] = jsonEncoderOf[EmailAddress]
}
