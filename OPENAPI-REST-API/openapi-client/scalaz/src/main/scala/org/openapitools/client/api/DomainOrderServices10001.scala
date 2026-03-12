package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainOrderServices10001._

case class DomainOrderServices10001 (
  /* Service ID */
  services_id: Option[String],
/* Service Name */
  services_name: Option[String],
/* Service Cost */
  services_cost: Option[String],
/* Currency of Service Cost */
  services_currency: Option[String],
/* Service Category */
  services_category: Option[String],
/* Buyable flag for Service */
  services_buyable: Option[String],
/* Service Type */
  services_type: Option[String],
/* Field 1 of Service */
  services_field1: Option[String],
/* Field 2 of Service */
  services_field2: Option[String],
/* Module of Service */
  services_module: Option[String],
/* Hidden flag for Service */
  services_hidden: Option[String])

object DomainOrderServices10001 {
  import DateTimeCodecs._

  implicit val DomainOrderServices10001CodecJson: CodecJson[DomainOrderServices10001] = CodecJson.derive[DomainOrderServices10001]
  implicit val DomainOrderServices10001Decoder: EntityDecoder[DomainOrderServices10001] = jsonOf[DomainOrderServices10001]
  implicit val DomainOrderServices10001Encoder: EntityEncoder[DomainOrderServices10001] = jsonEncoderOf[DomainOrderServices10001]
}
