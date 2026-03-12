package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import Modules._

case class Modules (
  
object Modules {
  import DateTimeCodecs._

  implicit val ModulesCodecJson: CodecJson[Modules] = CodecJson.derive[Modules]
  implicit val ModulesDecoder: EntityDecoder[Modules] = jsonOf[Modules]
  implicit val ModulesEncoder: EntityEncoder[Modules] = jsonEncoderOf[Modules]
}
