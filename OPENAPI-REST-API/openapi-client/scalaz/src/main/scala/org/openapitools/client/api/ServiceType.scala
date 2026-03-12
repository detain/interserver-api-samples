package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServiceType._

case class ServiceType (
  st_id: Integer,
st_name: String,
st_category: Integer,
st_module: String)

object ServiceType {
  import DateTimeCodecs._

  implicit val ServiceTypeCodecJson: CodecJson[ServiceType] = CodecJson.derive[ServiceType]
  implicit val ServiceTypeDecoder: EntityDecoder[ServiceType] = jsonOf[ServiceType]
  implicit val ServiceTypeEncoder: EntityEncoder[ServiceType] = jsonEncoderOf[ServiceType]
}
