<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Supplementary information tables for a backup service (IP info, etc.).
 */
class BackupExtraInfoTables
{
    #[DTA\Data(field: "ip_info", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupIPInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupIPInfo::class])]
    public \App\DTO\BackupIPInfo|null $ip_info = null;

}
