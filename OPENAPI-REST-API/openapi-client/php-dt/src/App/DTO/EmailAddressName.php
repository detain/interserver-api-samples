<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * An email contact.
 */
class EmailAddressName
{
    /**
     * The email address.
     */
    #[DTA\Data(field: "email")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    /**
     * Name to use for the sending contact.
     */
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

}
