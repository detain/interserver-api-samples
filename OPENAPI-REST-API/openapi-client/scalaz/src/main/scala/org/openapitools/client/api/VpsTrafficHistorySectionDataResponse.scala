package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import VpsTrafficHistorySectionDataResponse._

case class VpsTrafficHistorySectionDataResponse (
  
object VpsTrafficHistorySectionDataResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficHistorySectionDataResponseCodecJson: CodecJson[VpsTrafficHistorySectionDataResponse] = CodecJson.derive[VpsTrafficHistorySectionDataResponse]
  implicit val VpsTrafficHistorySectionDataResponseDecoder: EntityDecoder[VpsTrafficHistorySectionDataResponse] = jsonOf[VpsTrafficHistorySectionDataResponse]
  implicit val VpsTrafficHistorySectionDataResponseEncoder: EntityEncoder[VpsTrafficHistorySectionDataResponse] = jsonEncoderOf[VpsTrafficHistorySectionDataResponse]
}
