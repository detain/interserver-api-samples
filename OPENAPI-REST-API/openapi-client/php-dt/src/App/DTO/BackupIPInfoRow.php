<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A single row in the backup IP information table.
 */
class BackupIPInfoRow
{
    /**
     * Description of the IP information.
     */
    #[DTA\Data(field: "desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $desc = null;

    /**
     * Value of the IP information.
     */
    #[DTA\Data(field: "value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $value = null;

}
