<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetWebsiteBuyIp200Response
{
    /**
     * A map of IP addresses to their current reverse DNS hostnames.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection136::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection136::class])]
    public \App\DTO\Collection136|null $ips = null;

}
