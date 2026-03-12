package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import License._

case class License (
  serviceInfo: LicenseServiceInfo,
client_links: List[LicenseClientLink],
billingDetails: LicenseBillingDetails,
/* Customer's currency */
  custCurrency: String,
/* Currency symbol for customer */
  custCurrencySymbol: String,
/* Package name */
  `package`: String,
/* Extra service information */
  serviceExtra: List[String],
extraInfoTables: LicenseExtraInfoTables,
/* Extra service overview information */
  service_overview_extra: String,
serviceType: LicenseServiceType,
/* License key */
  license_key: String)

object License {
  import DateTimeCodecs._

  implicit val LicenseCodecJson: CodecJson[License] = CodecJson.derive[License]
  implicit val LicenseDecoder: EntityDecoder[License] = jsonOf[License]
  implicit val LicenseEncoder: EntityEncoder[License] = jsonEncoderOf[License]
}
