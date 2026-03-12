import { NgModule, ModuleWithProviders, SkipSelf, Optional } from '@angular/core';
import { Configuration } from './configuration';
import { HttpClient } from '@angular/common/http';


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

@NgModule({
  imports:      [],
  declarations: [],
  exports:      [],
  providers: [
    AccountService,
    BackupsService,
    BillingService,
    DNSService,
    DomainsService,
    FloatingIPsService,
    LicensesService,
    MailService,
    PublicService,
    QuickServersService,
    SSLCertificatesService,
    ScrubIpsService,
    ServersService,
    TicketsService,
    VPSService,
    WebhostingService ]
})
export class ApiModule {
    public static forRoot(configurationFactory: () => Configuration): ModuleWithProviders<ApiModule> {
        return {
            ngModule: ApiModule,
            providers: [ { provide: Configuration, useFactory: configurationFactory } ]
        };
    }

    constructor( @Optional() @SkipSelf() parentModule: ApiModule,
                 @Optional() http: HttpClient) {
        if (parentModule) {
            throw new Error('ApiModule is already loaded. Import in your base AppModule only.');
        }
        if (!http) {
            throw new Error('You need to import the HttpClientModule in your AppModule! \n' +
            'See also https://github.com/angular/angular/issues/20575');
        }
    }
}
