<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A single backed-up item and information about it.
 */
class VpsBackupRow
{
    /**
     * Backup Type
     */
    #[DTA\Data(field: "type")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * The service id such as vps  id.
     */
    #[DTA\Data(field: "service")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service = null;

    /**
     * The name of the backup.
     */
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    /**
     * Size of the file in bytes
     */
    #[DTA\Data(field: "size")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $size = null;

    /**
     * The creation date of the backup in a unix timestamp.
     */
    #[DTA\Data(field: "date")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $date = null;

}
