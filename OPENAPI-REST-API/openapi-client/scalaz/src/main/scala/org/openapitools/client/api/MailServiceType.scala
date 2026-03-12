package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailServiceType._

case class MailServiceType (
  /* The ID of the service type. */
  services_id: Option[String],
/* The name of the service type. */
  services_name: Option[String],
/* The cost of the service type. */
  services_cost: Option[String],
/* The category of the service type. */
  services_category: Option[String],
/* Whether the service type is buyable. */
  services_buyable: Option[String],
/* The type of the service type. */
  services_type: Option[String],
/* Additional field for the service type. */
  services_field1: Option[String],
/* Additional field for the service type. */
  services_field2: Option[String],
/* The module of the service type. */
  services_module: Option[String])

object MailServiceType {
  import DateTimeCodecs._

  implicit val MailServiceTypeCodecJson: CodecJson[MailServiceType] = CodecJson.derive[MailServiceType]
  implicit val MailServiceTypeDecoder: EntityDecoder[MailServiceType] = jsonOf[MailServiceType]
  implicit val MailServiceTypeEncoder: EntityEncoder[MailServiceType] = jsonEncoderOf[MailServiceType]
}
