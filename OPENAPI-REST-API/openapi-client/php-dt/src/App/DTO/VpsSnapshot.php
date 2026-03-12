<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A VPS snapshot (point-in-time backup) stored on the host node.
 */
class VpsSnapshot
{
    /**
     * Snapshot name.
     */
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    /**
     * Disk space used by this snapshot in bytes.
     */
    #[DTA\Data(field: "used", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $used = null;

    /**
     * Unix timestamp of when the snapshot was created.
     */
    #[DTA\Data(field: "date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $date = null;

}
