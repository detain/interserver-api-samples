import {interfaces} from 'inversify';

import { AccountService } from './api/account.service';
import { BackupsService } from './api/backups.service';
import { BillingService } from './api/billing.service';
import { DNSService } from './api/dNS.service';
import { DomainsService } from './api/domains.service';
import { FloatingIPsService } from './api/floatingIPs.service';
import { LicensesService } from './api/licenses.service';
import { MailService } from './api/mail.service';
import { PublicService } from './api/public.service';
import { QuickServersService } from './api/quickServers.service';
import { SSLCertificatesService } from './api/sSLCertificates.service';
import { ScrubIpsService } from './api/scrubIps.service';
import { ServersService } from './api/servers.service';
import { TicketsService } from './api/tickets.service';
import { VPSService } from './api/vPS.service';
import { WebhostingService } from './api/webhosting.service';

export class ApiServiceBinder {
    public static with(container: interfaces.Container) {
        container.bind<AccountService>('AccountService').to(AccountService).inSingletonScope();
        container.bind<BackupsService>('BackupsService').to(BackupsService).inSingletonScope();
        container.bind<BillingService>('BillingService').to(BillingService).inSingletonScope();
        container.bind<DNSService>('DNSService').to(DNSService).inSingletonScope();
        container.bind<DomainsService>('DomainsService').to(DomainsService).inSingletonScope();
        container.bind<FloatingIPsService>('FloatingIPsService').to(FloatingIPsService).inSingletonScope();
        container.bind<LicensesService>('LicensesService').to(LicensesService).inSingletonScope();
        container.bind<MailService>('MailService').to(MailService).inSingletonScope();
        container.bind<PublicService>('PublicService').to(PublicService).inSingletonScope();
        container.bind<QuickServersService>('QuickServersService').to(QuickServersService).inSingletonScope();
        container.bind<SSLCertificatesService>('SSLCertificatesService').to(SSLCertificatesService).inSingletonScope();
        container.bind<ScrubIpsService>('ScrubIpsService').to(ScrubIpsService).inSingletonScope();
        container.bind<ServersService>('ServersService').to(ServersService).inSingletonScope();
        container.bind<TicketsService>('TicketsService').to(TicketsService).inSingletonScope();
        container.bind<VPSService>('VPSService').to(VPSService).inSingletonScope();
        container.bind<WebhostingService>('WebhostingService').to(WebhostingService).inSingletonScope();
    }
}
