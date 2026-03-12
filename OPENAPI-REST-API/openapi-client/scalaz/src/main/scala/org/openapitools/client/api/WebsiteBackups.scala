package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import WebsiteBackups._

case class WebsiteBackups (
  
object WebsiteBackups {
  import DateTimeCodecs._

  implicit val WebsiteBackupsCodecJson: CodecJson[WebsiteBackups] = CodecJson.derive[WebsiteBackups]
  implicit val WebsiteBackupsDecoder: EntityDecoder[WebsiteBackups] = jsonOf[WebsiteBackups]
  implicit val WebsiteBackupsEncoder: EntityEncoder[WebsiteBackups] = jsonEncoderOf[WebsiteBackups]
}
