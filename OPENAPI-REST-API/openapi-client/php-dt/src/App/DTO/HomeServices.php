<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Users services.
 */
class HomeServices
{
    #[DTA\Data(field: "domains", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesDomains::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesDomains::class])]
    public \App\DTO\HomeServicesDomains|null $domains = null;

    #[DTA\Data(field: "webhosting", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesWebhosting::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesWebhosting::class])]
    public \App\DTO\HomeServicesWebhosting|null $webhosting = null;

    #[DTA\Data(field: "vps", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesVps::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesVps::class])]
    public \App\DTO\HomeServicesVps|null $vps = null;

    #[DTA\Data(field: "licenses", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesLicenses::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesLicenses::class])]
    public \App\DTO\HomeServicesLicenses|null $licenses = null;

    #[DTA\Data(field: "servers", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesServers::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesServers::class])]
    public \App\DTO\HomeServicesServers|null $servers = null;

    #[DTA\Data(field: "backups", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesBackups::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesBackups::class])]
    public \App\DTO\HomeServicesBackups|null $backups = null;

}
