package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrderPackageCosts._

case class LicensesOrderPackageCosts (
  /* Cost of package with ID 11468 */
  LicensesOrderPackageCosts11468: Option[BigDecimal])

object LicensesOrderPackageCosts {
  import DateTimeCodecs._

  implicit val LicensesOrderPackageCostsCodecJson: CodecJson[LicensesOrderPackageCosts] = CodecJson.derive[LicensesOrderPackageCosts]
  implicit val LicensesOrderPackageCostsDecoder: EntityDecoder[LicensesOrderPackageCosts] = jsonOf[LicensesOrderPackageCosts]
  implicit val LicensesOrderPackageCostsEncoder: EntityEncoder[LicensesOrderPackageCosts] = jsonEncoderOf[LicensesOrderPackageCosts]
}
