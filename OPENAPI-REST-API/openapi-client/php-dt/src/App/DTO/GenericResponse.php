<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Generic Response
 */
class GenericResponse
{
    #[DTA\Data(field: "status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    #[DTA\Data(field: "text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

}
