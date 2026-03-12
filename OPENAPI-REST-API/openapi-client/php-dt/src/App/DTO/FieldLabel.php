<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A display label for a server order form field.
 */
class FieldLabel
{
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "active", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $active = null;

}
