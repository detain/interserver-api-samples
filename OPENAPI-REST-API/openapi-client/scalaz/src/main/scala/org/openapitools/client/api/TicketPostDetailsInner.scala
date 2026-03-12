package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketPostDetailsInner._

case class TicketPostDetailsInner (
  post_id: Option[Integer],
date: Option[String],
contents: Option[String],
creator: Option[Creator],
creator_email: Option[String],
creator_name: Option[String],
hasattachments: Option[Integer],
attachment_download: Option[String])

object TicketPostDetailsInner {
  import DateTimeCodecs._
  sealed trait Creator
  case object User extends Creator
  case object Staff extends Creator

  object Creator {
    def toCreator(s: String): Option[Creator] = s match {
      case "User" => Some(User)
      case "Staff" => Some(Staff)
      case _ => None
    }

    def fromCreator(x: Creator): String = x match {
      case User => "User"
      case Staff => "Staff"
    }
  }

  implicit val CreatorEnumEncoder: EncodeJson[Creator] =
    EncodeJson[Creator](is => StringEncodeJson(Creator.fromCreator(is)))

  implicit val CreatorEnumDecoder: DecodeJson[Creator] =
    DecodeJson.optionDecoder[Creator](n => n.string.flatMap(jStr => Creator.toCreator(jStr)), "Creator failed to de-serialize")

  implicit val TicketPostDetailsInnerCodecJson: CodecJson[TicketPostDetailsInner] = CodecJson.derive[TicketPostDetailsInner]
  implicit val TicketPostDetailsInnerDecoder: EntityDecoder[TicketPostDetailsInner] = jsonOf[TicketPostDetailsInner]
  implicit val TicketPostDetailsInnerEncoder: EntityEncoder[TicketPostDetailsInner] = jsonEncoderOf[TicketPostDetailsInner]
}
