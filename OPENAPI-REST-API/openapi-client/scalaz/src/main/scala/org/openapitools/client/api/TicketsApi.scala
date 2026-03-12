package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import java.io.File
import java.net.URLEncoder
import java.util.UUID

import org.http4s._
import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.http4s.client._
import org.http4s.client.blaze.PooledHttp1Client
import org.http4s.headers._

import org.joda.time.DateTime

import scalaz.concurrent.Task

import HelperCodecs._

import org.openapitools.client.api.BigDecimal
import org.openapitools.client.api.CloseTicketResponseSchema
import org.openapitools.client.api.GetAccountInfo401Response
import org.openapitools.client.api.ReplyTicketRequest
import org.openapitools.client.api.ReplyTicketResponseSchema
import org.openapitools.client.api.TicketNew
import org.openapitools.client.api.TicketNewResponse
import org.openapitools.client.api.Tickets
import org.openapitools.client.api.UpdateTicket
import org.openapitools.client.api.UpdateTicketResponseSchema
import org.openapitools.client.api.ViewTicketResponse

object TicketsApi {

  val client = PooledHttp1Client()

  def escape(value: String): String = URLEncoder.encode(value, "utf-8").replaceAll("\\+", "%20")

  def addNewTicket(host: String, TicketNew: TicketNew): Task[TicketNewResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[TicketNewResponse] = jsonOf[TicketNewResponse]

    val path = "/tickets/new"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(TicketNew)
      resp          <- client.expect[TicketNewResponse](req)

    } yield resp
  }

  def closeTicket(host: String, id: String): Task[CloseTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[CloseTicketResponseSchema] = jsonOf[CloseTicketResponseSchema]

    val path = "/tickets/{id}/close".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CloseTicketResponseSchema](req)

    } yield resp
  }

  def deleteTicketInfo(host: String, id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def getNewTicket(host: String): Task[Unit] = {
    val path = "/tickets/new"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def getTicketInfo(host: String, id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def getTicketsList(host: String, page: Integer = 1, period: String = 30, view: String)(implicit pageQuery: QueryParam[Integer], periodQuery: QueryParam[String], viewQuery: QueryParam[String]): Task[Tickets] = {
    implicit val returnTypeDecoder: EntityDecoder[Tickets] = jsonOf[Tickets]

    val path = "/tickets"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("page", Some(pageQuery.toParamString(page))), ("period", Some(periodQuery.toParamString(period))), ("view", Some(viewQuery.toParamString(view))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[Tickets](req)

    } yield resp
  }

  def postTicketInfo(host: String, id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def postTicketsList(host: String): Task[Tickets] = {
    implicit val returnTypeDecoder: EntityDecoder[Tickets] = jsonOf[Tickets]

    val path = "/tickets"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[Tickets](req)

    } yield resp
  }

  def putTicketInfo(host: String, id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.PUT
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def replyTicket(host: String, id: BigDecimal, ReplyTicketRequest: ReplyTicketRequest): Task[ReplyTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[ReplyTicketResponseSchema] = jsonOf[ReplyTicketResponseSchema]

    val path = "/tickets/{id}/reply".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(ReplyTicketRequest)
      resp          <- client.expect[ReplyTicketResponseSchema](req)

    } yield resp
  }

  def updateTicketInfo(host: String, id: BigDecimal, UpdateTicket: UpdateTicket): Task[UpdateTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[UpdateTicketResponseSchema] = jsonOf[UpdateTicketResponseSchema]

    val path = "/tickets/{id}/update".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(host + path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(UpdateTicket)
      resp          <- client.expect[UpdateTicketResponseSchema](req)

    } yield resp
  }

}

class HttpServiceTicketsApi(service: HttpService) {
  val client = Client.fromHttpService(service)

  def escape(value: String): String = URLEncoder.encode(value, "utf-8").replaceAll("\\+", "%20")

  def addNewTicket(TicketNew: TicketNew): Task[TicketNewResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[TicketNewResponse] = jsonOf[TicketNewResponse]

    val path = "/tickets/new"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(TicketNew)
      resp          <- client.expect[TicketNewResponse](req)

    } yield resp
  }

  def closeTicket(id: String): Task[CloseTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[CloseTicketResponseSchema] = jsonOf[CloseTicketResponseSchema]

    val path = "/tickets/{id}/close".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[CloseTicketResponseSchema](req)

    } yield resp
  }

  def deleteTicketInfo(id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.DELETE
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def getNewTicket(): Task[Unit] = {
    val path = "/tickets/new"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.fetch[Unit](req)(_ => Task.now(()))

    } yield resp
  }

  def getTicketInfo(id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def getTicketsList(page: Integer = 1, period: String = 30, view: String)(implicit pageQuery: QueryParam[Integer], periodQuery: QueryParam[String], viewQuery: QueryParam[String]): Task[Tickets] = {
    implicit val returnTypeDecoder: EntityDecoder[Tickets] = jsonOf[Tickets]

    val path = "/tickets"

    val httpMethod = Method.GET
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      ("page", Some(pageQuery.toParamString(page))), ("period", Some(periodQuery.toParamString(period))), ("view", Some(viewQuery.toParamString(view))))

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[Tickets](req)

    } yield resp
  }

  def postTicketInfo(id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def postTicketsList(): Task[Tickets] = {
    implicit val returnTypeDecoder: EntityDecoder[Tickets] = jsonOf[Tickets]

    val path = "/tickets"

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[Tickets](req)

    } yield resp
  }

  def putTicketInfo(id: BigDecimal): Task[ViewTicketResponse] = {
    implicit val returnTypeDecoder: EntityDecoder[ViewTicketResponse] = jsonOf[ViewTicketResponse]

    val path = "/tickets/{id}".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.PUT
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType))
      resp          <- client.expect[ViewTicketResponse](req)

    } yield resp
  }

  def replyTicket(id: BigDecimal, ReplyTicketRequest: ReplyTicketRequest): Task[ReplyTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[ReplyTicketResponseSchema] = jsonOf[ReplyTicketResponseSchema]

    val path = "/tickets/{id}/reply".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(ReplyTicketRequest)
      resp          <- client.expect[ReplyTicketResponseSchema](req)

    } yield resp
  }

  def updateTicketInfo(id: BigDecimal, UpdateTicket: UpdateTicket): Task[UpdateTicketResponseSchema] = {
    implicit val returnTypeDecoder: EntityDecoder[UpdateTicketResponseSchema] = jsonOf[UpdateTicketResponseSchema]

    val path = "/tickets/{id}/update".replaceAll("\\{" + "id" + "\\}",escape(id.toString))

    val httpMethod = Method.POST
    val contentType = `Content-Type`(MediaType.`application/json`)
    val headers = Headers(
      )
    val queryParams = Query(
      )

    for {
      uri           <- Task.fromDisjunction(Uri.fromString(path))
      uriWithParams =  uri.copy(query = queryParams)
      req           =  Request(method = httpMethod, uri = uriWithParams, headers = headers.put(contentType)).withBody(UpdateTicket)
      resp          <- client.expect[UpdateTicketResponseSchema](req)

    } yield resp
  }

}
