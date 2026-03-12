<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LicenseExtraInfoTables
{
    #[DTA\Data(field: "ip_info", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicenseIpInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicenseIpInfo::class])]
    public \App\DTO\LicenseIpInfo|null $ip_info = null;

}
