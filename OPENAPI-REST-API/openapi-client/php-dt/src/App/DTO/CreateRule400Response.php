<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class CreateRule400Response
{
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection85::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection85::class])]
    public \App\DTO\Collection85|null $errors = null;

}
