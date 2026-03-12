<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * SSH Keys
 */
class AccountSshKey
{
    #[DTA\Data(field: "ssh_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ssh_key = null;

}
