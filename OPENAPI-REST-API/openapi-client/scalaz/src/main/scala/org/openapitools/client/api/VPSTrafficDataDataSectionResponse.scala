package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import VPSTrafficDataDataSectionResponse._

case class VPSTrafficDataDataSectionResponse (
  
object VPSTrafficDataDataSectionResponse {
  import DateTimeCodecs._

  implicit val VPSTrafficDataDataSectionResponseCodecJson: CodecJson[VPSTrafficDataDataSectionResponse] = CodecJson.derive[VPSTrafficDataDataSectionResponse]
  implicit val VPSTrafficDataDataSectionResponseDecoder: EntityDecoder[VPSTrafficDataDataSectionResponse] = jsonOf[VPSTrafficDataDataSectionResponse]
  implicit val VPSTrafficDataDataSectionResponseEncoder: EntityEncoder[VPSTrafficDataDataSectionResponse] = jsonEncoderOf[VPSTrafficDataDataSectionResponse]
}
