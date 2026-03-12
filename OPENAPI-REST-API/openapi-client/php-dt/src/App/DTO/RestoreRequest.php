<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request data to trigger a restore from backup.
 */
class RestoreRequest
{
    #[DTA\Data(field: "backup", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup = null;

    #[DTA\Data(field: "password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $password = null;

}
