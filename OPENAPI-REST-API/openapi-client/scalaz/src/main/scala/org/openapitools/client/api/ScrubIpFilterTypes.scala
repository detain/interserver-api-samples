package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ScrubIpFilterTypes._

case class ScrubIpFilterTypes (
  success: Option[Boolean],
filters: Option[Map[String, ScrubIpFilterTypesFiltersValue]])

object ScrubIpFilterTypes {
  import DateTimeCodecs._

  implicit val ScrubIpFilterTypesCodecJson: CodecJson[ScrubIpFilterTypes] = CodecJson.derive[ScrubIpFilterTypes]
  implicit val ScrubIpFilterTypesDecoder: EntityDecoder[ScrubIpFilterTypes] = jsonOf[ScrubIpFilterTypes]
  implicit val ScrubIpFilterTypesEncoder: EntityEncoder[ScrubIpFilterTypes] = jsonEncoderOf[ScrubIpFilterTypes]
}
