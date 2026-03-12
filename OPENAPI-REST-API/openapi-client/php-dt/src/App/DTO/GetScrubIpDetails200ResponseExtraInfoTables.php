<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseExtraInfoTables
{
    #[DTA\Data(field: "scrub_ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetScrubIpDetails200ResponseExtraInfoTablesScrubIps::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetScrubIpDetails200ResponseExtraInfoTablesScrubIps::class])]
    public \App\DTO\GetScrubIpDetails200ResponseExtraInfoTablesScrubIps|null $scrub_ips = null;

}
