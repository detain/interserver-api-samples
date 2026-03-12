package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModulesBackups._

case class HomeDetailsModulesBackups (
  /* The icon for storages. */
  icon: Option[String],
/* Link to view backup. */
  view_link: Option[String],
/* Heading for storages. */
  heading: Option[String],
/* Link to order storage. */
  buy_link: Option[String],
/* Link to view backups list. */
  list_link: Option[String])

object HomeDetailsModulesBackups {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesBackupsCodecJson: CodecJson[HomeDetailsModulesBackups] = CodecJson.derive[HomeDetailsModulesBackups]
  implicit val HomeDetailsModulesBackupsDecoder: EntityDecoder[HomeDetailsModulesBackups] = jsonOf[HomeDetailsModulesBackups]
  implicit val HomeDetailsModulesBackupsEncoder: EntityEncoder[HomeDetailsModulesBackups] = jsonEncoderOf[HomeDetailsModulesBackups]
}
