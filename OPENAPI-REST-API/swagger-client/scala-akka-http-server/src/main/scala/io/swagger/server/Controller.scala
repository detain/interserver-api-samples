package io.swagger.server

import akka.http.scaladsl.Http
import akka.http.scaladsl.server.Route
import io.swagger.server.api.AccountApi
import io.swagger.server.api.BackupsApi
import io.swagger.server.api.BillingApi
import io.swagger.server.api.DNSApi
import io.swagger.server.api.DomainsApi
import io.swagger.server.api.FloatingIPsApi
import io.swagger.server.api.LicensesApi
import io.swagger.server.api.MailApi
import io.swagger.server.api.PublicApi
import io.swagger.server.api.QuickServersApi
import io.swagger.server.api.SSLCertificatesApi
import io.swagger.server.api.ScrubIpsApi
import io.swagger.server.api.ServersApi
import io.swagger.server.api.TicketsApi
import io.swagger.server.api.VPSApi
import io.swagger.server.api.WebhostingApi
import akka.http.scaladsl.server.Directives._
import akka.actor.ActorSystem
import akka.stream.ActorMaterializer

class Controller(account: AccountApi, backups: BackupsApi, billing: BillingApi, dNS: DNSApi, domains: DomainsApi, floatingIPs: FloatingIPsApi, licenses: LicensesApi, mail: MailApi, public: PublicApi, quickServers: QuickServersApi, sSLCertificates: SSLCertificatesApi, scrubIps: ScrubIpsApi, servers: ServersApi, tickets: TicketsApi, vPS: VPSApi, webhosting: WebhostingApi)(implicit system: ActorSystem, materializer: ActorMaterializer) {

    lazy val routes: Route = account.route ~ backups.route ~ billing.route ~ dNS.route ~ domains.route ~ floatingIPs.route ~ licenses.route ~ mail.route ~ public.route ~ quickServers.route ~ sSLCertificates.route ~ scrubIps.route ~ servers.route ~ tickets.route ~ vPS.route ~ webhosting.route 

    Http().bindAndHandle(routes, "0.0.0.0", 9000)
}