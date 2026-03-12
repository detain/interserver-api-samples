package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicensesOrderServiceTypes11482._

case class LicensesOrderServiceTypes11482 (
  /* Service ID */
  services_id: Option[String],
/* Service Name */
  services_name: Option[String],
/* Service Cost */
  services_cost: Option[String],
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
  services_module: Option[String])

object LicensesOrderServiceTypes11482 {
  import DateTimeCodecs._

  implicit val LicensesOrderServiceTypes11482CodecJson: CodecJson[LicensesOrderServiceTypes11482] = CodecJson.derive[LicensesOrderServiceTypes11482]
  implicit val LicensesOrderServiceTypes11482Decoder: EntityDecoder[LicensesOrderServiceTypes11482] = jsonOf[LicensesOrderServiceTypes11482]
  implicit val LicensesOrderServiceTypes11482Encoder: EntityEncoder[LicensesOrderServiceTypes11482] = jsonEncoderOf[LicensesOrderServiceTypes11482]
}
