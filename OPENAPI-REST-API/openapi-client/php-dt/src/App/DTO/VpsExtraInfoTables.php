<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Additional informational tables displayed for a VPS service.
 */
class VpsExtraInfoTables
{
    #[DTA\Data(field: "ip_info", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsIPInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsIPInfo::class])]
    public \App\DTO\VpsIPInfo|null $ip_info = null;

}
