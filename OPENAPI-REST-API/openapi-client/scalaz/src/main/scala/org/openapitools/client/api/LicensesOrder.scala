package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrder._

case class LicensesOrder (
  serviceCategories: Option[LicensesOrderServiceCategories],
packageCosts: Option[LicensesOrderPackageCosts],
serviceTypes: Option[LicensesOrderServiceTypes])

object LicensesOrder {
  import DateTimeCodecs._

  implicit val LicensesOrderCodecJson: CodecJson[LicensesOrder] = CodecJson.derive[LicensesOrder]
  implicit val LicensesOrderDecoder: EntityDecoder[LicensesOrder] = jsonOf[LicensesOrder]
  implicit val LicensesOrderEncoder: EntityEncoder[LicensesOrder] = jsonEncoderOf[LicensesOrder]
}
