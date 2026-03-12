<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for updateBackupInfo
 */
class UpdateBackupInfoParameterData
{
    /**
     * The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
