package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServicesInfo._

case class ServicesInfo (
  modules: Modules,
services: Services,
serviceTypes: ServiceTypes,
serviceCategories: ServiceCategories)

object ServicesInfo {
  import DateTimeCodecs._

  implicit val ServicesInfoCodecJson: CodecJson[ServicesInfo] = CodecJson.derive[ServicesInfo]
  implicit val ServicesInfoDecoder: EntityDecoder[ServicesInfo] = jsonOf[ServicesInfo]
  implicit val ServicesInfoEncoder: EntityEncoder[ServicesInfo] = jsonEncoderOf[ServicesInfo]
}
