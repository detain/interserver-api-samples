<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesBackups
{
    /**
     * List of backup links.
     */
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection40::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection40::class])]
    public \App\DTO\Collection40|null $links = null;

    /**
     * Number of backups.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
