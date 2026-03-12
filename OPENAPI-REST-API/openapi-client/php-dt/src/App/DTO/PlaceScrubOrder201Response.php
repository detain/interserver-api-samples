<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PlaceScrubOrder201Response
{
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    #[DTA\Data(field: "order_details", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\PlaceScrubOrder201ResponseOrderDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\PlaceScrubOrder201ResponseOrderDetails::class])]
    public \App\DTO\PlaceScrubOrder201ResponseOrderDetails|null $order_details = null;

}
