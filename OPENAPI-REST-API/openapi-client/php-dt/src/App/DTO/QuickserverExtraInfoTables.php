<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverExtraInfoTables
{
    #[DTA\Data(field: "ip_info", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverIpInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverIpInfo::class])]
    public \App\DTO\QuickserverIpInfo|null $ip_info = null;

    #[DTA\Data(field: "addons", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverAddons::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverAddons::class])]
    public \App\DTO\QuickserverAddons|null $addons = null;

}
