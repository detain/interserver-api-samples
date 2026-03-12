<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesWebhosting
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesWebhostingLinks::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesWebhostingLinks::class])]
    public \App\DTO\HomeServicesWebhostingLinks|null $links = null;

    /**
     * Number of web hosting services.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
