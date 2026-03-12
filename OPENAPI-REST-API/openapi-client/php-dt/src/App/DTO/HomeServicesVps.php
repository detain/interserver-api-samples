<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesVps
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesVpsLinks::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesVpsLinks::class])]
    public \App\DTO\HomeServicesVpsLinks|null $links = null;

    /**
     * Number of VPS services.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
