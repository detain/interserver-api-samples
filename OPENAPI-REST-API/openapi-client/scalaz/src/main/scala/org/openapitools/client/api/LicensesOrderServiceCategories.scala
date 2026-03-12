package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrderServiceCategories._

case class LicensesOrderServiceCategories (
  LicensesOrderServiceCategories509: Option[LicensesOrderServiceCategories509])

object LicensesOrderServiceCategories {
  import DateTimeCodecs._

  implicit val LicensesOrderServiceCategoriesCodecJson: CodecJson[LicensesOrderServiceCategories] = CodecJson.derive[LicensesOrderServiceCategories]
  implicit val LicensesOrderServiceCategoriesDecoder: EntityDecoder[LicensesOrderServiceCategories] = jsonOf[LicensesOrderServiceCategories]
  implicit val LicensesOrderServiceCategoriesEncoder: EntityEncoder[LicensesOrderServiceCategories] = jsonEncoderOf[LicensesOrderServiceCategories]
}
