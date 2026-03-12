package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import Services._

case class Services (
  
object Services {
  import DateTimeCodecs._

  implicit val ServicesCodecJson: CodecJson[Services] = CodecJson.derive[Services]
  implicit val ServicesDecoder: EntityDecoder[Services] = jsonOf[Services]
  implicit val ServicesEncoder: EntityEncoder[Services] = jsonEncoderOf[Services]
}
