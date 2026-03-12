import { DynamicModule, HttpService, HttpModule, Module, Global, Provider } from '@nestjs/common';
import { AsyncConfiguration, Configuration, ConfigurationFactory } from './configuration';

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

@Global()
@Module({
  imports:      [ HttpModule ],
  exports:      [
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
    WebhostingService
  ],
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
    WebhostingService
  ]
})
export class ApiModule {
    public static forRoot(configurationFactory: () => Configuration): DynamicModule {
        return {
            module: ApiModule,
            providers: [ { provide: Configuration, useFactory: configurationFactory } ]
        };
    }

    /**
     * Register the module asynchronously.
     */
    static forRootAsync(options: AsyncConfiguration): DynamicModule {
        const providers = [...this.createAsyncProviders(options)];
        return {
            module: ApiModule,
            imports: options.imports || [],
            providers,
            exports: providers,
        };
    }

    private static createAsyncProviders(options: AsyncConfiguration): Provider[] {
        if (options.useClass) {
            return [
                this.createAsyncConfigurationProvider(options),
                {
                    provide: options.useClass,
                    useClass: options.useClass,
                },
            ];
        }
        return [this.createAsyncConfigurationProvider(options)];
    }

    private static createAsyncConfigurationProvider(
        options: AsyncConfiguration,
    ): Provider {
        if (options.useFactory) {
            return {
                provide: Configuration,
                useFactory: options.useFactory,
                inject: options.inject || [],
            };
        }
        return {
            provide: Configuration,
            useFactory: async (optionsFactory: ConfigurationFactory) =>
                await optionsFactory.createConfiguration(),
            inject: (options.useExisting && [options.useExisting]) || (options.useClass && [options.useClass]) || [],
        };
    }

    constructor( httpService: HttpService) { }
}
