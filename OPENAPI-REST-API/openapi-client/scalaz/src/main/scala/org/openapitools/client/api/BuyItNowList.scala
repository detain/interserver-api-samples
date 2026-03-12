package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import BuyItNowList._

case class BuyItNowList (
  
object BuyItNowList {
  import DateTimeCodecs._

  implicit val BuyItNowListCodecJson: CodecJson[BuyItNowList] = CodecJson.derive[BuyItNowList]
  implicit val BuyItNowListDecoder: EntityDecoder[BuyItNowList] = jsonOf[BuyItNowList]
  implicit val BuyItNowListEncoder: EntityEncoder[BuyItNowList] = jsonEncoderOf[BuyItNowList]
}
