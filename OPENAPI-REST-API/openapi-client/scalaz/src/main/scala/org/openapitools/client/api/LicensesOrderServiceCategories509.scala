package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrderServiceCategories509._

case class LicensesOrderServiceCategories509 (
  /* Category ID */
  category_id: Option[String],
/* Category Name */
  category_name: Option[String],
/* Category Tag */
  category_tag: Option[String],
/* Category Module */
  category_module: Option[String])

object LicensesOrderServiceCategories509 {
  import DateTimeCodecs._

  implicit val LicensesOrderServiceCategories509CodecJson: CodecJson[LicensesOrderServiceCategories509] = CodecJson.derive[LicensesOrderServiceCategories509]
  implicit val LicensesOrderServiceCategories509Decoder: EntityDecoder[LicensesOrderServiceCategories509] = jsonOf[LicensesOrderServiceCategories509]
  implicit val LicensesOrderServiceCategories509Encoder: EntityEncoder[LicensesOrderServiceCategories509] = jsonEncoderOf[LicensesOrderServiceCategories509]
}
