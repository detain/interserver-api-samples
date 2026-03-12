<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request containing a password
 */
class PasswordRequest
{
    #[DTA\Data(field: "password")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $password = null;

}
