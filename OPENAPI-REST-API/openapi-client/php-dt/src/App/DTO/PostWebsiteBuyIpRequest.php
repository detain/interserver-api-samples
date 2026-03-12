<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostWebsiteBuyIpRequest
{
    /**
     * A map of IP addresses to their desired reverse DNS hostnames.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection137::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection137::class])]
    public \App\DTO\Collection137|null $ips = null;

}
