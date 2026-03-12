<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsServiceExtra
{
    /**
     * Spice
     */
    #[DTA\Data(field: "spice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $spice = null;

    #[DTA\Data(field: "snapshots", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection112::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection112::class])]
    public \App\DTO\Collection112|null $snapshots = null;

}
