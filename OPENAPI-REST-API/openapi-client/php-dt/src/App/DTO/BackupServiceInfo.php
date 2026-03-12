<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 */
class BackupServiceInfo
{
    /**
     * Backup ID.
     */
    #[DTA\Data(field: "backup_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_id = null;

    /**
     * Backup server ID.
     */
    #[DTA\Data(field: "backup_server", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_server = null;

    /**
     * Backup username.
     */
    #[DTA\Data(field: "backup_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_username = null;

    /**
     * Backup type.
     */
    #[DTA\Data(field: "backup_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_type = null;

    /**
     * Backup currency.
     */
    #[DTA\Data(field: "backup_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_currency = null;

    /**
     * Backup order date.
     */
    #[DTA\Data(field: "backup_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_order_date = null;

    /**
     * Backup customer ID.
     */
    #[DTA\Data(field: "backup_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_custid = null;

    /**
     * Backup quota.
     */
    #[DTA\Data(field: "backup_quota", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_quota = null;

    /**
     * Backup IP address.
     */
    #[DTA\Data(field: "backup_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_ip = null;

    /**
     * Backup status.
     */
    #[DTA\Data(field: "backup_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_status = null;

    /**
     * Backup invoice.
     */
    #[DTA\Data(field: "backup_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_invoice = null;

    /**
     * Backup coupon.
     */
    #[DTA\Data(field: "backup_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_coupon = null;

    /**
     * Backup extra information.
     */
    #[DTA\Data(field: "backup_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_extra = null;

    /**
     * Backup server status.
     */
    #[DTA\Data(field: "backup_server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_server_status = null;

    /**
     * Backup comment.
     */
    #[DTA\Data(field: "backup_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $backup_comment = null;

}
