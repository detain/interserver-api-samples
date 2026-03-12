<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * an email address
 */
class EmailAddress
{
    /**
     * an email address
     */
    #[DTA\Data(field: "email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

}
