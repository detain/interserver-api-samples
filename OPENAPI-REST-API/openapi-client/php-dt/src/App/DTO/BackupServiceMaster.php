<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BackupServiceMaster
{
    /**
     * Backup ID of the service master.
     */
    #[DTA\Data(field: "backup_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_id = null;

    /**
     * Name of the backup service.
     */
    #[DTA\Data(field: "backup_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_name = null;

    /**
     * IP address of the backup service.
     */
    #[DTA\Data(field: "backup_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_ip = null;

    /**
     * Type of the backup service.
     */
    #[DTA\Data(field: "backup_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_type = null;

    /**
     * Size of the backup service&#39;s hard drive.
     */
    #[DTA\Data(field: "backup_hdsize", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_hdsize = null;

    /**
     * Amount of free space on the backup service&#39;s hard drive.
     */
    #[DTA\Data(field: "backup_hdfree", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_hdfree = null;

    /**
     * Last update timestamp of the backup service.
     */
    #[DTA\Data(field: "backup_last_update", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_last_update = null;

    /**
     * Availability status of the backup service.
     */
    #[DTA\Data(field: "backup_available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_available = null;

    /**
     * I/O wait status of the backup service.
     */
    #[DTA\Data(field: "backup_iowait", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_iowait = null;

    /**
     * Order associated with the backup service.
     */
    #[DTA\Data(field: "backup_order", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $backup_order = null;

}
