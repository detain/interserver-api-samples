<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesDomains
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesDomainsLinks::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesDomainsLinks::class])]
    public \App\DTO\HomeServicesDomainsLinks|null $links = null;

    /**
     * Number of domains.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
