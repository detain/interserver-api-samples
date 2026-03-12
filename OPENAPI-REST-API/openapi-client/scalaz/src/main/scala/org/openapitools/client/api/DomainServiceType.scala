package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainServiceType._

case class DomainServiceType (
  /* Service type ID. */
  services_id: Option[String],
/* Service type name (e.g., .com Registration). */
  services_name: Option[String],
/* Service cost per billing period. */
  services_cost: Option[String],
/* Service category ID. */
  services_category: Option[String],
/* Whether this service type is available for purchase. */
  services_buyable: Option[String],
/* Internal service type identifier. */
  services_type: Option[String],
/* TLD or first configurable field for the service type. */
  services_field1: Option[String],
/* Second configurable field for the service type. */
  services_field2: Option[String],
/* Backend module handling this service type. */
  services_module: Option[String])

object DomainServiceType {
  import DateTimeCodecs._

  implicit val DomainServiceTypeCodecJson: CodecJson[DomainServiceType] = CodecJson.derive[DomainServiceType]
  implicit val DomainServiceTypeDecoder: EntityDecoder[DomainServiceType] = jsonOf[DomainServiceType]
  implicit val DomainServiceTypeEncoder: EntityEncoder[DomainServiceType] = jsonEncoderOf[DomainServiceType]
}
