package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import VpsTrafficDataDataResponse._

case class VpsTrafficDataDataResponse (
  
object VpsTrafficDataDataResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficDataDataResponseCodecJson: CodecJson[VpsTrafficDataDataResponse] = CodecJson.derive[VpsTrafficDataDataResponse]
  implicit val VpsTrafficDataDataResponseDecoder: EntityDecoder[VpsTrafficDataDataResponse] = jsonOf[VpsTrafficDataDataResponse]
  implicit val VpsTrafficDataDataResponseEncoder: EntityEncoder[VpsTrafficDataDataResponse] = jsonEncoderOf[VpsTrafficDataDataResponse]
}
