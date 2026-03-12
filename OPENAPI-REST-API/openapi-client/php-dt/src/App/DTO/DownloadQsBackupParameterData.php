<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for downloadQsBackup
 */
class DownloadQsBackupParameterData
{
    /**
     * QuickServer ID number
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

    /**
     * Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.
     */
    #[DTA\Data(subset: "query", field: "all", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $all = null;

}
