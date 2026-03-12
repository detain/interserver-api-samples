<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesServers
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesServersLinks::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesServersLinks::class])]
    public \App\DTO\HomeServicesServersLinks|null $links = null;

    /**
     * Number of servers.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
