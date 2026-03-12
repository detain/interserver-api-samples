package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOwnerContact._

case class DomainOwnerContact (
  postal_code: Option[String],
org_name: Option[String],
country: Option[String],
status: Option[String],
state: Option[String],
first_name: Option[String],
last_name: Option[String],
address3: Option[String],
fax: Option[String],
address2: Option[String],
email: Option[String],
city: Option[String],
phone: Option[String],
address1: Option[String])

object DomainOwnerContact {
  import DateTimeCodecs._

  implicit val DomainOwnerContactCodecJson: CodecJson[DomainOwnerContact] = CodecJson.derive[DomainOwnerContact]
  implicit val DomainOwnerContactDecoder: EntityDecoder[DomainOwnerContact] = jsonOf[DomainOwnerContact]
  implicit val DomainOwnerContactEncoder: EntityEncoder[DomainOwnerContact] = jsonEncoderOf[DomainOwnerContact]
}
