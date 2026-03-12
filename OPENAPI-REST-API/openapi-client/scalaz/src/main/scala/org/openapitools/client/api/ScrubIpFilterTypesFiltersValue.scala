package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpFilterTypesFiltersValue._

case class ScrubIpFilterTypesFiltersValue (
  name: Option[String],
desc: Option[String])

object ScrubIpFilterTypesFiltersValue {
  import DateTimeCodecs._

  implicit val ScrubIpFilterTypesFiltersValueCodecJson: CodecJson[ScrubIpFilterTypesFiltersValue] = CodecJson.derive[ScrubIpFilterTypesFiltersValue]
  implicit val ScrubIpFilterTypesFiltersValueDecoder: EntityDecoder[ScrubIpFilterTypesFiltersValue] = jsonOf[ScrubIpFilterTypesFiltersValue]
  implicit val ScrubIpFilterTypesFiltersValueEncoder: EntityEncoder[ScrubIpFilterTypesFiltersValue] = jsonEncoderOf[ScrubIpFilterTypesFiltersValue]
}
