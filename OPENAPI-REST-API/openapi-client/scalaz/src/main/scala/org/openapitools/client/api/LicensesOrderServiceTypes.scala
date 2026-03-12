package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrderServiceTypes._

case class LicensesOrderServiceTypes (
  LicensesOrderServiceTypes11482: Option[LicensesOrderServiceTypes11482])

object LicensesOrderServiceTypes {
  import DateTimeCodecs._

  implicit val LicensesOrderServiceTypesCodecJson: CodecJson[LicensesOrderServiceTypes] = CodecJson.derive[LicensesOrderServiceTypes]
  implicit val LicensesOrderServiceTypesDecoder: EntityDecoder[LicensesOrderServiceTypes] = jsonOf[LicensesOrderServiceTypes]
  implicit val LicensesOrderServiceTypesEncoder: EntityEncoder[LicensesOrderServiceTypes] = jsonEncoderOf[LicensesOrderServiceTypes]
}
