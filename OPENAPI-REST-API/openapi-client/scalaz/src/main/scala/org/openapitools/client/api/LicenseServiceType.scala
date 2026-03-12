package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicenseServiceType._

case class LicenseServiceType (
  /* Service ID */
  services_id: Option[String],
/* Service name */
  services_name: Option[String],
/* Service cost */
  services_cost: Option[String],
/* Service category */
  services_category: Option[String],
/* Buyable status */
  services_buyable: Option[String],
/* Service type */
  services_type: Option[String],
/* Service field 1 */
  services_field1: Option[String],
/* Service field 2 */
  services_field2: Option[String],
/* Service module */
  services_module: Option[String])

object LicenseServiceType {
  import DateTimeCodecs._

  implicit val LicenseServiceTypeCodecJson: CodecJson[LicenseServiceType] = CodecJson.derive[LicenseServiceType]
  implicit val LicenseServiceTypeDecoder: EntityDecoder[LicenseServiceType] = jsonOf[LicenseServiceType]
  implicit val LicenseServiceTypeEncoder: EntityEncoder[LicenseServiceType] = jsonEncoderOf[LicenseServiceType]
}
