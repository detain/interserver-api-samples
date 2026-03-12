<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */
class WebsiteExtraInfoTables
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteTable::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteTable::class])]
    public \App\DTO\WebsiteTable|null $links = null;

    #[DTA\Data(field: "preview", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteTable::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteTable::class])]
    public \App\DTO\WebsiteTable|null $preview = null;

    #[DTA\Data(field: "dns", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteTable::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteTable::class])]
    public \App\DTO\WebsiteTable|null $dns = null;

}
