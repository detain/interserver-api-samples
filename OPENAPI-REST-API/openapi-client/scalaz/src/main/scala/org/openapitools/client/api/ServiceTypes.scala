package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import ServiceTypes._

case class ServiceTypes (
  
object ServiceTypes {
  import DateTimeCodecs._

  implicit val ServiceTypesCodecJson: CodecJson[ServiceTypes] = CodecJson.derive[ServiceTypes]
  implicit val ServiceTypesDecoder: EntityDecoder[ServiceTypes] = jsonOf[ServiceTypes]
  implicit val ServiceTypesEncoder: EntityEncoder[ServiceTypes] = jsonEncoderOf[ServiceTypes]
}
