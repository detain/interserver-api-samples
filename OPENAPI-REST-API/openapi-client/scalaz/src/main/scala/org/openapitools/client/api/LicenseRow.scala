package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import LicenseRow._

case class LicenseRow (
  /* The id of the license. */
  license_id: Option[String],
/* The hostname of the license. */
  license_hostname: Option[String],
/* The ip of the license. */
  license_ip: Option[String],
/* The services name of the license. */
  services_name: Option[String],
/* The cost of the license. */
  cost: Option[String],
/* The status of the license. */
  license_status: Option[String],
/* The invoices paid of the license. */
  invoices_paid: Option[String],
/* The invoices date of the license. */
  invoices_date: Option[OffsetDateTime])

object LicenseRow {
  import DateTimeCodecs._

  implicit val LicenseRowCodecJson: CodecJson[LicenseRow] = CodecJson.derive[LicenseRow]
  implicit val LicenseRowDecoder: EntityDecoder[LicenseRow] = jsonOf[LicenseRow]
  implicit val LicenseRowEncoder: EntityEncoder[LicenseRow] = jsonEncoderOf[LicenseRow]
}
