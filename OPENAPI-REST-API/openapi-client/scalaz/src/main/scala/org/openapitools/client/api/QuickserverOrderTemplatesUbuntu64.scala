package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import QuickserverOrderTemplatesUbuntu64._

case class QuickserverOrderTemplatesUbuntu64 (
  
object QuickserverOrderTemplatesUbuntu64 {
  import DateTimeCodecs._

  implicit val QuickserverOrderTemplatesUbuntu64CodecJson: CodecJson[QuickserverOrderTemplatesUbuntu64] = CodecJson.derive[QuickserverOrderTemplatesUbuntu64]
  implicit val QuickserverOrderTemplatesUbuntu64Decoder: EntityDecoder[QuickserverOrderTemplatesUbuntu64] = jsonOf[QuickserverOrderTemplatesUbuntu64]
  implicit val QuickserverOrderTemplatesUbuntu64Encoder: EntityEncoder[QuickserverOrderTemplatesUbuntu64] = jsonEncoderOf[QuickserverOrderTemplatesUbuntu64]
}
