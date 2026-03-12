<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PlaceScrubOrder201ResponseOrderDetails
{
    #[DTA\Data(field: "total_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $total_cost = null;

    #[DTA\Data(field: "service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_id = null;

    #[DTA\Data(field: "invoice_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $invoice_id = null;

    #[DTA\Data(field: "invoice_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoice_description = null;

    #[DTA\Data(field: "cj_params", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\PlaceScrubOrder201ResponseOrderDetailsCjParams::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\PlaceScrubOrder201ResponseOrderDetailsCjParams::class])]
    public \App\DTO\PlaceScrubOrder201ResponseOrderDetailsCjParams|null $cj_params = null;

}
