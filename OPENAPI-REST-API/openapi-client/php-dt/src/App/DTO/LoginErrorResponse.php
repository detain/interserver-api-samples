<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Error resposne during login indicating further action.
 */
class LoginErrorResponse
{
    #[DTA\Data(field: "message", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message = null;

    #[DTA\Data(field: "field", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $field = null;

}
