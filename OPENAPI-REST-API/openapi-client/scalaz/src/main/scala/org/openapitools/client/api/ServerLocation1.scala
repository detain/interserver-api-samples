package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerLocation1._

case class ServerLocation1 (
  location_id: Integer,
location_name: String,
location_lat: String,
location_long: String,
location_description: Option[String],
location_ipmi_group: Option[Integer])

object ServerLocation1 {
  import DateTimeCodecs._

  implicit val ServerLocation1CodecJson: CodecJson[ServerLocation1] = CodecJson.derive[ServerLocation1]
  implicit val ServerLocation1Decoder: EntityDecoder[ServerLocation1] = jsonOf[ServerLocation1]
  implicit val ServerLocation1Encoder: EntityEncoder[ServerLocation1] = jsonEncoderOf[ServerLocation1]
}
