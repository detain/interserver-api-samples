package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesBackups._

case class HomeServicesBackups (
  /* List of backup links. */
  links: Option[List[String]],
/* Number of backups. */
  count: Option[Integer])

object HomeServicesBackups {
  import DateTimeCodecs._

  implicit val HomeServicesBackupsCodecJson: CodecJson[HomeServicesBackups] = CodecJson.derive[HomeServicesBackups]
  implicit val HomeServicesBackupsDecoder: EntityDecoder[HomeServicesBackups] = jsonOf[HomeServicesBackups]
  implicit val HomeServicesBackupsEncoder: EntityEncoder[HomeServicesBackups] = jsonEncoderOf[HomeServicesBackups]
}
