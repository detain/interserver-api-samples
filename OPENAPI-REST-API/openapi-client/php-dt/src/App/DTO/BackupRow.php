<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 */
class BackupRow
{
    /**
     * The id of the backup.
     */
    #[DTA\Data(field: "backup_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_id = null;

    /**
     * The name of the backup.
     */
    #[DTA\Data(field: "backup_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_name = null;

    /**
     * The cost of the backup.
     */
    #[DTA\Data(field: "backup_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_cost = null;

    /**
     * The username of the backup.
     */
    #[DTA\Data(field: "backup_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_username = null;

    /**
     * The status of the backup.
     */
    #[DTA\Data(field: "backup_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_status = null;

    /**
     * The services name of the backup.
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

}
