package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import LicenseServiceInfo._

case class LicenseServiceInfo (
  /* License ID */
  license_id: String,
/* License type */
  license_type: String,
/* License currency */
  license_currency: String,
/* License order date */
  license_order_date: OffsetDateTime,
/* Customer ID */
  license_custid: String,
/* License IP */
  license_ip: String,
/* License status */
  license_status: String,
/* License invoice */
  license_invoice: String,
/* License coupon */
  license_coupon: String,
/* License hostname */
  license_hostname: Option[String],
/* License key */
  license_key: Option[String],
/* Additional license information */
  license_extra: Option[String])

object LicenseServiceInfo {
  import DateTimeCodecs._

  implicit val LicenseServiceInfoCodecJson: CodecJson[LicenseServiceInfo] = CodecJson.derive[LicenseServiceInfo]
  implicit val LicenseServiceInfoDecoder: EntityDecoder[LicenseServiceInfo] = jsonOf[LicenseServiceInfo]
  implicit val LicenseServiceInfoEncoder: EntityEncoder[LicenseServiceInfo] = jsonEncoderOf[LicenseServiceInfo]
}
