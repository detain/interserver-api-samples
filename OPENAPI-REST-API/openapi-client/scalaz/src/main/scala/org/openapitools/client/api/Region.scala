package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import Region._

case class Region (
  region_id: Option[Integer],
region_name: Option[String])

object Region {
  import DateTimeCodecs._

  implicit val RegionCodecJson: CodecJson[Region] = CodecJson.derive[Region]
  implicit val RegionDecoder: EntityDecoder[Region] = jsonOf[Region]
  implicit val RegionEncoder: EntityEncoder[Region] = jsonEncoderOf[Region]
}
