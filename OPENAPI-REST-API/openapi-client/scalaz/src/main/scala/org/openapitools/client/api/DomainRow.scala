package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainRow._

case class DomainRow (
  /* The ID number of the domain in our billing system. */
  domain_id: Option[String],
/* The hostname of the domain. */
  domain_hostname: Option[String],
/* The expiration date of the domain. */
  domain_expire_date: Option[String],
/* The cost of the domain. */
  cost: Option[String],
/* The billing / registration status of the domain. */
  domain_status: Option[String])

object DomainRow {
  import DateTimeCodecs._

  implicit val DomainRowCodecJson: CodecJson[DomainRow] = CodecJson.derive[DomainRow]
  implicit val DomainRowDecoder: EntityDecoder[DomainRow] = jsonOf[DomainRow]
  implicit val DomainRowEncoder: EntityEncoder[DomainRow] = jsonEncoderOf[DomainRow]
}
