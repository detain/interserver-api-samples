package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainTechContact._

case class DomainTechContact (
  state: Option[String],
status: Option[String],
org_name: Option[String],
country: Option[String],
postal_code: Option[String],
fax: Option[String],
email: Option[String],
address2: Option[String],
address3: Option[String],
address1: Option[String],
city: Option[String],
phone: Option[String],
first_name: Option[String],
last_name: Option[String])

object DomainTechContact {
  import DateTimeCodecs._

  implicit val DomainTechContactCodecJson: CodecJson[DomainTechContact] = CodecJson.derive[DomainTechContact]
  implicit val DomainTechContactDecoder: EntityDecoder[DomainTechContact] = jsonOf[DomainTechContact]
  implicit val DomainTechContactEncoder: EntityEncoder[DomainTechContact] = jsonEncoderOf[DomainTechContact]
}
