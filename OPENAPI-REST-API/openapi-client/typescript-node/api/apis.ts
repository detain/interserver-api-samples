export * from './accountApi';
import { AccountApi } from './accountApi';
export * from './backupsApi';
import { BackupsApi } from './backupsApi';
export * from './billingApi';
import { BillingApi } from './billingApi';
export * from './dNSApi';
import { DNSApi } from './dNSApi';
export * from './domainsApi';
import { DomainsApi } from './domainsApi';
export * from './floatingIPsApi';
import { FloatingIPsApi } from './floatingIPsApi';
export * from './licensesApi';
import { LicensesApi } from './licensesApi';
export * from './mailApi';
import { MailApi } from './mailApi';
export * from './publicApi';
import { PublicApi } from './publicApi';
export * from './quickServersApi';
import { QuickServersApi } from './quickServersApi';
export * from './sSLCertificatesApi';
import { SSLCertificatesApi } from './sSLCertificatesApi';
export * from './scrubIpsApi';
import { ScrubIpsApi } from './scrubIpsApi';
export * from './serversApi';
import { ServersApi } from './serversApi';
export * from './ticketsApi';
import { TicketsApi } from './ticketsApi';
export * from './vPSApi';
import { VPSApi } from './vPSApi';
export * from './webhostingApi';
import { WebhostingApi } from './webhostingApi';
import * as http from 'http';

export class HttpError extends Error {
    constructor (public response: http.IncomingMessage, public body: any, public statusCode?: number) {
        super('HTTP request failed');
        this.name = 'HttpError';
    }
}

export { RequestFile } from '../model/models';

export const APIS = [AccountApi, BackupsApi, BillingApi, DNSApi, DomainsApi, FloatingIPsApi, LicensesApi, MailApi, PublicApi, QuickServersApi, SSLCertificatesApi, ScrubIpsApi, ServersApi, TicketsApi, VPSApi, WebhostingApi];
