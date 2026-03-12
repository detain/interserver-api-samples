<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeDetailsModules
{
    #[DTA\Data(field: "domains", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesDomains::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesDomains::class])]
    public \App\DTO\HomeDetailsModulesDomains|null $domains = null;

    #[DTA\Data(field: "webhosting", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesWebhosting::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesWebhosting::class])]
    public \App\DTO\HomeDetailsModulesWebhosting|null $webhosting = null;

    #[DTA\Data(field: "vps", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesVps::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesVps::class])]
    public \App\DTO\HomeDetailsModulesVps|null $vps = null;

    #[DTA\Data(field: "licenses", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesLicenses::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesLicenses::class])]
    public \App\DTO\HomeDetailsModulesLicenses|null $licenses = null;

    #[DTA\Data(field: "backups", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesBackups::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesBackups::class])]
    public \App\DTO\HomeDetailsModulesBackups|null $backups = null;

    #[DTA\Data(field: "servers", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesServers::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesServers::class])]
    public \App\DTO\HomeDetailsModulesServers|null $servers = null;

    #[DTA\Data(field: "quickservers", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModulesQuickservers::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModulesQuickservers::class])]
    public \App\DTO\HomeDetailsModulesQuickservers|null $quickservers = null;

}
